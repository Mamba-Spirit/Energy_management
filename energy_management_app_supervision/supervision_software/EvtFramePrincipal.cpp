#include "EvtFramePrincipal.h"
/*#include "Thread_action.h"
#include "Thread_get_data.h"
#include "Thread_plot.h"
#include "Thread_monitor.h"*/
#include "CustomEvents.h"
#include <wx/aui/aui.h>
#include <wx/wx.h>

EvtFramePrincipal::EvtFramePrincipal( wxWindow* parent )
:
FramePrincipal( parent )

{
	
	InitDatabase();
	
	//*********************Lancement des threads ***********************//
/*	m_thread_plot = new Thread_plot(this);
	if (m_thread_plot->Create() != wxTHREAD_NO_ERROR){
		wxLogError("Création thread plot impossible!");
		delete m_thread_plot;
		m_thread_plot = NULL;
	}
	else{
		m_thread_plot->Run();
	}
	
	
	m_thread_action = new Thread_action(this);
	if(m_thread_action->Create() != wxTHREAD_NO_ERROR){
		wxLogError("Création thread action impossible:");
		delete m_thread_action;
		m_thread_action = NULL;
	}
	else{
		m_thread_action->Run();
	}*/
	
	m_thread_get_data = new Thread_get_data(this);
	if(m_thread_get_data->Create()!= wxTHREAD_NO_ERROR){
		wxLogError("Création thread get data impossible!");
		delete m_thread_get_data;
		m_thread_get_data = NULL;
	}
	else{
		m_thread_get_data->Run();
	}
	
	/*m_thread_monitor = new Thread_monitor(this);
	
	if(m_thread_monitor->Create() != wxTHREAD_NO_ERROR){
		wxLogError("Création du thread monitor impossible!");
		delete m_thread_monitor;
		m_thread_monitor = NULL;
	}
	else{
		m_thread_monitor->Run();
	}
		*/
	//*********************Fin du lancement des threads ***********************//

	matching_secteur_name_and_button_activer_id();
	list_secteurs = m_data_base.get_nom_secteur();
    list_modules = m_data_base.get_nom_modules();	
	
	Bind(wxEVT_BUTTON, &EvtFramePrincipal::OnButtonClicked, this);
    Bind(wxEVT_TOGGLEBUTTON, &EvtFramePrincipal::OnToggleButtonClicked, this);

	 // Démarrer le thread de surveillance
	/*Thread_monitor* monitorThread = new Thread_monitor(this);
    if (monitorThread->Create() == wxTHREAD_NO_ERROR) {
        monitorThread->Run();
    }*/
	
	//***********************Liason des évenment à leurs fonctions*************************//
	
	Bind(THREAD_GET_DATA_COMPLETE, &EvtFramePrincipal::OnGetDataCompleted, this);
	
	//***********************Liason des évenment à leurs fonctions*************************//
}

void EvtFramePrincipal::InitDatabase()
{
    m_data_base.connect(); // Remplacez par votre chaîne de connexion réelle
}

