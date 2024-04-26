#ifndef DATA_BASE_H
#define DATA_BASE_H
#define MY_DSN "PROJET_6_DATA_BASE"
#include<string>
#include <vector>
#include <Poco/Data/Session.h>
#include <Poco/Data/ODBC/Connector.h>
using namespace std;
using namespace Poco::Data::ODBC;
using namespace Poco::Data;
using std::ostringstream;
//#include <Poco/Exception.h>
#include<ostream>
#include "Poco/Data/ODBC/ODBCException.h"
#include <Poco/Data/RecordSet.h>

#include"machine.h"
#include"mesure.h"



class DATA_BASE {
private:
    Session *m_session;
    bool m_connexionOk;
    string m_last_error;
    vector<std::vector<MESURE>>mesures_actuelles_par_secteur;
    vector<MESURE> mesures_historiques;
    //vector<MACHINE> liste_machine_module;

//****************************************************************************


public:
    DATA_BASE(string dsn);
    ~DATA_BASE();
    vector<vector<MESURE>>recuperer_mesures_actuelles();
    vector<MESURE>recuperer_mesures_historiques(const string& nom_module);          //***********DONE********************

    bool get_etat_secteur(const string& nom_secteur);                               //***********DONE********************
    bool get_etat_secteur_demande(const std::string& nom_secteur);                  //***********DONE********************
    vector<MACHINE> get_machines(const std::string& nom_secteur);
    bool get_etat_module(const string& nom_module);                                  //***********DONE********************
    bool get_etat_module_demande(const string& nom_module);                          //***********DONE********************

    void set_etat_secteur(const string& nom_secteur, bool etat);                     //***********DONE********************
    void set_etat_secteur_demande(const string& nom_secteur, bool etat);             //***********DONE********************
    void set_etat_machines(const string& addresse_ip, bool etat);
    void set_etat_machine_demande(const string& nom_module, bool etat);
    void set_etat_module_du_secteur(const string& nom_module, bool etat);
    void set_etat_module_demande_du_secteur(const string& nom_secteur, bool etat);
    bool get_etat_pour_un_module(const string& nom_module);
    bool get_etat_demande_pour_un_module(const string& nom_module);
    void enregistre_mesure_du_module(const MESURE& mesure);
    void enregistre_mesures_des_modules(const vector<MESURE>& mesures);

    //**********************************************************
    void set_etat_des_machines_du_module(const std::string &nom_module, bool etat);     //***********DONE********************
    void set_etat_demande_des_machines_du_module(const string &nom_module, bool etat);  //***********DONE********************

};



#endif // DATA_BASE_H