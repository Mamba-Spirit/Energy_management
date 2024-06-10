#include "Thread_monitor.h"
#include "DATA_BASE.h"
#include <chrono>
#include <thread>

Thread_monitor::Thread_monitor(wxEvtHandler* parent)
    : wxThread(wxTHREAD_DETACHED), m_parent(parent),m_data_base(DATA_BASE::getInstance()) {m_parent = parent;}

Thread_monitor::~Thread_monitor() {}

void *Thread_monitor::Entry() {
    //DATA_BASE *db = new DATA_BASE;
	if(!m_data_base.isConnected()){
			m_data_base.connect();
		}
	
    /*while (!TestDestroy()) {
        // Vérifie les valeurs de la base de données
		
        std::string secteur = "Secteur A"; // Exemples, adapter selon les besoins
        bool etat_secteur = m_data_base.get_etat_secteur(secteur);
        bool etat_secteur_demande = m_data_base.get_etat_secteur_demande(secteur);

        if (etat_secteur == etat_secteur_demande) {
            wxCommandEvent event(THREAD_MONITOR_UPDATE);
            event.SetInt(1); // Indique que les valeurs sont égales
            wxPostEvent(m_parent, event);
        }
		else {
            wxCommandEvent event(THREAD_MONITOR_UPDATE);
            event.SetInt(0); // Indique que les valeurs sont différentes
            wxPostEvent(m_parent, event);
        }

        // Pause avant la prochaine vérification
        std::this_thread::sleep_for(std::chrono::seconds(2));
    }*/
    return NULL;
}

void Thread_monitor::OnExit(){
	std::cout<<"Thread Monitor: OnExit appelé"<<std::endl;
	this->Delete();
}
