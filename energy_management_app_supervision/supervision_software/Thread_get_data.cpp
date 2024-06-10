#include "Thread_get_data.h"
#include "DATA_BASE.h"
#include "EvtFramePrincipal.h"
#include <wx/utils.h> 
Thread_get_data::Thread_get_data(wxEvtHandler* parent)
    : wxThread(wxTHREAD_DETACHED), m_parent(parent), m_data_base(DATA_BASE::getInstance()) { m_parent = parent;}

Thread_get_data::~Thread_get_data() {
	
}

void *Thread_get_data::Entry() {
    //DATA_BASE *db = new DATA_BASE;
    //std::vector<MESURE> mesures = db->recuperer_mesures_historiques("nom_module");
	if(!m_data_base.isConnected()){
			m_data_base.connect();
		}
	while(!TestDestroy()){
		
		 if (TestDestroy()) {
            break; // Sortir de la boucle si le thread doit être arrêté
        }
		m_data_base.recuperer_mesures_actuelles();
		
		wxCommandEvent event(THREAD_GET_DATA_COMPLETE);
		
		event.SetClientData(new std::vector<MESURE>(m_data_base.Get_mesures_actuelles()));
		
		wxPostEvent(m_parent, event);
		
		//wxQueueEvent(m_parent, event.Clone());
		wxMilliSleep(10000);
	
	}
    
    return NULL;
}

void Thread_get_data::OnExit(){
	std::cout<<"Thread get_data: OnExit appelé"<<std::endl;
	//this->Delete();
}

void Thread_get_data::stop_thread(){
	Delete();
}