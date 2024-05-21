#include "data_base.h"
#include "mesure.cpp"
#include "machine.cpp"
//g++ main.cpp -o test -l PocoDataODBC  -l PocoData -l PocoFoundation


DATA_BASE::DATA_BASE(string dsn){

        //connexion à la base de données

    m_session = NULL;
    m_connexionOk = true;
    ODBC::Connector::registerConnector();
    try
    {
        m_session= new Session("ODBC", "DSN="+dsn);
        cout <<"the connexion is 100" <<endl;
    }
    catch (ConnectionFailedException& ce)
    {
        m_last_error= ce.displayText();
        m_connexionOk = false;
        
    }
}

DATA_BASE::~DATA_BASE(){
    delete m_session;
}

vector<MESURE> DATA_BASE::recuperer_mesures_historiques(const string& nom_module)
{
    vector<MESURE> mesures;

    try
    {
        Statement *select;
        RecordSet *resultat;
        select = new Statement(*m_session);
        *select << "SELECT tension, intensite, puissance, date_mesure FROM Mesures WHERE date_mesure >= NOW() - INTERVAL '24 hours'";
        resultat = new RecordSet(*select);

        // Parcourir les résultats et stocker les mesures dans le vecteur
    
        while (!select->done())
        {
            select->execute();              
            bool more = resultat->moveFirst();
            while (more)
            {
                MESURE mesure;
                mesure.set_nom_module(nom_module);
                mesure.set_tension(resultat->value("tension").convert<double>());
                mesure.set_intensite(resultat->value("intensite").convert<double>());
                mesure.set_puissance(resultat->value("puissance").convert<double>());
                //mesure.set_date_mesure(resultat->value("date_mesure").convert<std::string>());

                mesures.push_back(mesure);
                more = resultat->moveNext();
            }
        }

        delete resultat;
        //delete select;   
    }
    catch (ODBC::StatementException &se)
    {
        cerr << "Erreur ODBC: " << se.toString() << endl;
    }
    
    return mesures;
}

bool DATA_BASE::get_etat_secteur(const string& nom_secteur){

    bool etat = false;

    Statement *select = nullptr;
    RecordSet *resultat = nullptr;
    try
    {
        select = new Statement (*m_session);
        *select << "SELECT etat_secteur FROM secteurs WHERE nom_secteur = '"+ nom_secteur +"'";
        resultat = new RecordSet(*select);
        select->execute();
        if(resultat->rowCount() > 0){
            etat = resultat->value("etat_secteur").convert<bool>();
        }

        delete resultat;
        //delete select;
    }
    catch (ODBC::StatementException &se)
    {
        cerr << "Erreur ODBC: " << se.toString() << endl;
    }

    return etat;
}

bool DATA_BASE::get_etat_secteur_demande(const string& nom_secteur){

    bool etat_demande = false; // Valeur par défaut

    Statement *select = nullptr;
    RecordSet *resultat = nullptr;
    try
    {
        select = new Statement (*m_session);
        *select << "SELECT etat_secteur_demande FROM secteurs WHERE nom_secteur = '"+ nom_secteur +"'";
        resultat = new RecordSet(*select);
        select->execute();
        if(resultat->rowCount() > 0){
            etat_demande = resultat->value("etat_secteur_demande").convert<bool>();
        }

        delete resultat;
        //delete select;
    }
    catch (ODBC::StatementException &se)
    {
        cout << "Erreur ODBC: " << se.toString() << endl;
    }

    return etat_demande;
}

bool DATA_BASE::get_etat_module(const string& nom_module){
     bool etat = false; // Valeur par défaut

    Statement *select = nullptr;
    RecordSet *resultat = nullptr;
    try
    {
        select = new Statement (*m_session);
        *select << "SELECT etat_module FROM modules WHERE nom_module = '"+ nom_module +"'";
        resultat = new RecordSet(*select);
        select->execute();
        if(resultat->rowCount() > 0){
            etat = resultat->value("etat_module").convert<bool>();
        }

        delete resultat;
       // delete select;
    }
    catch (ODBC::StatementException &se)
    {
        cerr << "Erreur ODBC: " << se.toString() << endl;
    }

    return etat;
}

