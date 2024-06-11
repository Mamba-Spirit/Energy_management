#ifndef DATA_BASE_H
#define DATA_BASE_H

#define MY_DSN "PROJET_6_DATA_BASE"
#include<string>
#include <vector>
#include <algorithm>
#include <Poco/Data/Session.h>
#include <Poco/Data/ODBC/Connector.h>
#include <mutex>
using namespace std;
using namespace Poco::Data::ODBC;
using namespace Poco::Data;
using std::ostringstream;
//#include <Poco/Exception.h>
#include<ostream>
#include "Poco/Data/ODBC/ODBCException.h"
#include <Poco/Data/RecordSet.h>

#include"MACHINE.h"
#include"MESURE.h"


class DATA_BASE
{
public:



	//DATA_BASE();
   // ~DATA_BASE();
    //vector<MESURE>recuperer_mesures_actuelles();
	void recuperer_mesures_actuelles();

	vector<MESURE>Get_mesures_actuelles();
    vector<MESURE>recuperer_mesures_historiques(const string& nom_module);          //***********DONE********************
    bool get_etat_secteur(const string& nom_secteur);                               //***********DONE********************
    bool get_etat_secteur_demande(const std::string& nom_secteur);                  //***********DONE********************
    vector<MACHINE> get_machines(const std::string& nom_secteur);                   //***********DONE********************
    bool get_etat_module(const string& nom_module);                                  //***********DONE********************
    bool get_etat_module_demande(const string& nom_module);                          //***********DONE********************
    void set_etat_secteur(const string& nom_secteur, bool etat);                     //***********DONE********************
    void set_etat_secteur_demande(const string& nom_secteur, bool etat);             //***********DONE********************
    void set_etat_des_modules_du_secteur(const string& nom_secteur, bool etat);         //***********DONE********************
    void set_etat_demande_des_modules_du_secteur(const string& nom_secteur, bool etat); //***********DONE********************
    void enregistre_mesure_du_module(MESURE& mesure, const string& nom_module);         //***********DONE********************
    void set_etat_des_machines_du_module(const std::string &nom_module, bool etat);     //***********DONE********************
    void set_etat_demande_des_machines_du_module(const string &nom_module, bool etat);  //***********DONE********************   
    vector<string> get_nom_secteur();       //recupère les noms des secteurs.
    vector<string> get_nom_modules();
    string extract_date_time(const string& iso_date_time);
	//bool isconnected();
	
	static DATA_BASE& getInstance();
    void connect(); // Méthode de connexion avec une chaîne de connexion
    void disconnect(); // Méthode de déconnexion
    bool isConnected() const; // Vérifie si la connexion est active
	
	void sortMesuresByNomModule(vector<MESURE>& mesures);
	void set_last_error(string last_error);
    string get_last_error();

    void save_to_log(const string& log_message);

private:
	
	DATA_BASE(); // Constructeur pour le singleton
    ~DATA_BASE();
    DATA_BASE(const DATA_BASE&) = delete;
    DATA_BASE& operator=(const DATA_BASE&) = delete;

    std::mutex m_mutex; // Pour protéger l'accès aux ressources partagées
    bool m_connected; // Indique si la base de données est connectée
    // Membres de la base de données (ajoutez ce dont vous avez besoin, par exemple un objet de connexion)

	Session *m_session;
    bool m_connexionOk;
    string m_last_error;
	vector<MESURE> mesures_actuelles;
    vector<MESURE> mesures_historiques;

};

#endif // DATA_BASE_H
