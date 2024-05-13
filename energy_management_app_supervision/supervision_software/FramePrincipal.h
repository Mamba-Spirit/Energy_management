///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/sizer.h>
#include <wx/tglbtn.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/button.h>
#include <wx/statbox.h>
#include <wx/gbsizer.h>
#include <wx/statbmp.h>
#include <wx/panel.h>
#include <wx/notebook.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class FramePrincipal
///////////////////////////////////////////////////////////////////////////////
class FramePrincipal : public wxFrame
{
	private:

	protected:
		wxNotebook* m_notebook1;
		wxPanel* m_panel_salle_1;
		wxStaticText* m_staticText4715;
		wxTextCtrl* m_textCtrl_SA001_intensy;
		wxStaticText* m_staticText45515;
		wxTextCtrl* m_textCtrl_SA001_tension;
		wxStaticText* m_staticText46515;
		wxTextCtrl* m_textCtrl_SA001_puissance;
		wxToggleButton* m_button_activer_SA001;
		wxButton* m_button_24h_SA001;
		wxToggleButton* m_button_pc_SA001;
		wxToggleButton* m_button_ecrans_SA001;
		wxStaticText* m_staticText47122;
		wxTextCtrl* m_textCtrl_SA002_intensy;
		wxStaticText* m_staticText455122;
		wxTextCtrl* m_textCtrl_SA002_tension;
		wxStaticText* m_staticText465122;
		wxTextCtrl* m_textCtrl_SA002_puissance;
		wxToggleButton* m_button_activer_SA002;
		wxButton* m_button_24h_SA002;
		wxToggleButton* m_button_pc_SA002;
		wxToggleButton* m_button_ecrans_SA002;
		wxStaticText* m_staticText47152;
		wxTextCtrl* m_textCtrl_SB001_intensy;
		wxStaticText* m_staticText455152;
		wxTextCtrl* m_textCtrl_SB001_tension;
		wxStaticText* m_staticText465152;
		wxTextCtrl* m_textCtrl_SB001_puissance;
		wxToggleButton* m_button_activer_SB001;
		wxButton* m_button_24h_SB001;
		wxToggleButton* m_button_pc_SB001;
		wxToggleButton* m_button_ecrans_SB001;
		wxStaticText* m_staticText471221;
		wxTextCtrl* m_textCtrl_SB002_intensy;
		wxStaticText* m_staticText4551221;
		wxTextCtrl* m_textCtrl_SB002_tension;
		wxStaticText* m_staticText4651221;
		wxTextCtrl* m_textCtrl_SB002_puissance;
		wxToggleButton* m_button_activer_SB002;
		wxButton* m_button_24h_SB002;
		wxToggleButton* m_button_pc_SB002;
		wxToggleButton* m_button_ecrans_SB002;
		wxStaticBitmap* m_bitmap33;
		wxPanel* m_panel_salle_2;
		wxStaticText* m_staticText47151;
		wxTextCtrl* m_textCtrl_SC001_intensy;
		wxStaticText* m_staticText455151;
		wxTextCtrl* m_textCtrl_SC001_tension;
		wxStaticText* m_staticText465151;
		wxTextCtrl* m_textCtrl_SC001_puissance;
		wxToggleButton* m_button_activer_SC001;
		wxButton* m_button_24h_SC001;
		wxToggleButton* m_button_pc_SC001;
		wxToggleButton* m_button_ecrans_SC001;
		wxStaticText* m_staticText471222;
		wxTextCtrl* m_textCtrl_SC002_intensy;
		wxStaticText* m_staticText4551222;
		wxTextCtrl* m_textCtrl_SC002_tension;
		wxStaticText* m_staticText4651222;
		wxTextCtrl* m_textCtrl_SC002_puissance;
		wxToggleButton* m_button_activer_SC002;
		wxButton* m_button_24h_SC002;
		wxToggleButton* m_button_pc_SC002;
		wxToggleButton* m_button_ecrans_SC002;
		wxStaticText* m_staticText471521;
		wxTextCtrl* m_textCtrl_SD001_intensy;
		wxStaticText* m_staticText4551521;
		wxTextCtrl* m_textCtrl_SD001_tension;
		wxStaticText* m_staticText4651521;
		wxTextCtrl* m_textCtrl_SD001_puissance;
		wxToggleButton* m_button_activer_SD001;
		wxButton* m_button_24h_SD001;
		wxToggleButton* m_button_pc_SD001;
		wxToggleButton* m_button_ecrans_SD001;
		wxStaticText* m_staticText4712211;
		wxTextCtrl* m_textCtrl_SD002_intensy;
		wxStaticText* m_staticText45512211;
		wxTextCtrl* m_textCtrl_SD002_tension;
		wxStaticText* m_staticText46512211;
		wxTextCtrl* m_textCtrl_SD002_puissance;
		wxToggleButton* m_button_activer_SD002;
		wxButton* m_button_24h_SD002;
		wxToggleButton* m_button_pc_SD002;
		wxToggleButton* m_button_ecrans_SD002;
		wxStaticBitmap* m_bitmap331;
		wxPanel* m_panel_salle_3;
		wxStaticText* m_staticText47153;
		wxTextCtrl* m_textCtrl_SE001_intensy;
		wxStaticText* m_staticText455153;
		wxTextCtrl* m_textCtrl_SE001_tension;
		wxStaticText* m_staticText465153;
		wxTextCtrl* m_textCtrl_SE001_puissance;
		wxToggleButton* m_button_activer_SE001;
		wxButton* m_button_24h_SE001;
		wxToggleButton* m_button_pc_SE001;
		wxToggleButton* m_button_ecrans_SE001;
		wxStaticText* m_staticText471223;
		wxTextCtrl* m_textCtrl_SE002_intensy;
		wxStaticText* m_staticText4551223;
		wxTextCtrl* m_textCtrl_SE002_tension;
		wxStaticText* m_staticText4651223;
		wxTextCtrl* m_textCtrl_SE002_puissance;
		wxToggleButton* m_button_activer_SE002;
		wxButton* m_button_24h_SE002;
		wxToggleButton* m_button_pc_SE002;
		wxToggleButton* m_button_ecrans_SE002;
		wxStaticText* m_staticText471522;
		wxTextCtrl* m_textCtrl_SF001_intensy;
		wxStaticText* m_staticText4551522;
		wxTextCtrl* m_textCtrl_SF001_tension;
		wxStaticText* m_staticText4651522;
		wxTextCtrl* m_textCtrl_SF001_puissance;
		wxToggleButton* m_button_activer_SF001;
		wxButton* m_button_24h_SF001;
		wxToggleButton* m_button_pc_SF001;
		wxToggleButton* m_button_ecrans_SF001;
		wxStaticText* m_staticText4712212;
		wxTextCtrl* m_textCtrl_SF002_intensy;
		wxStaticText* m_staticText45512212;
		wxTextCtrl* m_textCtrl_SF002_tension;
		wxStaticText* m_staticText46512212;
		wxTextCtrl* m_textCtrl_SF002_puissance;
		wxToggleButton* m_button_activer_SF002;
		wxButton* m_button_24h_SF002;
		wxToggleButton* m_button_pc_SF002;
		wxToggleButton* m_button_ecrans_SF002;
		wxStaticBitmap* m_bitmap332;
		wxPanel* m_panel_salle_4;
		wxStaticText* m_staticText47154;
		wxTextCtrl* m_textCtrl_SG001_intensy;
		wxStaticText* m_staticText455154;
		wxTextCtrl* m_textCtrl_SG001_tension;
		wxStaticText* m_staticText465154;
		wxTextCtrl* m_textCtrl_SG001_puissance;
		wxToggleButton* m_button_activer_SG001;
		wxButton* m_button_24h_SG001;
		wxToggleButton* m_button_pc_SG001;
		wxToggleButton* m_button_ecrans_SG001;
		wxStaticText* m_staticText471224;
		wxTextCtrl* m_textCtrl_SG002_intensy;
		wxStaticText* m_staticText4551224;
		wxTextCtrl* m_textCtrl_SG002_tension;
		wxStaticText* m_staticText4651224;
		wxTextCtrl* m_textCtrl_SG002_puissance;
		wxToggleButton* m_button_activer_SG002;
		wxButton* m_button_24h_SG002;
		wxToggleButton* m_button_pc_SG002;
		wxToggleButton* m_button_ecrans_SG002;
		wxStaticText* m_staticText471523;
		wxTextCtrl* m_textCtrl_SH001_intensy;
		wxStaticText* m_staticText4551523;
		wxTextCtrl* m_textCtrl_SH001_tension;
		wxStaticText* m_staticText4651523;
		wxTextCtrl* m_textCtrl_SH001_puissance;
		wxToggleButton* m_button_activer_SH001;
		wxButton* m_button_24h_SH001;
		wxToggleButton* m_button_pc_SH001;
		wxToggleButton* m_button_ecrans_SH001;
		wxStaticText* m_staticText4712213;
		wxTextCtrl* m_textCtrl_SH002_intensy;
		wxStaticText* m_staticText45512213;
		wxTextCtrl* m_textCtrl_SH002_tension;
		wxStaticText* m_staticText46512213;
		wxTextCtrl* m_textCtrl_SH002_puissance;
		wxToggleButton* m_button_activer_SH002;
		wxButton* m_button_24h_SH002;
		wxToggleButton* m_button_pc_SH002;
		wxToggleButton* m_button_ecrans_SH002;
		wxStaticBitmap* m_bitmap333;

	public:

		FramePrincipal( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("ENERGY MANAGEMENT"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1176,800 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~FramePrincipal();

};