bool DATA_BASE::get_etat_module_demande(const string& nom_module){

    bool etat_demande = false; // Valeur par défaut

    Statement *select = nullptr;
    RecordSet *resultat = nullptr;
    try
    {
        select = new Statement (*m_session);
        *select << "SELECT etat_module_demande FROM modules WHERE nom_module = '"+ nom_module +"'";
        resultat = new RecordSet(*select);
        select->execute();
        if(resultat->rowCount() > 0){
            etat_demande = resultat->value("etat_module_demande").convert<bool>();
        }

        delete resultat;
        //delete select;
    }
    catch (ODBC::StatementException &se)
    {
        cerr << "Erreur ODBC: " << se.toString() << endl;
    }

    return etat_demande;
}

void DATA_BASE::set_etat_secteur(const string& nom_secteur, bool etat)
{
    try
    {
        Statement *select = new Statement(*m_session);
        *select << "UPDATE secteurs SET etat_secteur = " + string(etat ? "true" : "false") + " WHERE nom_secteur = '"+ nom_secteur +"'";
        select->execute();

        //delete select;
    }
    catch (ODBC::StatementException &se)
    {
        cerr << "Erreur ODBC: " << se.toString() << endl;
    }

}

void DATA_BASE::set_etat_secteur_demande(const string& nom_secteur, bool etat){
    try
    {
        Statement *select = new Statement(*m_session);
        *select << "UPDATE secteurs SET etat_secteur_demande = " + string(etat ? "true" : "false") + " WHERE nom_secteur = '"+ nom_secteur +"'";
        select->execute();

        //delete select;
    }
    catch (ODBC::StatementException &se)
    {
        cerr << "Erreur ODBC: " << se.toString() << endl;
    }
}

void DATA_BASE::set_etat_des_machines_du_module(const string &nom_module, bool etat){

    try {
        // Récupérer l'identifiant du module à partir de son nom
        string module_id;
        
        Statement *select;
        RecordSet *resultat;
        select = new Statement(*m_session);
        *select << "SELECT id FROM Modules WHERE nom_module = '"+nom_module+"'";
        resultat = new RecordSet(*select);
        select->execute(); 
        module_id = resultat->value("id").convert<std::string>();
        std::cout<<"identifiant du module est : "<<module_id<<endl;
        //delete select;
        //delete resultat;

        if (!module_id.empty()) {
            Statement *update;
            update = new Statement(*m_session);
            *update << "UPDATE Machines SET etat_pc = "+ string(etat ? "true" : "false") + " WHERE module_id = '"+module_id+"'";
            //RecordSet *resultat2;
            resultat = new RecordSet(*update);
            while(!update->done()){
                update->execute();
                std::cout << "L'état des machines du module " << nom_module << " a été mis à jour." << endl;
            }
            delete update;
        } 
        else {
            cout << "Aucun module trouvé avec le nom spécifié." << endl;
        }
       // delete select;
        delete resultat;
        
    }
    catch (const Poco::Data::DataException& e) {
        cerr << "Erreur SQL: " << e.displayText() << endl;
    }
}

void DATA_BASE::set_etat_demande_des_machines_du_module(const string &nom_module, bool etat){
    try {
        // Récupérer l'identifiant du module à partir de son nom
        string module_id;
        
        Statement *select;
        RecordSet *resultat;
        select = new Statement(*m_session);
        *select << "SELECT id FROM Modules WHERE nom_module = '"+nom_module+"'";
        resultat = new RecordSet(*select);
        select->execute(); 
        module_id = resultat->value("id").convert<std::string>();
        std::cout<<"identifiant du module est : "<<module_id<<endl;

        if (!module_id.empty()) {
            Statement *update;
            update = new Statement(*m_session);
            *update << "UPDATE Machines SET etat_pc_demande = "+ string(etat ? "true" : "false") + " WHERE module_id = '"+module_id+"'";

            resultat = new RecordSet(*update);
            while(!update->done()){
                update->execute();
                std::cout << "L'état demande des machines du module " << nom_module << " a été mis à jour." << endl;
            }
            delete update;
        } 
        else {
            std::cout << "Aucun module trouvé avec le nom spécifié." << endl;
        }
       // delete select;
        delete resultat;
    } 
    catch (const Poco::Data::DataException& e) {
        cerr << "Erreur SQL: " << e.displayText() << endl;
    }
}