void EvtFramePrincipal::matching_secteur_name_and_button_activer_id(){
	
		int tableau[NOMBRE_BOUTTON_SECTEUR_ACTIVER] = {id_button_activer_SA, id_button_activer_SB, id_button_activer_SC, id_button_activer_SD, id_button_activer_SE, id_button_activer_SF, id_button_activer_SG, id_button_activer_SH};
		
		for (int i = 0; i< NOMBRE_BOUTTON_SECTEUR_ACTIVER; i++) {
			m_vecteur_id_activer_secteur.push_back(tableau[i]);
		}
		int tableau_valeurs_id_ecrans[NOMBRE_BOUTTON_ECRANS]= {
        id_button_ecrans_SA001,
        id_button_ecrans_SA002,
        id_button_ecrans_SB001,
        id_button_ecrans_SB002,
        id_button_ecrans_SC001,
        id_button_ecrans_SC002,
        id_button_ecrans_SD001,
        id_button_ecrans_SD002,
        id_button_ecrans_SE001,
        id_button_ecrans_SE002,
        id_button_ecrans_SF001,
        id_button_ecrans_SF002,
        id_button_ecrans_SG001,
        id_button_ecrans_SG002,
        id_button_ecrans_SH001,
        id_button_ecrans_SH002
    };
	for (int i = 0; i< NOMBRE_BOUTTON_ECRANS; i++) {
			m_vecteur_id_ecrans_module.push_back(tableau_valeurs_id_ecrans[i]);
		}
		
	int tableau_valeurs_id_pc[NOMBRE_BOUTTON_PC]= {
            id_button_pc_SA001,
            id_button_pc_SA002,
            id_button_pc_SB001,
            id_button_pc_SB002,
            id_button_pc_SC001,
            id_button_pc_SC002,
            id_button_pc_SD001,
            id_button_pc_SD002,
            id_button_pc_SE001,
            id_button_pc_SE002,
            id_button_pc_SF001,
            id_button_pc_SF002,
            id_button_pc_SG001,
            id_button_pc_SG002,
            id_button_pc_SH001,
            id_button_pc_SH002
        };
        
        for (int i = 0; i< NOMBRE_BOUTTON_PC; i++) {
			m_vecteur_id_pc_module.push_back(tableau_valeurs_id_pc[i]);
        }
		
		int tableau_valeur_id_24h[NOMBRE_BUTTON_24H] = {
			id_button_24h_SA001,
			id_button_24h_SA002,
			id_button_24h_SB001,
			id_button_24h_SB002,
			id_button_24h_SC001,
			id_button_24h_SC002,
			id_button_24h_SD001,
			id_button_24h_SD002,
			id_button_24h_SE001,
			id_button_24h_SE002,
			id_button_24h_SF001,
			id_button_24h_SF002,
			id_button_24h_SG001,
			id_button_24h_SG002,
			id_button_24h_SH001,
			id_button_24h_SH002
		};
		
		for (int i = 0; i< NOMBRE_BOUTTON_PC; i++) {
			m_vecteur_id_24h.push_back(tableau_valeur_id_24h[i]);
        }
		
		int tableau_valeur_id_applique[NOMBRE_BOUTTON_APPLIQUE] = {
			id_button_applique_SA,
			id_button_applique_SB,
			id_button_applique_SC,
			id_button_applique_SD,
			id_button_applique_SE,
			id_button_applique_SF,
			id_button_applique_SG,
			id_button_applique_SH
		};
		for (int i = 0; i< NOMBRE_BOUTTON_PC; i++) {
			m_vector_id_applique.push_back(tableau_valeur_id_applique[i]);
        }
}

void EvtFramePrincipal::Set_text_controle_value( const wxString& module_id, const wxString& type_mesure, double value_mesure) {
	
        wxString textCtrlName = wxString::Format(wxT("m_textCtrl_%s_%s"), module_id, type_mesure);//m_textCtrl_SA001_intensy
		
        wxTextCtrl* textCtrl = dynamic_cast<wxTextCtrl*>(FindWindowByName(textCtrlName));
		//wxTextCtrl* textCtrl = wxStaticCast(FindWindowByLabel(textCtrlLabel), wxTextCtrl);
		
        if (textCtrl) {
            textCtrl->SetValue(wxString::Format(wxT("%.2f"), value_mesure));
        }
		//else
			//cout<<"Espace de text non trouvé"<<endl;
}


string EvtFramePrincipal::extract_module_name(const string& texte) {

    unsigned int position = texte.find("Module");
    
    if (position != std::string::npos) {
        
        return texte.substr(position + 7);
    } 
	else {
        return texte;
    }
}

bool EvtFramePrincipal::is_button_id_in_vector(const vector<int>& my_vector, int button_id) {
	
    return std::find(my_vector.begin(), my_vector.end(), button_id) != my_vector.end();
}

void EvtFramePrincipal::button_active_clicked(int id, bool found, string nom_secteur, wxCommandEvent& event){
	
	 for (unsigned int i = 0; i < m_vecteur_id_activer_secteur.size(); i++) {
		
			if (m_vecteur_id_activer_secteur[i] == id) {
					
					nom_secteur = list_secteurs[i];
					cout << nom_secteur<<endl;
					//index = i;
					found = true;
					
					break;
			}
		}
		if (found) {
			bool state = static_cast<wxToggleButton*>(event.GetEventObject())->GetValue();
			// Mettre à jour l'état_demande du secteur dans la base de données
			m_data_base.set_etat_secteur_demande(nom_secteur, state);
		} 
	
		else {
			// id n'est pas trouvé dans le vecteur
			cout<< "The value does not match"<<endl;
		}
}

