#include "Thread_get_data.h"
#include "DATA_BASE.h"
#include "EvtFramePrincipal.h"
#include <wx/utils.h> 
Thread_get_data::Thread_get_data(wxEvtHandler* parent)
    : wxThread(wxTHREAD_DETACHED), m_parent(parent), m_data_base(DATA_BASE::getInstance()) { m_parent = parent;}

Thread_get_data::~Thread_get_data() {
	
}

void *Thread_get_data::Entry() {
	
	if(!m_data_base.isConnected()){
			m_data_base.connect();
	}
	
	while((!TestDestroy()) && (m_stop_thread==false)){
		
		m_data_base.recuperer_mesures_actuelles();
		
		wxCommandEvent event(THREAD_GET_DATA_COMPLETE);
		
		event.SetClientData(new std::vector<MESURE>(m_data_base.Get_mesures_actuelles()));
		
		wxPostEvent(m_parent, event);
		
		//wxQueueEvent(m_parent, event.Clone());
		wxMilliSleep(10000);
	
	}
    OnExit();
    return NULL;
}

void Thread_get_data::OnExit(){
	std::cout<<"Thread get_data: OnExit appelé"<<std::endl;
}

void Thread_get_data::stop_thread(){
	//Delete();
	m_stop_thread = true;
}