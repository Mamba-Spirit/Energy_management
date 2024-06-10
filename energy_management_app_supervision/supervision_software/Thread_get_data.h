#ifndef THREAD_GET_DATA_H
#define THREAD_GET_DATA_H

#include <wx/thread.h>
#include "EvtFramePrincipal.h"
#include "CustomEvents.h"
#include "DATA_BASE.h"


class Thread_get_data : public wxThread {
public:
    Thread_get_data(wxEvtHandler* parent);
    ~Thread_get_data();
	void stop_thread();

protected:
    virtual void *Entry();
	virtual void OnExit();

private:
    wxEvtHandler* m_parent;
	DATA_BASE& m_data_base;
	
};

#endif // THREAD_GET_DATA_H
