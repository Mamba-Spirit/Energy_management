#ifndef THREAD_MONITOR_H
#define THREAD_MONITOR_H

#include <wx/thread.h>
#include "CustomEvents.h"
#include "DATA_BASE.h"


class Thread_monitor : public wxThread {
public:
    Thread_monitor(wxEvtHandler* parent);
    ~Thread_monitor();

protected:
    virtual void *Entry();
	virtual void OnExit();

private:
    wxEvtHandler* m_parent;
	DATA_BASE& m_data_base;
};

#endif // THREAD_MONITOR_H