void EvtFramePrincipal::button_pc_clicked(int id, bool found, string nom_module, wxCommandEvent& event){
	
	  for (unsigned int i = 0; i < m_vecteur_id_pc_module.size(); i++) {
		
			if (m_vecteur_id_pc_module[i] == id) {
					nom_module = list_modules[i];
					cout << nom_module<<endl;
					//index = i;
					found = true;
					break;
			}
		}
		if (found) {
			
			// Récupération de l'état du bouton
			bool state = static_cast<wxToggleButton*>(event.GetEventObject())->GetValue();

			// Mettre à jour le champ etat_demande
			m_data_base.set_etat_demande_des_machines_du_module(nom_module, state);
		} 
		else {
			// id n'est pas trouvé dans le vecteur
			cout<< "The value does not match"<<endl;
		}
	
}

void EvtFramePrincipal::button_24h_clicked(int id, bool found, string nom_module){
	
	 for (unsigned int i = 0; i < m_vecteur_id_24h.size(); i++) {
			
			if (m_vecteur_id_24h[i] == id) {
				
					nom_module = list_modules[i];
					cout << nom_module<<endl;
					//index = i;
					found = true;
					break;
			}
		}
		if (found) {
			//std::cout <<"the index is : "<<index<< " ID has been found : " << id << std::endl;
			m_mesures_historiques = m_data_base.recuperer_mesures_historiques(nom_module); //Ces donneé doivent me permettre à dessiner un graphisue sous formde des courbe
		} 
		else {
			// id n'est pas trouvé dans le vecteur
			cout<< "The value does not match"<<endl;
		}
}

void EvtFramePrincipal::button_applique_clicked(int id, bool found){
	
	 for (unsigned int i = 0; i < m_vector_id_applique.size(); i++) {
		
			if (m_vector_id_applique[i] == id) {
				
					found = true;
			
					break;
			}
		}
		if (found) {
		
			// id est trouvé dans le vecteur
			std::cout <<"the index is :  ID has been found : " << id << std::endl;
			
			wxDateTime date = date_choisi->GetValue();
			wxDateTime heure = heure_choisi->GetValue();

			wxString dateStr = date.FormatISODate();
			wxString timeStr = heure.FormatISOTime();
			cout<<"Selected Date : "<<dateStr<<"\n Selected Time : "<< timeStr<<endl;
	
		} 
		else {
			// id n'est pas trouvé dans le vecteur
			cout<< "The value does not match"<<endl;
		}
}

void EvtFramePrincipal::OnToggleButtonClicked(wxCommandEvent& event){
    
    // Implémentation de OnToggleButtonClicked
	int id = event.GetId();
	bool found = false;
	//unsigned int index;
	string nom_secteur ="";
	string nom_module = "";
	wxString secteur;
		
	if(is_button_id_in_vector(m_vecteur_id_activer_secteur, id)){
		
		button_active_clicked(id, found, nom_secteur, event);
		
		////////////////////////////////////////////////////////
		
		/*Thread_action* updateThread = new Thread_action(this);
        if (updateThread->Create() == wxTHREAD_NO_ERROR) {
			
            updateThread->Run();
        }*/
		
		///////////////////////////////////////////////////////////
		
	}
	
	else if(is_button_id_in_vector(m_vecteur_id_pc_module, id)){
        
        button_pc_clicked(id, found, nom_module, event);
    }
}

void EvtFramePrincipal::OnButtonClicked(wxCommandEvent& event){
    // Implémentation de OnButtonClicked	
	int id = event.GetId();
	bool found = false;
	//unsigned int index;
	string nom_secteur = "";
	string nom_module = "";
	//wxString secteur;
	
	if(is_button_id_in_vector(m_vecteur_id_24h, id)){
		
		button_24h_clicked(id, found, nom_module);
		////////////////////////////////////////////////////////
		
		/*m_thread_plot = new Thread_plot(this);
        if (m_thread_plot->Create() != wxTHREAD_NO_ERROR) {
			wxLogError("Création thread plot impossible!");
        }
		else{
			m_thread_plot->Run();
		}*/
		
		///////////////////////////////////////////////////////////
        
    }
	
	else if(is_button_id_in_vector(m_vector_id_applique, id)){
        
        button_applique_clicked(id, found);
		
		////////////////////////////////////////////////////////
		
		
		
		///////////////////////////////////////////////////////////
		
		
    }
}

/*void EvtFramePrincipal::OnUpdateDatabase(wxCommandEvent& event) {
    // Crée une instance du thread pour la mise à jour de la base de données et le démarre
    Thread_action* updateThread = new Thread_action(this);
    if (updateThread->Create() == wxTHREAD_NO_ERROR) {
        updateThread->Run();
    }
}*/


