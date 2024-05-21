#ifndef DATA_RETRIEVAL_THREAD_H
#define DATA_RETRIEVAL_THREAD_H

#include <wx/thread.h>
#include <wx/event.h>

// Déclaration d'un type d'événement personnalisé
wxDECLARE_EVENT(wxEVT_DATA_RETRIEVED, wxCommandEvent);

// Classe pour le thread de récupération des données
class DataRetrievalThread : public wxThread {
public:
    // Constructeur
    DataRetrievalThread(wxEvtHandler* handler);

protected:
    // Fonction d'entrée du thread
    virtual ExitCode Entry();

private:
    wxEvtHandler* m_handler; // Gestionnaire d'événements pour envoyer les notifications
};

#endif // DATA_RETRIEVAL_THREAD_H
