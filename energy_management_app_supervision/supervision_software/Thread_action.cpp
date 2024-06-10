#include "Thread_action.h"
#include "DATA_BASE.h"

Thread_action::Thread_action(wxEvtHandler* parent)
    : wxThread(wxTHREAD_DETACHED), m_parent(parent), m_data_base(DATA_BASE::getInstance()) {m_parent = parent;}

Thread_action::~Thread_action() {}

void *Thread_action::Entry() {
   
	/*while(!TestDestroy()){
		
		if(!m_data_base.isConnected()){
				std::cout<<"Thread action: pas encore appelé"<<std::endl;

			m_data_base.connect();
				std::cout<<"Thread action: connexion appelé"<<std::endl;

		}
		bool updateSuccess = m_data_base.get_etat_secteur(m_secteur) == m_data_base.get_etat_secteur_demande(m_secteur);

		wxCommandEvent event(THREAD_UPDATE_COMPLETE);
		event.SetInt(updateSuccess ? 1 : 0); 
		wxPostEvent(m_parent, event);
	}*/

    return NULL;
}

void Thread_action::OnExit(){
	std::cout<<"Thread action: OnExit appelé"<<std::endl;
	this->Delete();
}