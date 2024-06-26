#ifndef CUSTOM_EVENTS_H
#define CUSTOM_EVENTS_H

#include <wx/wx.h>

wxDECLARE_EVENT(THREAD_UPDATE_COMPLETE, wxCommandEvent);
wxDECLARE_EVENT(THREAD_GET_DATA_COMPLETE, wxCommandEvent);
wxDECLARE_EVENT(THREAD_PLOT_COMPLETE, wxCommandEvent);
wxDECLARE_EVENT(THREAD_MONITOR_UPDATE, wxCommandEvent);

#endif // CUSTOM_EVENTS_H
