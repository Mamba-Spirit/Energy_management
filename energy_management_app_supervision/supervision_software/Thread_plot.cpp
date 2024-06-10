#include "Thread_plot.h"

Thread_plot::Thread_plot(wxEvtHandler* parent)
    : wxThread(wxTHREAD_DETACHED), m_parent(parent),m_data_base(DATA_BASE::getInstance()) {m_parent = parent;}

Thread_plot::~Thread_plot() {}

void *Thread_plot::Entry() {
    // Simuler le tracé du graphique en utilisant des données
    // Exemple : db.recuperer_mesures_historiques(nom_module);
	if(!m_data_base.isConnected()){
			m_data_base.connect();
	}
	
	/*while(!TestDestroy()){
		
		
		wxCommandEvent event(THREAD_PLOT_COMPLETE);
		wxPostEvent(m_parent, event);
	}*/
    

    return NULL;
}
void Thread_plot::OnExit(){
	std::cout<<"Thread plot: OnExit appelé"<<std::endl;
	this->Delete();
}