void EvtFramePrincipal::OnUpdateCompleted(wxCommandEvent& event) {
	
    bool updateSuccess = event.GetInt() == 1;
	
    if (updateSuccess) {
		
       // wxMessageBox("Mise à jour réussie !");
    } 
	else {
      //  wxMessageBox("Échec de la mise à jour.");
    }
}

void EvtFramePrincipal::OnGetDataCompleted(wxCommandEvent& event) {
    
	
	vector<MESURE>* mesures_actuelles = static_cast<std::vector<MESURE>*>(event.GetClientData());
	//wxMessageBox("Échec de la mise à jour.");
		
    
    if (mesures_actuelles)
    {	
		
        for (unsigned int i = 0; i < mesures_actuelles->size(); i++){
			

			if(mesures_actuelles->at(i).get_nom_module()== "Module SA001"){
				m_textCtrl_SA001_intensy->Clear();
				m_textCtrl_SA001_intensy->SetValue(wxString::Format(wxT("%.2f A"), mesures_actuelles->at(i).get_intensite()));
				//m_textCtrl_SA001_intensy->Clear();
				
				m_textCtrl_SA001_puissance->Clear();
				m_textCtrl_SA001_puissance->SetValue(wxString::Format(wxT("%.2f W"), mesures_actuelles->at(i).get_puissance()));
				//m_textCtrl_SA001_puissance->Clear();
				
				m_textCtrl_SA001_tension->Clear();
				m_textCtrl_SA001_tension->SetValue(wxString::Format(wxT("%.2f V"), mesures_actuelles->at(i).get_tension()));
				//m_textCtrl_SA001_tension->Clear();
			}
			
			else if(mesures_actuelles->at(i).get_nom_module()== "Module SA002"){
				m_textCtrl_SA002_intensy->Clear();
				m_textCtrl_SA002_intensy->SetValue(wxString::Format(wxT("%.2f A"), mesures_actuelles->at(i).get_intensite()));
				m_textCtrl_SA002_puissance->SetValue(wxString::Format(wxT("%.2f W"), mesures_actuelles->at(i).get_puissance()));
				m_textCtrl_SA002_tension->SetValue(wxString::Format(wxT("%.2f V"), mesures_actuelles->at(i).get_tension()));

			}
			
			else if(mesures_actuelles->at(i).get_nom_module()== "Module SB001"){
				m_textCtrl_SB001_intensy->Clear();
				m_textCtrl_SB001_intensy->SetValue(wxString::Format(wxT("%.2f A"), mesures_actuelles->at(i).get_intensite()));
				m_textCtrl_SB001_puissance->SetValue(wxString::Format(wxT("%.2f W"), mesures_actuelles->at(i).get_puissance()));
				m_textCtrl_SB001_tension->SetValue(wxString::Format(wxT("%.2f V"), mesures_actuelles->at(i).get_tension()));
			}
			
			else if(mesures_actuelles->at(i).get_nom_module()== "Module SB002"){
				m_textCtrl_SB002_intensy->Clear();
				m_textCtrl_SB002_intensy->SetValue(wxString::Format(wxT("%.2f A"), mesures_actuelles->at(i).get_intensite()));
				m_textCtrl_SB002_puissance->SetValue(wxString::Format(wxT("%.2f W"), mesures_actuelles->at(i).get_puissance()));
				m_textCtrl_SB002_tension->SetValue(wxString::Format(wxT("%.2f V"), mesures_actuelles->at(i).get_tension()));
			}
			
			else if(mesures_actuelles->at(i).get_nom_module()== "Module SC001"){
				m_textCtrl_SC001_intensy->Clear();
				m_textCtrl_SC001_intensy->SetValue(wxString::Format(wxT("%.2f A"), mesures_actuelles->at(i).get_intensite()));
				m_textCtrl_SC001_puissance->SetValue(wxString::Format(wxT("%.2f W"), mesures_actuelles->at(i).get_puissance()));
				m_textCtrl_SC001_tension->SetValue(wxString::Format(wxT("%.2f V"), mesures_actuelles->at(i).get_tension()));
			}
			
			else if(mesures_actuelles->at(i).get_nom_module()== "Module SC002"){
				m_textCtrl_SC002_intensy->Clear();
				m_textCtrl_SC002_intensy->SetValue(wxString::Format(wxT("%.2f A"), mesures_actuelles->at(i).get_intensite()));
				m_textCtrl_SC002_puissance->SetValue(wxString::Format(wxT("%.2f W"), mesures_actuelles->at(i).get_puissance()));
				m_textCtrl_SC002_tension->SetValue(wxString::Format(wxT("%.2f V"), mesures_actuelles->at(i).get_tension()));
			}
			
			else if(mesures_actuelles->at(i).get_nom_module()== "Module SD001"){
				m_textCtrl_SD001_intensy->Clear();
				m_textCtrl_SD001_intensy->SetValue(wxString::Format(wxT("%.2f A"), mesures_actuelles->at(i).get_intensite()));
				m_textCtrl_SD001_puissance->SetValue(wxString::Format(wxT("%.2f W"), mesures_actuelles->at(i).get_puissance()));
				m_textCtrl_SD001_tension->SetValue(wxString::Format(wxT("%.2f V"), mesures_actuelles->at(i).get_tension()));
			}
			
			else if(mesures_actuelles->at(i).get_nom_module()== "Module SD002"){
				m_textCtrl_SD002_intensy->Clear();
				m_textCtrl_SD002_intensy->SetValue(wxString::Format(wxT("%.2f A"), mesures_actuelles->at(i).get_intensite()));
				m_textCtrl_SD002_puissance->SetValue(wxString::Format(wxT("%.2f W"), mesures_actuelles->at(i).get_puissance()));
				m_textCtrl_SD002_tension->SetValue(wxString::Format(wxT("%.2f V"), mesures_actuelles->at(i).get_tension()));
			}

            //std::cout << "Measure: " << mesures_actuelles << std::endl; // Remplacez par la mise à jour de votre IHM
        }
        delete mesures_actuelles; // Libération de la mémoire
    }
	else{
		m_statusBar->SetStatusText("Pas de données disponible dans les 2 derenières minutes", 0);
		//m_statusBar->SetStatusText(ligne, position);
	}
	
}





