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
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/tglbtn.h>
#include <wx/statbox.h>
#include <wx/datectrl.h>
#include <wx/dateevt.h>
#include <wx/timectrl.h>
#include <wx/gbsizer.h>
#include <wx/statbmp.h>
#include <wx/panel.h>
#include <wx/notebook.h>
#include <wx/statusbr.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////

#define id_textCtrl_SA001_intensy 1000
#define id_textCtrl_SA001_tension 1001
#define id_textCtrl_SA001_puissance 1002
#define id_button_24h_SA001 1003
#define id_button_pc_SA001 1004
#define id_button_ecrans_SA001 1005
#define id_textCtrl_SA002_intensy 1006
#define id_textCtrl_SA002_tension 1007
#define id_textCtrl_SA002_puissance 1008
#define id_button_24h_SA002 1009
#define id_button_pc_SA002 1010
#define id_button_ecrans_SA002 1011
#define id_button_applique_SA 1012
#define id_button_activer_SA 1013
#define id_textCtrl_SB001_intensy 1014
#define id_textCtrl_SB001_tension 1015
#define id_textCtrl_SB001_puissance 1016
#define id_button_24h_SB001 1017
#define id_button_pc_SB001 1018
#define id_button_ecrans_SB001 1019
#define id_textCtrl_SB002_intensy 1020
#define id_textCtrl_SB002_tension 1021
#define id_textCtrl_SB002_puissance 1022
#define id_button_24h_SB002 1023
#define id_button_pc_SB002 1024
#define id_button_ecrans_SB002 1025
#define id_button_applique_SB 1026
#define id_button_activer_SB 1027
#define id_textCtrl_SC001_intensy 1028
#define id_textCtrl_SC001_tension 1029
#define id_textCtrl_SC001_puissance 1030
#define id_button_24h_SC001 1031
#define id_button_pc_SC001 1032
#define id_button_ecrans_SC001 1033
#define id_textCtrl_SC002_intensy 1034
#define id_textCtrl_SC002_tension 1035
#define id_textCtrl_SC002_puissance 1036
#define id_button_24h_SC002 1037
#define id_button_pc_SC002 1038
#define id_button_ecrans_SC002 1039
#define id_button_applique_SC 1040
#define id_button_activer_SC 1041
#define id_textCtrl_SD001_intensy 1042
#define id_textCtrl_SD001_tension 1043
#define id_textCtrl_SD001_puissance 1044
#define id_button_24h_SD001 1045
#define id_button_pc_SD001 1046
#define id_button_ecrans_SD001 1047
#define id_textCtrl_SD002_intensy 1048
#define id_textCtrl_SD002_tension 1049
#define id_textCtrl_SD002_puissance 1050
#define id_button_24h_SD002 1051
#define id_button_pc_SD002 1052
#define id_button_ecrans_SD002 1053
#define id_button_applique_SD 1054
#define id_button_activer_SD 1055
#define id_textCtrl_SE001_intensy 1056
#define id_textCtrl_SE001_tension 1057
#define id_textCtrl_SE001_puissance 1058
#define id_button_24h_SE001 1059
#define id_button_pc_SE001 1060
#define id_button_ecrans_SE001 1061
#define id_textCtrl_SE002_intensy 1062
#define id_textCtrl_SE002_tension 1063
#define id_textCtrl_SE002_puissance 1064
#define id_button_24h_SE002 1065
#define id_button_pc_SE002 1066
#define id_button_ecrans_SE002 1067
#define id_button_applique_SE 1068
#define id_button_activer_SE 1069
#define id_textCtrl_SF001_intensy 1070
#define id_textCtrl_SF001_tension 1071
#define id_textCtrl_SF001_puissance 1072
#define id_button_24h_SF001 1073
#define id_button_pc_SF001 1074
#define id_button_ecrans_SF001 1075
#define id_textCtrl_SF002_intensy 1076
#define id_textCtrl_SF002_tension 1077
#define id_textCtrl_SF002_puissance 1078
#define id_button_24h_SF002 1079
#define id_button_pc_SF002 1080
#define id_button_ecrans_SF002 1081
#define id_button_applique_SF 1082
#define id_button_activer_SF 1083
#define id_textCtrl_SG001_intensy 1084
#define id_textCtrl_SG001_tension 1085
#define id_textCtrl_SG001_puissance 1086
#define id_button_24h_SG001 1087
#define id_button_pc_SG001 1088
#define id_button_ecrans_SG001 1089
#define id_textCtrl_SG002_intensy 1090
#define id_textCtrl_SG002_tension 1091
#define id_textCtrl_SG002_puissance 1092
#define id_button_24h_SG002 1093
#define id_button_pc_SG002 1094
#define id_button_ecrans_SG002 1095
#define id_button_applique_SG 1096
#define id_button_activer_SG 1097
#define id_textCtrl_SH001_intensy 1098
#define id_textCtrl_SH001_tension 1099
#define id_textCtrl_SH001_puissance 1100
#define id_button_24h_SH001 1101
#define id_button_pc_SH001 1102
#define id_button_ecrans_SH001 1103
#define id_textCtrl_SH002_intensy 1104
#define id_textCtrl_SH002_tension 1105
#define id_textCtrl_SH002_puissance 1106
#define id_button_24h_SH002 1107
#define id_button_pc_SH002 1108
#define id_button_ecrans_SH002 1109
#define id_button_applique_SH 1110
#define id_button_activer_SH 1111

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
		wxButton* m_button_24h_SA001;
		wxToggleButton* m_button_pc_SA001;
		wxToggleButton* m_button_ecrans_SA001;
		wxStaticText* m_staticText47122;
		wxTextCtrl* m_textCtrl_SA002_intensy;
		wxStaticText* m_staticText455122;
		wxTextCtrl* m_textCtrl_SA002_tension;
		wxStaticText* m_staticText465122;
		wxTextCtrl* m_textCtrl_SA002_puissance;
		wxButton* m_button_24h_SA002;
		wxToggleButton* m_button_pc_SA002;
		wxToggleButton* m_button_ecrans_SA002;
		wxDatePickerCtrl* m_datePicker1;
		wxTimePickerCtrl* m_timePicker3;
		wxButton* m_button_applique_SA;
		wxToggleButton* m_button_activer_SA;
		wxStaticText* m_staticText47152;
		wxTextCtrl* m_textCtrl_SB001_intensy;
		wxStaticText* m_staticText455152;
		wxTextCtrl* m_textCtrl_SB001_tension;
		wxStaticText* m_staticText465152;
		wxTextCtrl* m_textCtrl_SB001_puissance;
		wxButton* m_button_24h_SB001;
		wxToggleButton* m_button_pc_SB001;
		wxToggleButton* m_button_ecrans_SB001;
		wxStaticText* m_staticText471221;
		wxTextCtrl* m_textCtrl_SB002_intensy;
		wxStaticText* m_staticText4551221;
		wxTextCtrl* m_textCtrl_SB002_tension;
		wxStaticText* m_staticText4651221;
		wxTextCtrl* m_textCtrl_SB002_puissance;
		wxButton* m_button_24h_SB002;
		wxToggleButton* m_button_pc_SB002;
		wxToggleButton* m_button_ecrans_SB002;
		wxDatePickerCtrl* m_datePicker11;
		wxTimePickerCtrl* m_timePicker31;
		wxButton* m_button_applique_SB;
		wxToggleButton* m_button_activer_SB;
		wxStaticBitmap* m_bitmap7;
		wxPanel* m_panel_salle_2;
		wxStaticText* m_staticText47151;
		wxTextCtrl* m_textCtrl_SC001_intensy;
		wxStaticText* m_staticText455151;
		wxTextCtrl* m_textCtrl_SC001_tension;
		wxStaticText* m_staticText465151;
		wxTextCtrl* m_textCtrl_SC001_puissance;
		wxButton* m_button_24h_SC001;
		wxToggleButton* m_button_pc_SC001;
		wxToggleButton* m_button_ecrans_SC001;
		wxStaticText* m_staticText471222;
		wxTextCtrl* m_textCtrl_SC002_intensy;
		wxStaticText* m_staticText4551222;
		wxTextCtrl* m_textCtrl_SC002_tension;
		wxStaticText* m_staticText4651222;
		wxTextCtrl* m_textCtrl_SC002_puissance;
		wxButton* m_button_24h_SC002;
		wxToggleButton* m_button_pc_SC002;
		wxToggleButton* m_button_ecrans_SC002;
		wxDatePickerCtrl* m_datePicker12;
		wxTimePickerCtrl* m_timePicker32;
		wxButton* m_button_applique_SC;
		wxToggleButton* m_button_activer_SC;
		wxStaticText* m_staticText471521;
		wxTextCtrl* m_textCtrl_SD001_intensy;
		wxStaticText* m_staticText4551521;
		wxTextCtrl* m_textCtrl_SD001_tension;
		wxStaticText* m_staticText4651521;
		wxTextCtrl* m_textCtrl_SD001_puissance;
		wxButton* m_button_24h_SD001;
		wxToggleButton* m_button_pc_SD001;
		wxToggleButton* m_button_ecrans_SD001;
		wxStaticText* m_staticText4712211;
		wxTextCtrl* m_textCtrl_SD002_intensy;
		wxStaticText* m_staticText45512211;
		wxTextCtrl* m_textCtrl_SD002_tension;
		wxStaticText* m_staticText46512211;
		wxTextCtrl* m_textCtrl_SD002_puissance;
		wxButton* m_button_24h_SD002;
		wxToggleButton* m_button_pc_SD002;
		wxToggleButton* m_button_ecrans_SD002;
		wxDatePickerCtrl* m_datePicker13;
		wxTimePickerCtrl* m_timePicker33;
		wxButton* im_button_applique_SD;
		wxToggleButton* m_button_activer_SD;
		wxStaticBitmap* m_bitmap331;
		wxPanel* m_panel_salle_3;
		wxStaticText* m_staticText47153;
		wxTextCtrl* m_textCtrl_SE001_intensy;
		wxStaticText* m_staticText455153;
		wxTextCtrl* m_textCtrl_SE001_tension;
		wxStaticText* m_staticText465153;
		wxTextCtrl* m_textCtrl_SE001_puissance;
		wxButton* m_button_24h_SE001;
		wxToggleButton* m_button_pc_SE001;
		wxToggleButton* m_button_ecrans_SE001;
		wxStaticText* m_staticText471223;
		wxTextCtrl* m_textCtrl_SE002_intensy;
		wxStaticText* m_staticText4551223;
		wxTextCtrl* m_textCtrl_SE002_tension;
		wxStaticText* m_staticText4651223;
		wxTextCtrl* m_textCtrl_SE002_puissance;
		wxButton* m_button_24h_SE002;
		wxToggleButton* m_button_pc_SE002;
		wxToggleButton* m_button_ecrans_SE002;
		wxDatePickerCtrl* m_datePicker121;
		wxTimePickerCtrl* m_timePicker321;
		wxButton* m_button_applique_SE;
		wxToggleButton* m_button_activer_SE;
		wxStaticText* m_staticText471522;
		wxTextCtrl* m_textCtrl_SF001_intensy;
		wxStaticText* m_staticText4551522;
		wxTextCtrl* m_textCtrl_SF001_tension;
		wxStaticText* m_staticText4651522;
		wxTextCtrl* m_textCtrl_SF001_puissance;
		wxButton* m_button_24h_SF001;
		wxToggleButton* m_button_pc_SF001;
		wxToggleButton* m_button_ecrans_SF001;
		wxStaticText* m_staticText4712212;
		wxTextCtrl* m_textCtrl_SF002_intensy;
		wxStaticText* m_staticText45512212;
		wxTextCtrl* m_textCtrl_SF002_tension;
		wxStaticText* m_staticText46512212;
		wxTextCtrl* m_textCtrl_SF002_puissance;
		wxButton* m_button_24h_SF002;
		wxToggleButton* m_button_pc_SF002;
		wxToggleButton* m_button_ecrans_SF002;
		wxDatePickerCtrl* m_datePicker122;
		wxTimePickerCtrl* m_timePicker322;
		wxButton* m_button_applique_SF;
		wxToggleButton* m_button_activer_SF;
		wxStaticBitmap* m_bitmap332;
		wxPanel* m_panel_salle_4;
		wxStaticText* m_staticText47154;
		wxTextCtrl* m_textCtrl_SG001_intensy;
		wxStaticText* m_staticText455154;
		wxTextCtrl* m_textCtrl_SG001_tension;
		wxStaticText* m_staticText465154;
		wxTextCtrl* m_textCtrl_SG001_puissance;
		wxButton* m_button_24h_SG001;
		wxToggleButton* m_button_pc_SG001;
		wxToggleButton* m_button_ecrans_SG001;
		wxStaticText* m_staticText471224;
		wxTextCtrl* m_textCtrl_SG002_intensy;
		wxStaticText* m_staticText4551224;
		wxTextCtrl* m_textCtrl_SG002_tension;
		wxStaticText* m_staticText4651224;
		wxTextCtrl* m_textCtrl_SG002_puissance;
		wxButton* m_button_24h_SG002;
		wxToggleButton* m_button_pc_SG002;
		wxToggleButton* m_button_ecrans_SG002;
		wxDatePickerCtrl* m_datePicker14;
		wxTimePickerCtrl* m_timePicker34;
		wxButton* m_button_applique_SG;
		wxToggleButton* m_button_activer_SG;
		wxStaticText* m_staticText471523;
		wxTextCtrl* m_textCtrl_SH001_intensy;
		wxStaticText* m_staticText4551523;
		wxTextCtrl* m_textCtrl_SH001_tension;
		wxStaticText* m_staticText4651523;
		wxTextCtrl* m_textCtrl_SH001_puissance;
		wxButton* m_button_24h_SH001;
		wxToggleButton* m_button_pc_SH001;
		wxToggleButton* m_button_ecrans_SH001;
		wxStaticText* m_staticText4712213;
		wxTextCtrl* m_textCtrl_SH002_intensy;
		wxStaticText* m_staticText45512213;
		wxTextCtrl* m_textCtrl_SH002_tension;
		wxStaticText* m_staticText46512213;
		wxTextCtrl* m_textCtrl_SH002_puissance;
		wxButton* m_button_24h_SH002;
		wxToggleButton* m_button_pc_SH002;
		wxToggleButton* m_button_ecrans_SH002;
		wxDatePickerCtrl* m_datePicker141;
		wxTimePickerCtrl* m_timePicker341;
		wxButton* m_button_applique_SH;
		wxToggleButton* m_button_activer_SH;
		wxStaticBitmap* m_bitmap6;
		wxStatusBar* m_statusBar;

		// Virtual event handlers, override them in your derived class
		virtual void OnCloseapp( wxCloseEvent& event ) { event.Skip(); }


	public:

		FramePrincipal( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("ENERGY MANAGEMENT"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1200,850 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~FramePrincipal();

};