void DATA_BASE::set_etat_des_modules_du_secteur(const string& nom_secteur, bool etat){
     try {
        // Récupérer l'identifiant du module à partir de son nom
        string secteur_id;
        
        Statement *select;
        RecordSet *resultat;
        select = new Statement(*m_session);
        *select << "SELECT id FROM Secteurs WHERE nom_secteur = '"+nom_secteur+"'";
        resultat = new RecordSet(*select);
        select->execute(); 
        secteur_id = resultat->value("id").convert<std::string>();
        std::cout<<"identifiant du secteur est : "<<secteur_id<<endl;

        if (!secteur_id.empty()) {
            Statement *update;
            update = new Statement(*m_session);
            *update << "UPDATE Modules SET etat_module = "+ string(etat ? "true" : "false") + " WHERE secteur_id = '"+secteur_id+"'";

            resultat = new RecordSet(*update);
            while(!update->done()){
                update->execute();
                std::cout << "L'état des modules du secteur " << nom_secteur << " a été mis à jour." << endl;
            }
            delete update;
        } 
        else {
            std::cout << "Aucun secteur trouvé avec le nom spécifié." << endl;
        }
       // delete select;
        delete resultat;
    } 
    catch (const Poco::Data::DataException& e) {
        cerr << "Erreur SQL: " << e.displayText() << endl;
    }
}

void DATA_BASE::set_etat_demande_des_modules_du_secteur(const string& nom_secteur, bool etat){
     try {
        // Récupérer l'identifiant du module à partir de son nom
        string secteur_id;
        
        Statement *select;
        RecordSet *resultat;
        select = new Statement(*m_session);
        *select << "SELECT id FROM Secteurs WHERE nom_secteur = '"+nom_secteur+"'";
        resultat = new RecordSet(*select);
        select->execute(); 
        secteur_id = resultat->value("id").convert<std::string>();
        std::cout<<"identifiant du secteur est : "<<secteur_id<<endl;

        if (!secteur_id.empty()) {
            Statement *update;
            update = new Statement(*m_session);
            *update << "UPDATE Modules SET etat_module_demande = "+ string(etat ? "true" : "false") + " WHERE secteur_id = '"+secteur_id+"'";

            resultat = new RecordSet(*update);
            while(!update->done()){
                update->execute();
                std::cout << "L'état demande des modules du secteur " << nom_secteur << " a été mis à jour." << endl;
            }
            delete update;
        } 
        else {
            std::cout << "Aucun secteur trouvé avec le nom spécifié." << endl;
        }
       // delete select;
        delete resultat;
    } 
    catch (const Poco::Data::DataException& e) {
        cerr << "Erreur SQL: " << e.displayText() << endl;
    }
}

void DATA_BASE::enregistre_mesure_du_module(MESURE& mesure, const string& nom_module){
    try
    {   
        //int module_id;
        string module_id;
        Statement *select;
        RecordSet *resultat;
        select = new Statement(*m_session);
        *select << "SELECT id FROM Modules WHERE nom_module = '"+nom_module+"'";
        resultat = new RecordSet(*select);
        select->execute();
        module_id = resultat->value("id").convert<std::string>();
        //cout<<"identifiant du module est : "<<module_id<<endl;

        if(!module_id.empty()){
            Statement *update;
            update = new Statement(*m_session);
            *update << "INSERT INTO Mesures (module_id, tension, intensite, puissance, date_mesure) VALUES ('" << module_id << "', " << mesure.get_tension() << ", " << mesure.get_intensite() << ", " << mesure.get_puissance() << ", NOW())";
            while(!update->done()){
                update->execute();
                std::cout<<"mesurements informations has been updated!"<<endl;
            }
            delete update;
        }
        else {
            std::cout << "Aucun module trouvé avec le nom spécifié." << endl;
        }
        //delete select;
        delete resultat;

        std::cout << "Les mesures ont été enregistrées avec succès dans la base de données." << endl;
    }
    catch (const Poco::Data::DataException& e) {
        cerr << "Erreur SQL: " << e.displayText() << endl;
    }
}

