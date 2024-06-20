#include "DATA_BASE.h"
#include "MESURE.h"
#include "MACHINE.h"



DATA_BASE::DATA_BASE(){
	m_connected = false;
}


DATA_BASE::~DATA_BASE()
{
    // Nettoyage de la base de données
    if (m_connected) {
        disconnect();
    }
}



vector<MESURE> DATA_BASE::recuperer_mesures_historiques(const string& nom_module){
    vector<MESURE> mesures;
    string module_id;

    try
    {
        Statement *select_1;
        RecordSet *resultat;
        select_1 = new Statement(*m_session);
        *select_1 << "SELECT id FROM Modules WHERE nom_module = '"+nom_module+"'";
        resultat = new RecordSet(*select_1);
        select_1->execute();
        module_id = resultat->value("id").convert<std::string>();

        Statement *select;
        select = new Statement(*m_session);
        *select << "SELECT tension, intensite, puissance, date_mesure FROM Mesures WHERE module_id = '" + module_id + "' AND date_mesure >= NOW() - INTERVAL '24 hours'";

        resultat = new RecordSet(*select);

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
                mesure.set_date_mesure( extract_date_time(resultat->value("date_mesure").convert<std::string>()));

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


vector<MESURE> DATA_BASE::Get_mesures_actuelles(){
	
	return mesures_actuelles;
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

void DATA_BASE::set_etat_secteur(const string& nom_secteur, bool etat){
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

void DATA_BASE::recuperer_mesures_actuelles(){
	
    mesures_actuelles.clear();
	
    try
    {
        Statement *select;
        RecordSet *resultat;
        select = new Statement(*m_session);
       // *select << "SELECT tension, intensite, puissance, date_mesure FROM Mesures ORDER BY date_mesure DESC LIMIT 1";
        *select << "SELECT m.tension, m.intensite, m.puissance, m.date_mesure, mod.nom_module "
         "FROM Mesures m "
         "JOIN Modules mod ON m.module_id = mod.id "
         "WHERE mod.etat_module = TRUE "
         "AND m.date_mesure BETWEEN NOW() - INTERVAL '2 minutes' AND NOW() - INTERVAL '1 minute'";

        resultat = new RecordSet(*select);

        // Parcourir le résultat et stocker la mesure dans le vecteur
        while(!select->done()){

            select->execute();              
            bool more = resultat->moveFirst();
            while (more)
            {
                MESURE mesure;
                mesure.set_nom_module(resultat->value("nom_module").convert<string>());
                mesure.set_tension(resultat->value("tension").convert<double>());
                mesure.set_intensite(resultat->value("intensite").convert<double>());
                mesure.set_puissance(resultat->value("puissance").convert<double>());
                mesure.set_date_mesure(extract_date_time(resultat->value("date_mesure").convert<std::string>()));

                mesures_actuelles.push_back(mesure);
                more = resultat->moveNext();
            }
        }
        delete resultat;
        // delete select;
		if(mesures_actuelles.empty()){
			set_last_error("Pas de mesures mesuré dans les 2 dernières minutes");
            save_to_log(get_last_error());
			//Set_mesures_fake_actuelle();
		}
		else{
			sortMesuresByNomModule(mesures_actuelles);
		}
		//sortMesuresByNomModule(mesures_actuelles);
    }
    catch (ODBC::StatementException &se)
    {
        cerr << "Erreur ODBC: " << se.toString() << endl;
    }

}

string DATA_BASE::extract_date_time(const std::string& iso_date_time) {

    if (iso_date_time.length() < 20) {
        return "Invalid input";
    }

    string date_time = iso_date_time.substr(0, 10) + " " + iso_date_time.substr(11, 8);

    return date_time;
}

vector<string> DATA_BASE::get_nom_secteur(){
    vector <string> secteurs;
    
    try
    {
        Statement *select;
        RecordSet *resultat;
        select = new Statement(*m_session);
        *select << "SELECT nom_secteur FROM Secteurs";
        resultat = new RecordSet(*select);
        
        while (!select->done())
        {
            select->execute();              
            bool more = resultat->moveFirst();
            while (more)
            {
                string secteur;
                secteur = resultat->value("nom_secteur").convert<std::string>();

                secteurs.push_back(secteur);
                more = resultat->moveNext();
            }
        }

    }
    catch (ODBC::StatementException &se)
    {
        cerr << "Erreur ODBC: " << se.toString() << endl;
    }
    std::sort(secteurs.begin(), secteurs.end());
    return secteurs;
}

vector<string> DATA_BASE::get_nom_modules(){

      vector <string> modules;
    
    try
    {
        Statement *select;
        RecordSet *resultat;
        select = new Statement(*m_session);
        *select << "SELECT nom_module FROM Modules";
        resultat = new RecordSet(*select);
        
        while (!select->done())
        {
            select->execute();              
            bool more = resultat->moveFirst();
            while (more)
            {
                string module;
                module = resultat->value("nom_module").convert<std::string>();

                modules.push_back(module);
                more = resultat->moveNext();
            }
        }

    }
    catch (ODBC::StatementException &se)
    {
        cerr << "Erreur ODBC: " << se.toString() << endl;
    }
    std::sort(modules.begin(), modules.end());
    return modules;

}


DATA_BASE& DATA_BASE::getInstance()
{
    static DATA_BASE instance;  // Cette instance est créée une seule fois
    return instance;           // Retourne la référence à l'instance
}


void DATA_BASE::connect(){
	
    std::lock_guard<std::mutex> lock(m_mutex); // Protection contre l'accès concurrentiel
	string dsn = MY_DSN;
    
    if (!m_connected) {
        std::cout << "Connecting to database with connection string: " << dsn << std::endl;
		
			     //connexion à la base de données
		
		m_session = NULL;
		ODBC::Connector::registerConnector();
		try
		{
			m_session= new Session("ODBC", "DSN="+dsn);
			m_connected = true;
			std::cout << "Connected to database successfully." << std::endl;
		}
		catch (ConnectionFailedException& ce)
		{
			m_last_error= ce.displayText();
		}

    }
	else {
        std::cout << "Already connected to database." << std::endl;
    }
}


void DATA_BASE::disconnect()
{
    std::lock_guard<std::mutex> lock(m_mutex); // Protection contre l'accès concurrentiel
    
    if (m_connected) {
        // Exemple d'implémentation de la déconnexion
        std::cout << "Disconnecting from database." << std::endl;

		if (m_session) {
			delete m_session;
			m_session = nullptr; 
			ODBC::Connector::unregisterConnector(); 
			m_connected = false;
			std::cout << "Disconnected from database successfully." << std::endl;
		}
    }
}


bool DATA_BASE::isConnected() const
{
    return m_connected;
}


void DATA_BASE::sortMesuresByNomModule(std::vector<MESURE>& mesures) {
    for (size_t i = 0; i < mesures.size(); ++i) {
        for (size_t j = i + 1; j < mesures.size(); ++j) {
            if (mesures[i].get_nom_module() > mesures[j].get_nom_module()) {
                std::swap(mesures[i], mesures[j]);
            }
        }
    }
}


void DATA_BASE::set_last_error(string last_error){
    m_last_error = last_error;
}

string DATA_BASE::get_last_error(){
    return m_last_error;
}

void DATA_BASE::save_to_log(const string& log_message){

     try
    {   
        Statement *select;
//        RecordSet *resultat;
        select = new Statement(*m_session);
        *select << "INSERT INTO Logs (type_erreur, date) VALUES ('" << log_message << "', NOW())";
       
        select->execute();
        delete select;
        //delete resultat;

    }
    catch (const Poco::Data::DataException& e) {
        cerr << "Erreur SQL: " << e.displayText() << endl;
    }
}

bool DATA_BASE::is_it_empty(vector<MESURE> my_vector){
		
	return my_vector.empty();
}


void DATA_BASE::Set_mesures_fake_actuelle(){
	
		mesures_actuelles.push_back(fake_mesure);
		
}

void DATA_BASE::set_fake_mesure(){
	
		fake_mesure.set_intensite(0.00);
		fake_mesure.set_tension(0.00);
		fake_mesure.set_puissance(0.00);
		fake_mesure.set_date_mesure("maintenant");
		fake_mesure.set_nom_module("Module SA001");
}



