#ifndef THREAD_PLOT_H
#define THREAD_PLOT_H

#include <wx/thread.h>
#include "EvtFramePrincipal.h"
#include "CustomEvents.h"
#include "DATA_BASE.h"


class Thread_plot : public wxThread {
public:
    Thread_plot(wxEvtHandler* parent);
    ~Thread_plot();

protected:
    virtual void *Entry();
	virtual void OnExit();

private:
    wxEvtHandler* m_parent;
	DATA_BASE& m_data_base;
};

#endif // THREAD_PLOT_H