vector<MACHINE> DATA_BASE::get_machines(const std::string& nom_secteur){

    vector <MACHINE> machines;
    string secteur_id;
    try
    {
        Statement *select;
        RecordSet *resultat;
        select = new Statement(*m_session);
        *select << "SELECT id FROM Secteurs WHERE nom_secteur = '"+nom_secteur+"'";
        resultat = new RecordSet(*select);
        select->execute();
        secteur_id = resultat->value("id").convert<std::string>();
        //secteur_id = resultat->value("id").convert<std::string>();

        Statement *get_computers;
        get_computers = new Statement(*m_session);
        *get_computers << "SELECT pc_ip, pc_mac, etat_pc FROM Machines WHERE secteur_id ='"+secteur_id+"'";
        resultat = new RecordSet(*get_computers);
        while (!get_computers->done())
        {
            get_computers->execute();              
            bool more = resultat->moveFirst();
            while (more)
            {
                MACHINE machine;
                machine.set_adresse_ip(resultat->value("pc_ip").convert<std::string>());
                machine.set_adresse_mac(resultat->value("pc_mac").convert<std::string>());
                machine.set_pc_etat(resultat->value("etat_pc").convert<bool>());
                //machine.set_puissance(resultat->value("puissance").convert<double>());
                //mesure.set_date_mesure(resultat->value("date_mesure").convert<std::string>());

                machines.push_back(machine);
                more = resultat->moveNext();
            }
        }
        
    }
    catch (ODBC::StatementException &se)
    {
        cerr << "Erreur ODBC: " << se.toString() << endl;
    }
    
    return machines;
   
}

vector<MESURE> DATA_BASE::recuperer_mesures_actuelles(){

    vector<MESURE>mesures;

    try
    {
        Statement *select;
        RecordSet *resultat;
        select = new Statement(*m_session);
        *select << "SELECT id, nom_module FROM Modules WHERE etat_module = true";
        resultat = new RecordSet(*select);

        // Parcourir les résultats et stocker les mesures dans le vecteur
    
        while (!select->done())
        {
            select->execute();              
            bool more = resultat->moveFirst();
            while (more)
            {
                MESURE mesure;
                mesure.set_nom_module("nom_module");
                mesure.set_tension(resultat->value("tension").convert<double>());
                mesure.set_intensite(resultat->value("intensite").convert<double>());
                mesure.set_puissance(resultat->value("puissance").convert<double>());
                //mesure.set_date_mesure(resultat->value("date_mesure").convert<std::string>());

                mesures.push_back(mesure);
                more = resultat->moveNext();
            }
        }

        delete resultat;
        //delete select;   
    }
    catch (ODBC::StatementException &se)
    {
        cerr << "Erreur ODBC: " << se.toString() << endl;
    }
    
    return mesures;

}