void EvtFramePrincipal::OnPlotCompleted(wxCommandEvent& event) {
	
    //wxMessageBox("Graphique tracé avec succès !");
}

void EvtFramePrincipal::OnMonitorUpdate(wxCommandEvent& event) {
    bool valuesEqual = event.GetInt() == 1;
	
    if (valuesEqual) {
       // wxMessageBox("Les valeurs du secteur sont synchronisées !");
    } 
	else {
       // wxMessageBox("Les valeurs du secteur ne sont pas synchronisées !");
    }
}


void EvtFramePrincipal::OnCloseapp( wxCloseEvent& event ){
	
	//if(m_thread_action != nullptr)
		//	delete m_thread_action;
		
	m_thread_get_data->stop_thread();
	
	if(m_thread_get_data->IsAlive()){
		
		m_thread_get_data->Delete();
		cout<<"delete appelé! et fini"<<endl;
		m_thread_get_data = nullptr;
	}
	
/*	m_thread_action->stop_thread();
	
	if(m_thread_action->IsAlive()){
		
		m_thread_action->Delete();
		cout<<"delete appelé! et fini"<<endl;
		m_thread_action = nullptr;
	}
	
	m_thread_monitor->stop_thread();
	
	if(m_thread_monitor->IsAlive()){
		
		m_thread_monitor->Delete();
		cout<<"delete appelé! et fini"<<endl;
		m_thread_monitor = nullptr;
	}
	
	
	m_thread_plot->stop_thread();
	
	if(m_thread_plot->IsAlive()){
		
		m_thread_plot->Delete();
		cout<<"delete appelé! et fini"<<endl;
		m_thread_plot = nullptr;
	}
	*/
	
	

	
	DATA_BASE& db = DATA_BASE::getInstance();
    if (db.isConnected()) {
        db.disconnect();
    }
	
    event.Skip();
	
}



		wxBEGIN_EVENT_TABLE(EvtFramePrincipal, wxFrame)
			EVT_TOGGLEBUTTON(wxID_ANY, EvtFramePrincipal::OnToggleButtonClicked)
			EVT_BUTTON(wxID_ANY,EvtFramePrincipal::OnButtonClicked)
			///////////////////////////
			
			EVT_COMMAND(wxID_ANY, THREAD_UPDATE_COMPLETE, EvtFramePrincipal::OnUpdateCompleted)
			EVT_COMMAND(wxID_ANY, THREAD_GET_DATA_COMPLETE, EvtFramePrincipal::OnGetDataCompleted)
			EVT_COMMAND(wxID_ANY, THREAD_PLOT_COMPLETE, EvtFramePrincipal::OnPlotCompleted)
			EVT_COMMAND(wxID_ANY, THREAD_MONITOR_UPDATE, EvtFramePrincipal::OnMonitorUpdate)

			//////////////////////////
		wxEND_EVENT_TABLE()
		
		
		
		
		