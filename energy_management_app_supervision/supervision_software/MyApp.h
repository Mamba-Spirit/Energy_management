/***************************************************************
 * Name:      MyApp.h
 * Purpose:   Defines Application Class
 * Author:    Axel NGANDU BISEBA 
 * Origine:   Eric laly
 **************************************************************/

#ifndef MYAPP_H
#define MYAPP_H

#include <wx/app.h>


class MyApp : public wxApp
{
    public:
        virtual bool OnInit();
    private:
        wxLocale m_locale;
};

#endif // MYAPP_H
