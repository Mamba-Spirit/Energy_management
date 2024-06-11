#ifndef THREAD_ACTION_H
#define THREAD_ACTION_H

#include <wx/thread.h>
#include "EvtFramePrincipal.h"
#include "CustomEvents.h"
#include "DATA_BASE.h"

class Thread_action : public wxThread {
public:
	Thread_action(wxEvtHandler* parent);

    //Thread_action(wxEvtHandler* parent, const std::string& secteur);
    ~Thread_action();
	void stop_thread();

protected:
    virtual void *Entry();
	virtual void OnExit();

private:
    wxEvtHandler* m_parent;
    std::string m_secteur;
	DATA_BASE& m_data_base;
	bool m_stop_thread = false;
};

#endif // THREAD_ACTION_H
