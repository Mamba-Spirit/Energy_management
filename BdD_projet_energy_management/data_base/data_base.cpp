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
   /*
      catch (ODBC::StatementException& se)
        {
            cerr << "erreur lors du select !!! StatementException:"
                    << endl << endl << se.toString() << endl;
        }
    */
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
        *select << "SELECT s.nom_secteur, m.tension, m.intensité, m.puissance, m.date_mesure \
                    FROM secteurs s \
                    JOIN modules mo ON s.id = mo.secteur_id \
                    JOIN mesures m ON mo.id = m.module_id \
                    WHERE m.date_mesure >= NOW() - INTERVAL '24 hours'";
        resultat = new RecordSet(*select);

        // Parcourir les résultats et stocker les mesures dans le vecteur
        while (!select->done())
        {
            select->execute();              
            bool more = resultat->moveFirst();
            while (more)
            {
                MESURE mesure;
                mesure.set_nom_secteur(resultat->value("nom_secteur").convert<std::string>());
                mesure.set_tension(resultat->value("tension").convert<double>());
                mesure.set_intensite(resultat->value("intensité").convert<double>());
                mesure.set_puissance(resultat->value("puissance").convert<double>());
                mesure.set_date_mesure(resultat->value("date_mesure").convert<std::string>());
                mesures.push_back(mesure);
                more = resultat->moveNext();
            }
        }

        delete resultat;
        delete select;
    }
    catch (ODBC::StatementException &se)
    {
        cout << "Erreur ODBC: " << se.toString() << endl;
    }

    //*****************Test pour verifier dans le console*********************//
    /*
    for (int i = 0; i < mesures.size(); i++) {
        std::cout<<"current : " << mesures[i].get_intensite() << " voltage "<<mesures[i].get_tension()<<endl;
    }
    */
    //*****************Test pour verifier dans le console*********************//
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
        delete select;
    }
    catch (ODBC::StatementException &se)
    {
        cout << "Erreur ODBC: " << se.toString() << endl;
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
        delete select;
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
        delete select;
    }
    catch (ODBC::StatementException &se)
    {
        cout << "Erreur ODBC: " << se.toString() << endl;
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
        delete select;
    }
    catch (ODBC::StatementException &se)
    {
        cout << "Erreur ODBC: " << se.toString() << endl;
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

        delete select;
    }
    catch (ODBC::StatementException &se)
    {
        cout << "Erreur ODBC: " << se.toString() << endl;
    }

}

void DATA_BASE::set_etat_secteur_demande(const string& nom_secteur, bool etat){
    try
    {
        Statement *select = new Statement(*m_session);
        *select << "UPDATE secteurs SET etat_secteur_demande = " + string(etat ? "true" : "false") + " WHERE nom_secteur = '"+ nom_secteur +"'";
        select->execute();

        delete select;
    }
    catch (ODBC::StatementException &se)
    {
        cout << "Erreur ODBC: " << se.toString() << endl;
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
        cout<<"identifiant du module est : "<<module_id<<endl;
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
                cout << "L'état des machines du module " << nom_module << " a été mis à jour." << endl;
            }
            delete update;
        } 
        else {
            cout << "Aucun module trouvé avec le nom spécifié." << endl;
        }
        delete select;
        delete resultat;
        
    }
    catch (const Poco::Data::DataException& e) {
        cout << "Erreur SQL: " << e.displayText() << endl;
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
        cout<<"identifiant du module est : "<<module_id<<endl;

        if (!module_id.empty()) {
            Statement *update;
            update = new Statement(*m_session);
            *update << "UPDATE Machines SET etat_pc_demande = "+ string(etat ? "true" : "false") + " WHERE module_id = '"+module_id+"'";

            resultat = new RecordSet(*update);
            while(!update->done()){
                update->execute();
                cout << "L'état demande des machines du module " << nom_module << " a été mis à jour." << endl;
            }
            delete update;
        } 
        else {
            cout << "Aucun module trouvé avec le nom spécifié." << endl;
        }
        delete select;
        delete resultat;
    } 
    catch (const Poco::Data::DataException& e) {
        cout << "Erreur SQL: " << e.displayText() << endl;
    }
}