/*
//************************************************************************************************************
//************************************************************************************************************
void DATA_BASE::connecter(const string &url, const string &user, const string &password)
{
    try
    {
        // Établir une connexion à la base de données PostgreSQL
        sql::Driver *driver;
        driver = get_driver_instance();
        conn = driver->connect(url, user, password);

        if (conn)
        {
            cout << "Connexion à la base de données PostgreSQL établie avec succès." << endl;
        }
        else
        {
            cout << "La connexion à la base de données PostgreSQL a échoué." << endl;
        }
    }
    catch (sql::SQLException &e)
    {
        cout << "Erreur PostgreSQL: " << e.what() << endl;
    }
}
//************************************************************************************************************
//************************************************************************************************************
vector<MESURE> recupererMesuresDernieres24Heures()
{
    vector<Mesure> mesures;

    try
    {
        // Calculer la date et l'heure actuelles moins 24 heures
        time_t now = time(nullptr);
        time_t twentyFourHoursAgo = now - (24 * 60 * 60);
        tm *twentyFourHoursAgoTime = localtime(&twentyFourHoursAgo);
        char twentyFourHoursAgoStr[20];
        strftime(twentyFourHoursAgoStr, sizeof(twentyFourHoursAgoStr), "%Y-%m-%d %H:%M:%S", twentyFourHoursAgoTime);

        // Exécuter la requête SQL
        sql::Statement *stmt;
        sql::ResultSet *res;
        stmt = conn->createStatement();
        res = stmt->executeQuery("SELECT s.nom_secteur, m.tension, m.intensité, m.puissance, m.date_mesure \
                                      FROM secteurs s \
                                      JOIN modules mo ON s.id = mo.secteur_id \
                                      JOIN mesures m ON mo.id = m.module_id \
                                      WHERE m.date_mesure >= '" +
                                 string(twentyFourHoursAgoStr) + "'");

        // Parcourir les résultats et stocker les mesures dans le vecteur
        while (res->next())
        {
            Mesure mesure;
            mesure.nom_secteur = res->getString("nom_secteur");
            mesure.tension = res->getDouble("tension");
            mesure.intensite = res->getDouble("intensité");
            mesure.puissance = res->getDouble("puissance");
            mesure.date_mesure = res->getString("date_mesure");
            mesures.push_back(mesure);
        }

        delete res;
        delete stmt;
    }
    catch (sql::SQLException &e)
    {
        cout << "Erreur MySQL: " << e.what() << endl;
    }

    return mesures;
}

//************************************************************************************************************
//************************************************************************************************************
bool DATA_BASE::get_etat_secteur(int id_secteur)
{
    bool etat = false; // Valeur par défaut

    try
    {
        // Exécuter la requête SQL pour récupérer l'état du secteur
        sql::Statement *stmt;
        sql::ResultSet *res;
        stmt = conn->createStatement();
        res = stmt->executeQuery("SELECT etat_secteur FROM secteurs WHERE id = " + to_string(id_secteur));

        // Vérifier s'il y a un résultat
        if (res->next())
        {
            // Récupérer l'état du secteur
            etat = res->getBoolean("etat_secteur");
        }

        delete res;
        delete stmt;
    }
    catch (sql::SQLException &e)
    {
        cout << "Erreur MySQL: " << e.what() << endl;
    }

    return etat;
}
//************************************************************************************************************
//************************************************************************************************************
bool DATA_BASE::modifierEtatSecteur(int id_secteur, bool nouvel_etat)
{
    bool modification_reussie = false;

    try
    {
        // Exécuter la requête SQL pour mettre à jour l'état du secteur
        sql::Statement *stmt;
        stmt = conn->createStatement();
        stmt->executeUpdate("UPDATE secteurs SET etat_secteur = " + (nouvel_etat ? "true" : "false") + " WHERE id = " + to_string(id_secteur));

        // Vérifier si la mise à jour a été effectuée avec succès
        int nb_lignes_modifiees = stmt->getUpdateCount();
        if (nb_lignes_modifiees > 0)
        {
            modification_reussie = true;
        }

        delete stmt;
    }
    catch (sql::SQLException &e)
    {
        cout << "Erreur MySQL: " << e.what() << endl;
    }

    return modification_reussie;
}
//************************************************************************************************************
//************************************************************************************************************
//************************************************************************************************************
//************************************************************************************************************
vector<vector<string>> DATA_BASE::recupererMachinesEtats()
{
    vector<vector<string>> machinesEtats;

    try
    {
        // Exécuter la requête SQL pour récupérer les machines et leurs états
        sql::Statement *stmt;
        sql::ResultSet *res;
        stmt = conn->createStatement();
        res = stmt->executeQuery("SELECT Machines.id, Machines.pc_ip, Machines.pc_mac, Machines.Etat_pc FROM Machines");

        // Parcourir les résultats et stocker les informations dans le vecteur de vecteurs
        while (res->next())
        {
            vector<string> machine;
            machine.push_back(res->getString("id"));                             // Id de la machine
            machine.push_back(res->getString("pc_ip"));                          // Adresse IP de la machine
            machine.push_back(res->getString("pc_mac"));                         // Adresse MAC de la machine
            machine.push_back(res->getBoolean("Etat_pc") ? "Allumé" : "Éteint"); // État de la machine

            machinesEtats.push_back(machine);
        }

        delete res;
        delete stmt;
    }
    catch (sql::SQLException &e)
    {
        cout << "Erreur MySQL: " << e.what() << endl;
    }

    return machinesEtats;
}
//************************************************************************************************************
//************************************************************************************************************

//************************************************************************************************************
//************************************************************************************************************
bool DATA_BASE::modifierEtatMachineDemande(const string &pc_ip, bool nouvel_etat_demande)
{
    try
    {
        // Préparer la requête SQL pour mettre à jour Etat_machine_demande
        sql::PreparedStatement *prep_stmt;
        prep_stmt = conn->prepareStatement("UPDATE Machines SET Etat_machine_demande = ? WHERE pc_ip = ?");

        // Convertir la valeur booléenne en chaîne de caractères "true" ou "false"
        string str_nouvel_etat = nouvel_etat_demande ? "true" : "false";

        // Définir les valeurs des paramètres de la requête
        prep_stmt->setString(1, str_nouvel_etat);
        prep_stmt->setString(2, pc_ip);

        // Exécuter la requête
        prep_stmt->executeUpdate();

        // Libérer les ressources
        delete prep_stmt;

        cout << "La valeur de Etat_machine_demande a été modifiée avec succès." << endl;
        return true; // La modification a réussi
    }
    catch (sql::SQLException &e)
    {
        cout << "Erreur PostgreSQL: " << e.what() << endl;
        return false; // La modification a échoué
    }
}

//************************************************************************************************************
//************************************************************************************************************
std::vector<MACHINE> Data_Base::recupererMachinesEtats(const std::string &nom_secteur)
{
    std::vector<Machine> machines;

    try
    {
        // Récupérer l'identifiant du secteur à partir de son nom
        std::string secteur_id;
        sql::PreparedStatement *prep_stmt;
        std::string query = "SELECT id FROM Secteurs WHERE nom_secteur = ?";
        prep_stmt = conn->prepareStatement(query);
        prep_stmt->setString(1, nom_secteur);
        sql::ResultSet *res = prep_stmt->executeQuery();

        if (res->next())
        {
            secteur_id = res->getString("id");

            // Exécuter la requête SQL pour récupérer les machines appartenant au secteur spécifié
            sql::Statement *stmt;
            stmt = conn->createStatement();
            query = "SELECT * FROM Machines WHERE secteur_id = ?";
            // OU pour PostgreSQL : "SELECT * FROM Machines WHERE secteur_id = ?";

            sql::PreparedStatement *prep_stmt;
            prep_stmt = conn->prepareStatement(query);
            prep_stmt->setString(1, secteur_id);
            res = prep_stmt->executeQuery();

            // Parcourir les résultats et stocker les informations dans le vecteur de machines
            while (res->next())
            {
                Machine machine(res->getString("pc_ip"), res->getBoolean("Etat_pc"), res->getBoolean("Etat_machine_demande"), res->getString("pc_mac"));
                machines.push_back(machine);
            }
        }
        else
        {
            std::cout << "Aucun secteur trouvé avec le nom spécifié." << std::endl;
        }

        delete res;
        delete prep_stmt;
    }
    catch (sql::SQLException &e)
    {
        std::cout << "Erreur SQL: " << e.what() << std::endl;
    }

    return machines;
}
//************************************************************************************************************
//************************************************************************************************************
void Data_Base::activerMachinesDansSecteur(const std::string &nom_secteur)
{
    try
    {
        // Récupérer l'identifiant du secteur à partir de son nom
        std::string secteur_id;
        sql::PreparedStatement *prep_stmt;
        std::string query = "SELECT id FROM Secteurs WHERE nom_secteur = ?";
        prep_stmt = conn->prepareStatement(query);
        prep_stmt->setString(1, nom_secteur);
        sql::ResultSet *res = prep_stmt->executeQuery();

        if (res->next())
        {
            secteur_id = res->getString("id");

            // Mettre à jour l'attribut Etat_machine_demande de toutes les machines appartenant au secteur spécifié à true
            query = "UPDATE Machines SET Etat_machine_demande = true WHERE secteur_id = ?";
            prep_stmt = conn->prepareStatement(query);
            prep_stmt->setString(1, secteur_id);
            prep_stmt->executeUpdate();

            std::cout << "Toutes les machines du secteur " << nom_secteur << " ont été activées." << std::endl;
        }
        else
        {
            std::cout << "Aucun secteur trouvé avec le nom spécifié." << std::endl;
        }

        delete res;
        delete prep_stmt;
    }
    catch (sql::SQLException &e)
    {
        std::cout << "Erreur SQL: " << e.what() << std::endl;
    }
}
//************************************************************************************************************
//************************************************************************************************************
void Data_Base::set_etat_machine(const std::string &nom_module, bool etat_machine) mofie_etat_des_machines_du_module
{
    try
    {
        // Récupérer l'identifiant du module à partir de son nom
        std::string module_id;
        sql::PreparedStatement *prep_stmt;
        std::string query = "SELECT id FROM Modules WHERE nom_module = ?";
        prep_stmt = conn->prepareStatement(query);
        prep_stmt->setString(1, nom_module);
        sql::ResultSet *res = prep_stmt->executeQuery();

        if (res->next())
        {
            module_id = res->getString("id");

            // Mettre à jour l'attribut Etat_machine de toutes les machines appartenant au module spécifié
            query = "UPDATE Machines SET Etat_machine = ? WHERE module_id = ?";
            prep_stmt = conn->prepareStatement(query);
            prep_stmt->setBoolean(1, etat_machine);
            prep_stmt->setString(2, module_id);
            prep_stmt->executeUpdate();

            std::cout << "L'état des machines du module " << nom_module << " a été mis à jour." << std::endl;
        }
        else
        {
            std::cout << "Aucun module trouvé avec le nom spécifié." << std::endl;
        }

        delete res;
        delete prep_stmt;
    }
    catch (sql::SQLException &e)
    {
        std::cout << "Erreur SQL: " << e.what() << std::endl;
    }
}

//************************************************************************************************************
//************************************************************************************************************

void Data_Base::set_etat_machine_demande(const std::string &nom_module, bool etat_machine_demande)
{
    try
    {
        // Récupérer l'identifiant du module à partir de son nom
        std::string module_id;
        sql::PreparedStatement *prep_stmt;
        std::string query = "SELECT id FROM Modules WHERE nom_module = ?";
        prep_stmt = conn->prepareStatement(query);
        prep_stmt->setString(1, nom_module);
        sql::ResultSet *res = prep_stmt->executeQuery();

        if (res->next())
        {
            module_id = res->getString("id");

            // Mettre à jour l'attribut Etat_machine_demande de toutes les machines appartenant au module spécifié
            query = "UPDATE Machines SET Etat_machine_demande = ? WHERE module_id = ?";
            prep_stmt = conn->prepareStatement(query);
            prep_stmt->setBoolean(1, etat_machine_demande);
            prep_stmt->setString(2, module_id);
            prep_stmt->executeUpdate();

            std::cout << "L'état demande des machines du module " << nom_module << " a été mis à jour." << std::endl;
        }
        else
        {
            std::cout << "Aucun module trouvé avec le nom spécifié." << std::endl;
        }

        delete res;
        delete prep_stmt;
    }
    catch (sql::SQLException &e)
    {
        std::cout << "Erreur SQL: " << e.what() << std::endl;
    }
}
//************************************************************************************************************
//************************************************************************************************************
bool Data_Base::recupererEtatModule(const std::string &nom_module)
{
    try
    {
        // Récupérer l'état du module à partir de son nom
        std::string module_id;
        bool etat_module = false; // Initialiser à une valeur par défaut

        sql::PreparedStatement *prep_stmt;
        std::string query = "SELECT Etat_module FROM Modules WHERE nom_module = ?";
        prep_stmt = conn->prepareStatement(query);
        prep_stmt->setString(1, nom_module);
        sql::ResultSet *res = prep_stmt->executeQuery();

        if (res->next())
        {
            etat_module = res->getBoolean("Etat_module");
        }
        else
        {
            std::cout << "Aucun module trouvé avec le nom spécifié." << std::endl;
        }

        delete res;
        delete prep_stmt;

        return etat_module;
    }
    catch (sql::SQLException &e)
    {
        std::cout << "Erreur SQL: " << e.what() << std::endl;
        return false; // En cas d'erreur, retourner une valeur par défaut
    }
}

//************************************************************************************************************
//************************************************************************************************************
Module Data_Base::recupererModule(const std::string &nom_module)
{
    Module module; // Créer un objet module pour stocker les informations récupérées

    try
    {
        // Récupérer les informations du module à partir de son nom
        sql::PreparedStatement *prep_stmt;
        std::string query = "SELECT * FROM Modules WHERE nom_module = ?";
        prep_stmt = conn->prepareStatement(query);
        prep_stmt->setString(1, nom_module);
        sql::ResultSet *res = prep_stmt->executeQuery();

        if (res->next())
        {
            // Récupérer les valeurs de chaque colonne et les attribuer à l'objet Module
            module.setId(res->getString("id"));
            module.setNomModule(res->getString("nom_module"));
            module.setEtatModule(res->getBoolean("Etat_module"));
            module.setSecteurId(res->getString("secteur_id"));

            // Vous pouvez récupérer d'autres attributs du module de la même manière si nécessaire

            std::cout << "Module récupéré avec succès." << std::endl;
        }
        else
        {
            std::cout << "Aucun module trouvé avec le nom spécifié." << std::endl;
        }

        delete res;
        delete prep_stmt;
    }
    catch (sql::SQLException &e)
    {
        std::cout << "Erreur SQL: " << e.what() << std::endl;
    }

    return module; // Retourner l'objet module avec les informations récupérées
}

//************************************************************************************************************
//************************************************************************************************************
void Data_Base::set_etat_module_du_secteur(const std::string &nom_secteur, bool nouvel_etat_module)
{
    try
    {
        // Récupérer l'identifiant du secteur à partir de son nom
        std::string secteur_id;
        sql::PreparedStatement *prep_stmt;
        std::string query = "SELECT id FROM Secteurs WHERE nom_secteur = ?";
        prep_stmt = conn->prepareStatement(query);
        prep_stmt->setString(1, nom_secteur);
        sql::ResultSet *res = prep_stmt->executeQuery();

        if (res->next())
        {
            secteur_id = res->getString("id");

            // Mettre à jour l'état des modules appartenant au secteur spécifié
            query = "UPDATE Modules SET Etat_module = ? WHERE secteur_id = ?";
            prep_stmt = conn->prepareStatement(query);
            prep_stmt->setBoolean(1, nouvel_etat_module);
            prep_stmt->setString(2, secteur_id);
            prep_stmt->executeUpdate();

            std::cout << "L'état des modules du secteur " << nom_secteur << " a été mis à jour." << std::endl;
        }
        else
        {
            std::cout << "Aucun secteur trouvé avec le nom spécifié." << std::endl;
        }

        delete res;
        delete prep_stmt;
    }
    catch (sql::SQLException &e)
    {
        std::cout << "Erreur SQL: " << e.what() << std::endl;
    }
}

*/