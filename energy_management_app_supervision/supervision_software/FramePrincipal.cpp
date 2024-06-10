///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "FramePrincipal.h"

///////////////////////////////////////////////////////////////////////////

FramePrincipal::FramePrincipal( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 400,200 ), wxSize( 1800,1500 ) );

	wxBoxSizer* bSizer247;
	bSizer247 = new wxBoxSizer( wxVERTICAL );

	m_notebook1 = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_panel_salle_1 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerPrincipal;
	bSizerPrincipal = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer328;
	bSizer328 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer407;
	bSizer407 = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sbSizer352;
	sbSizer352 = new wxStaticBoxSizer( new wxStaticBox( m_panel_salle_1, wxID_ANY, wxT("SECTEUR A") ), wxVERTICAL );

	wxGridBagSizer* gbSizer10112;
	gbSizer10112 = new wxGridBagSizer( 0, 0 );
	gbSizer10112->SetFlexibleDirection( wxBOTH );
	gbSizer10112->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxStaticBoxSizer* sbSizer2515;
	sbSizer2515 = new wxStaticBoxSizer( new wxStaticBox( sbSizer352->GetStaticBox(), wxID_ANY, wxT("module 1") ), wxVERTICAL );

	wxBoxSizer* bSizer13715;
	bSizer13715 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText4715 = new wxStaticText( sbSizer2515->GetStaticBox(), wxID_ANY, wxT("Intensité"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4715->Wrap( -1 );
	bSizer13715->Add( m_staticText4715, 1, wxALIGN_CENTER|wxALL|wxEXPAND, 5 );

	m_textCtrl_SA001_intensy = new wxTextCtrl( sbSizer2515->GetStaticBox(), id_textCtrl_SA001_intensy, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer13715->Add( m_textCtrl_SA001_intensy, 1, wxALL|wxEXPAND, 5 );


	sbSizer2515->Add( bSizer13715, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer131515;
	bSizer131515 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText45515 = new wxStaticText( sbSizer2515->GetStaticBox(), wxID_ANY, wxT("Tension"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText45515->Wrap( -1 );
	bSizer131515->Add( m_staticText45515, 1, wxALIGN_CENTER|wxALL, 5 );

	m_textCtrl_SA001_tension = new wxTextCtrl( sbSizer2515->GetStaticBox(), id_textCtrl_SA001_tension, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer131515->Add( m_textCtrl_SA001_tension, 1, wxALL, 5 );


	sbSizer2515->Add( bSizer131515, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer132515;
	bSizer132515 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText46515 = new wxStaticText( sbSizer2515->GetStaticBox(), wxID_ANY, wxT("Puissance"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText46515->Wrap( -1 );
	bSizer132515->Add( m_staticText46515, 1, wxALIGN_CENTER|wxALL, 5 );

	m_textCtrl_SA001_puissance = new wxTextCtrl( sbSizer2515->GetStaticBox(), id_textCtrl_SA001_puissance, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer132515->Add( m_textCtrl_SA001_puissance, 1, wxALL, 5 );


	sbSizer2515->Add( bSizer132515, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer329;
	bSizer329 = new wxBoxSizer( wxHORIZONTAL );

	m_button_24h_SA001 = new wxButton( sbSizer2515->GetStaticBox(), id_button_24h_SA001, wxT("24h"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer329->Add( m_button_24h_SA001, 0, wxALL, 5 );

	m_button_pc_SA001 = new wxToggleButton( sbSizer2515->GetStaticBox(), id_button_pc_SA001, wxT("Pc"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer329->Add( m_button_pc_SA001, 0, wxALL, 5 );

	m_button_ecrans_SA001 = new wxToggleButton( sbSizer2515->GetStaticBox(), id_button_ecrans_SA001, wxT("Écrans"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer329->Add( m_button_ecrans_SA001, 0, wxALL, 5 );


	sbSizer2515->Add( bSizer329, 1, wxEXPAND, 5 );


	gbSizer10112->Add( sbSizer2515, wxGBPosition( 0, 0 ), wxGBSpan( 1, 1 ), wxALL|wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer25122;
	sbSizer25122 = new wxStaticBoxSizer( new wxStaticBox( sbSizer352->GetStaticBox(), wxID_ANY, wxT("module 2") ), wxVERTICAL );

	wxBoxSizer* bSizer137122;
	bSizer137122 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText47122 = new wxStaticText( sbSizer25122->GetStaticBox(), wxID_ANY, wxT("Intensité"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText47122->Wrap( -1 );
	bSizer137122->Add( m_staticText47122, 1, wxALIGN_CENTER|wxALL|wxEXPAND, 5 );

	m_textCtrl_SA002_intensy = new wxTextCtrl( sbSizer25122->GetStaticBox(), id_textCtrl_SA002_intensy, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer137122->Add( m_textCtrl_SA002_intensy, 1, wxALL|wxEXPAND, 5 );


	sbSizer25122->Add( bSizer137122, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer1315122;
	bSizer1315122 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText455122 = new wxStaticText( sbSizer25122->GetStaticBox(), wxID_ANY, wxT("Tension"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText455122->Wrap( -1 );
	bSizer1315122->Add( m_staticText455122, 1, wxALIGN_CENTER|wxALL, 5 );

	m_textCtrl_SA002_tension = new wxTextCtrl( sbSizer25122->GetStaticBox(), id_textCtrl_SA002_tension, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer1315122->Add( m_textCtrl_SA002_tension, 1, wxALL, 5 );


	sbSizer25122->Add( bSizer1315122, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer1325122;
	bSizer1325122 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText465122 = new wxStaticText( sbSizer25122->GetStaticBox(), wxID_ANY, wxT("Puissance"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText465122->Wrap( -1 );
	bSizer1325122->Add( m_staticText465122, 1, wxALIGN_CENTER|wxALL, 5 );

	m_textCtrl_SA002_puissance = new wxTextCtrl( sbSizer25122->GetStaticBox(), id_textCtrl_SA002_puissance, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer1325122->Add( m_textCtrl_SA002_puissance, 1, wxALL, 5 );


	sbSizer25122->Add( bSizer1325122, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer3291;
	bSizer3291 = new wxBoxSizer( wxHORIZONTAL );

	m_button_24h_SA002 = new wxButton( sbSizer25122->GetStaticBox(), id_button_24h_SA002, wxT("24h"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3291->Add( m_button_24h_SA002, 0, wxALL, 5 );

	m_button_pc_SA002 = new wxToggleButton( sbSizer25122->GetStaticBox(), id_button_pc_SA002, wxT("Pc"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3291->Add( m_button_pc_SA002, 0, wxALL, 5 );

	m_button_ecrans_SA002 = new wxToggleButton( sbSizer25122->GetStaticBox(), id_button_ecrans_SA002, wxT("Écrans"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3291->Add( m_button_ecrans_SA002, 0, wxALL, 5 );


	sbSizer25122->Add( bSizer3291, 1, wxEXPAND, 5 );


	gbSizer10112->Add( sbSizer25122, wxGBPosition( 0, 1 ), wxGBSpan( 1, 1 ), wxALL|wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer251225;
	sbSizer251225 = new wxStaticBoxSizer( new wxStaticBox( sbSizer352->GetStaticBox(), wxID_ANY, wxT("Programmer") ), wxVERTICAL );

	m_datePicker1 = new wxDatePickerCtrl( sbSizer251225->GetStaticBox(), wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxDP_DEFAULT );
	sbSizer251225->Add( m_datePicker1, 0, wxALL, 5 );

	m_timePicker3 = new wxTimePickerCtrl( sbSizer251225->GetStaticBox(), wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxTP_DEFAULT );
	sbSizer251225->Add( m_timePicker3, 0, wxALL, 5 );

	m_button_applique_SA = new wxButton( sbSizer251225->GetStaticBox(), id_button_applique_SA, wxT("Appliqué"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer251225->Add( m_button_applique_SA, 0, wxALL|wxEXPAND, 5 );


	gbSizer10112->Add( sbSizer251225, wxGBPosition( 0, 2 ), wxGBSpan( 1, 1 ), wxALL|wxEXPAND, 5 );


	sbSizer352->Add( gbSizer10112, 1, wxALL|wxEXPAND, 5 );

	m_button_activer_SA = new wxToggleButton( sbSizer352->GetStaticBox(), id_button_activer_SA, wxT("Activer"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer352->Add( m_button_activer_SA, 0, wxALL|wxEXPAND, 5 );


	bSizer407->Add( sbSizer352, 1, wxALL|wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer3521;
	sbSizer3521 = new wxStaticBoxSizer( new wxStaticBox( m_panel_salle_1, wxID_ANY, wxT("SECTEUR B") ), wxVERTICAL );

	wxGridBagSizer* gbSizer101121;
	gbSizer101121 = new wxGridBagSizer( 0, 0 );
	gbSizer101121->SetFlexibleDirection( wxBOTH );
	gbSizer101121->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxStaticBoxSizer* sbSizer25152;
	sbSizer25152 = new wxStaticBoxSizer( new wxStaticBox( sbSizer3521->GetStaticBox(), wxID_ANY, wxT("module 1") ), wxVERTICAL );

	wxBoxSizer* bSizer137152;
	bSizer137152 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText47152 = new wxStaticText( sbSizer25152->GetStaticBox(), wxID_ANY, wxT("Intensité"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText47152->Wrap( -1 );
	bSizer137152->Add( m_staticText47152, 1, wxALIGN_CENTER|wxALL|wxEXPAND, 5 );

	m_textCtrl_SB001_intensy = new wxTextCtrl( sbSizer25152->GetStaticBox(), id_textCtrl_SB001_intensy, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer137152->Add( m_textCtrl_SB001_intensy, 1, wxALL|wxEXPAND, 5 );


	sbSizer25152->Add( bSizer137152, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer1315152;
	bSizer1315152 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText455152 = new wxStaticText( sbSizer25152->GetStaticBox(), wxID_ANY, wxT("Tension"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText455152->Wrap( -1 );
	bSizer1315152->Add( m_staticText455152, 1, wxALIGN_CENTER|wxALL, 5 );

	m_textCtrl_SB001_tension = new wxTextCtrl( sbSizer25152->GetStaticBox(), id_textCtrl_SB001_tension, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer1315152->Add( m_textCtrl_SB001_tension, 1, wxALL|wxEXPAND, 5 );


	sbSizer25152->Add( bSizer1315152, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer1325152;
	bSizer1325152 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText465152 = new wxStaticText( sbSizer25152->GetStaticBox(), wxID_ANY, wxT("Puissance"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText465152->Wrap( -1 );
	bSizer1325152->Add( m_staticText465152, 1, wxALIGN_CENTER|wxALL, 5 );

	m_textCtrl_SB001_puissance = new wxTextCtrl( sbSizer25152->GetStaticBox(), id_textCtrl_SB001_puissance, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer1325152->Add( m_textCtrl_SB001_puissance, 1, wxALL, 5 );


	sbSizer25152->Add( bSizer1325152, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer3293;
	bSizer3293 = new wxBoxSizer( wxHORIZONTAL );

	m_button_24h_SB001 = new wxButton( sbSizer25152->GetStaticBox(), id_button_24h_SB001, wxT("24h"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3293->Add( m_button_24h_SB001, 0, wxALL, 5 );

	m_button_pc_SB001 = new wxToggleButton( sbSizer25152->GetStaticBox(), id_button_pc_SB001, wxT("Pc"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3293->Add( m_button_pc_SB001, 0, wxALL, 5 );

	m_button_ecrans_SB001 = new wxToggleButton( sbSizer25152->GetStaticBox(), id_button_ecrans_SB001, wxT("Écrans"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3293->Add( m_button_ecrans_SB001, 0, wxALL, 5 );


	sbSizer25152->Add( bSizer3293, 1, wxEXPAND, 5 );


	gbSizer101121->Add( sbSizer25152, wxGBPosition( 0, 0 ), wxGBSpan( 1, 1 ), wxALL|wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer251221;
	sbSizer251221 = new wxStaticBoxSizer( new wxStaticBox( sbSizer3521->GetStaticBox(), wxID_ANY, wxT("module 2") ), wxVERTICAL );

	wxBoxSizer* bSizer1371221;
	bSizer1371221 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText471221 = new wxStaticText( sbSizer251221->GetStaticBox(), wxID_ANY, wxT("Intensité"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText471221->Wrap( -1 );
	bSizer1371221->Add( m_staticText471221, 1, wxALIGN_CENTER|wxALL|wxEXPAND, 5 );

	m_textCtrl_SB002_intensy = new wxTextCtrl( sbSizer251221->GetStaticBox(), id_textCtrl_SB002_intensy, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer1371221->Add( m_textCtrl_SB002_intensy, 1, wxALL|wxEXPAND, 5 );


	sbSizer251221->Add( bSizer1371221, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer13151221;
	bSizer13151221 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText4551221 = new wxStaticText( sbSizer251221->GetStaticBox(), wxID_ANY, wxT("Tension"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4551221->Wrap( -1 );
	bSizer13151221->Add( m_staticText4551221, 1, wxALIGN_CENTER|wxALL, 5 );

	m_textCtrl_SB002_tension = new wxTextCtrl( sbSizer251221->GetStaticBox(), id_textCtrl_SB002_tension, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer13151221->Add( m_textCtrl_SB002_tension, 1, wxALL, 5 );


	sbSizer251221->Add( bSizer13151221, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer13251221;
	bSizer13251221 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText4651221 = new wxStaticText( sbSizer251221->GetStaticBox(), wxID_ANY, wxT("Puissance"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4651221->Wrap( -1 );
	bSizer13251221->Add( m_staticText4651221, 1, wxALIGN_CENTER|wxALL, 5 );

	m_textCtrl_SB002_puissance = new wxTextCtrl( sbSizer251221->GetStaticBox(), id_textCtrl_SB002_puissance, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer13251221->Add( m_textCtrl_SB002_puissance, 1, wxALL, 5 );


	sbSizer251221->Add( bSizer13251221, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer32911;
	bSizer32911 = new wxBoxSizer( wxHORIZONTAL );

	m_button_24h_SB002 = new wxButton( sbSizer251221->GetStaticBox(), id_button_24h_SB002, wxT("24h"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer32911->Add( m_button_24h_SB002, 0, wxALL, 5 );

	m_button_pc_SB002 = new wxToggleButton( sbSizer251221->GetStaticBox(), id_button_pc_SB002, wxT("Pc"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer32911->Add( m_button_pc_SB002, 0, wxALL, 5 );

	m_button_ecrans_SB002 = new wxToggleButton( sbSizer251221->GetStaticBox(), id_button_ecrans_SB002, wxT("Écrans"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer32911->Add( m_button_ecrans_SB002, 0, wxALL, 5 );


	sbSizer251221->Add( bSizer32911, 1, wxEXPAND, 5 );


	gbSizer101121->Add( sbSizer251221, wxGBPosition( 0, 1 ), wxGBSpan( 1, 1 ), wxALL|wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer2512251;
	sbSizer2512251 = new wxStaticBoxSizer( new wxStaticBox( sbSizer3521->GetStaticBox(), wxID_ANY, wxT("Programmer") ), wxVERTICAL );

	m_datePicker11 = new wxDatePickerCtrl( sbSizer2512251->GetStaticBox(), wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxDP_DEFAULT );
	sbSizer2512251->Add( m_datePicker11, 0, wxALL, 5 );

	m_timePicker31 = new wxTimePickerCtrl( sbSizer2512251->GetStaticBox(), wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxTP_DEFAULT );
	sbSizer2512251->Add( m_timePicker31, 0, wxALL, 5 );

	m_button_applique_SB = new wxButton( sbSizer2512251->GetStaticBox(), id_button_applique_SB, wxT("Appliqué"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer2512251->Add( m_button_applique_SB, 0, wxALL|wxEXPAND, 5 );


	gbSizer101121->Add( sbSizer2512251, wxGBPosition( 0, 2 ), wxGBSpan( 1, 1 ), wxEXPAND, 5 );


	sbSizer3521->Add( gbSizer101121, 1, wxALL|wxEXPAND, 5 );

	m_button_activer_SB = new wxToggleButton( sbSizer3521->GetStaticBox(), id_button_activer_SB, wxT("Aciver"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer3521->Add( m_button_activer_SB, 0, wxALL|wxEXPAND, 5 );


	bSizer407->Add( sbSizer3521, 0, wxALL|wxEXPAND, 5 );


	bSizer328->Add( bSizer407, 1, wxEXPAND, 5 );


	bSizerPrincipal->Add( bSizer328, 0, wxALL, 5 );

	wxBoxSizer* bSizer325;
	bSizer325 = new wxBoxSizer( wxHORIZONTAL );

	m_bitmap7 = new wxStaticBitmap( m_panel_salle_1, wxID_ANY, wxBitmap( wxT("Design.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer325->Add( m_bitmap7, 0, wxALL, 5 );


	bSizerPrincipal->Add( bSizer325, 1, wxALL|wxEXPAND, 5 );


	m_panel_salle_1->SetSizer( bSizerPrincipal );
	m_panel_salle_1->Layout();
	bSizerPrincipal->Fit( m_panel_salle_1 );
	m_notebook1->AddPage( m_panel_salle_1, wxT("Salle1"), true );
	m_panel_salle_2 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerPrincipal1;
	bSizerPrincipal1 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer3281;
	bSizer3281 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer4071;
	bSizer4071 = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sbSizer3522;
	sbSizer3522 = new wxStaticBoxSizer( new wxStaticBox( m_panel_salle_2, wxID_ANY, wxT("SECTEUR C") ), wxVERTICAL );

	wxGridBagSizer* gbSizer101122;
	gbSizer101122 = new wxGridBagSizer( 0, 0 );
	gbSizer101122->SetFlexibleDirection( wxBOTH );
	gbSizer101122->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxStaticBoxSizer* sbSizer25151;
	sbSizer25151 = new wxStaticBoxSizer( new wxStaticBox( sbSizer3522->GetStaticBox(), wxID_ANY, wxT("module 1") ), wxVERTICAL );

	wxBoxSizer* bSizer137151;
	bSizer137151 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText47151 = new wxStaticText( sbSizer25151->GetStaticBox(), wxID_ANY, wxT("Intensité"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText47151->Wrap( -1 );
	bSizer137151->Add( m_staticText47151, 1, wxALIGN_CENTER|wxALL|wxEXPAND, 5 );

	m_textCtrl_SC001_intensy = new wxTextCtrl( sbSizer25151->GetStaticBox(), id_textCtrl_SC001_intensy, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer137151->Add( m_textCtrl_SC001_intensy, 1, wxALL|wxEXPAND, 5 );


	sbSizer25151->Add( bSizer137151, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer1315151;
	bSizer1315151 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText455151 = new wxStaticText( sbSizer25151->GetStaticBox(), wxID_ANY, wxT("Tension"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText455151->Wrap( -1 );
	bSizer1315151->Add( m_staticText455151, 1, wxALIGN_CENTER|wxALL, 5 );

	m_textCtrl_SC001_tension = new wxTextCtrl( sbSizer25151->GetStaticBox(), id_textCtrl_SC001_tension, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer1315151->Add( m_textCtrl_SC001_tension, 1, wxALL, 5 );


	sbSizer25151->Add( bSizer1315151, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer1325151;
	bSizer1325151 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText465151 = new wxStaticText( sbSizer25151->GetStaticBox(), wxID_ANY, wxT("Puissance"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText465151->Wrap( -1 );
	bSizer1325151->Add( m_staticText465151, 1, wxALIGN_CENTER|wxALL, 5 );

	m_textCtrl_SC001_puissance = new wxTextCtrl( sbSizer25151->GetStaticBox(), id_textCtrl_SC001_puissance, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer1325151->Add( m_textCtrl_SC001_puissance, 1, wxALL, 5 );


	sbSizer25151->Add( bSizer1325151, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer3292;
	bSizer3292 = new wxBoxSizer( wxHORIZONTAL );

	m_button_24h_SC001 = new wxButton( sbSizer25151->GetStaticBox(), id_button_24h_SC001, wxT("24h"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3292->Add( m_button_24h_SC001, 0, wxALL, 5 );

	m_button_pc_SC001 = new wxToggleButton( sbSizer25151->GetStaticBox(), id_button_pc_SC001, wxT("Pc"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3292->Add( m_button_pc_SC001, 0, wxALL, 5 );

	m_button_ecrans_SC001 = new wxToggleButton( sbSizer25151->GetStaticBox(), id_button_ecrans_SC001, wxT("Écrans"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3292->Add( m_button_ecrans_SC001, 0, wxALL, 5 );


	sbSizer25151->Add( bSizer3292, 1, wxEXPAND, 5 );


	gbSizer101122->Add( sbSizer25151, wxGBPosition( 0, 0 ), wxGBSpan( 1, 1 ), wxALL|wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer251222;
	sbSizer251222 = new wxStaticBoxSizer( new wxStaticBox( sbSizer3522->GetStaticBox(), wxID_ANY, wxT("module 2") ), wxVERTICAL );

	wxBoxSizer* bSizer1371222;
	bSizer1371222 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText471222 = new wxStaticText( sbSizer251222->GetStaticBox(), wxID_ANY, wxT("Intensité"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText471222->Wrap( -1 );
	bSizer1371222->Add( m_staticText471222, 1, wxALIGN_CENTER|wxALL|wxEXPAND, 5 );

	m_textCtrl_SC002_intensy = new wxTextCtrl( sbSizer251222->GetStaticBox(), id_textCtrl_SC002_intensy, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer1371222->Add( m_textCtrl_SC002_intensy, 1, wxALL|wxEXPAND, 5 );


	sbSizer251222->Add( bSizer1371222, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer13151222;
	bSizer13151222 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText4551222 = new wxStaticText( sbSizer251222->GetStaticBox(), wxID_ANY, wxT("Tension"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4551222->Wrap( -1 );
	bSizer13151222->Add( m_staticText4551222, 1, wxALIGN_CENTER|wxALL, 5 );

	m_textCtrl_SC002_tension = new wxTextCtrl( sbSizer251222->GetStaticBox(), id_textCtrl_SC002_tension, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer13151222->Add( m_textCtrl_SC002_tension, 1, wxALL, 5 );


	sbSizer251222->Add( bSizer13151222, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer13251222;
	bSizer13251222 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText4651222 = new wxStaticText( sbSizer251222->GetStaticBox(), wxID_ANY, wxT("Puissance"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4651222->Wrap( -1 );
	bSizer13251222->Add( m_staticText4651222, 1, wxALIGN_CENTER|wxALL, 5 );

	m_textCtrl_SC002_puissance = new wxTextCtrl( sbSizer251222->GetStaticBox(), id_textCtrl_SC002_puissance, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer13251222->Add( m_textCtrl_SC002_puissance, 1, wxALL, 5 );


	sbSizer251222->Add( bSizer13251222, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer32912;
	bSizer32912 = new wxBoxSizer( wxHORIZONTAL );

	m_button_24h_SC002 = new wxButton( sbSizer251222->GetStaticBox(), id_button_24h_SC002, wxT("24h"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer32912->Add( m_button_24h_SC002, 0, wxALL, 5 );

	m_button_pc_SC002 = new wxToggleButton( sbSizer251222->GetStaticBox(), id_button_pc_SC002, wxT("Pc"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer32912->Add( m_button_pc_SC002, 0, wxALL, 5 );

	m_button_ecrans_SC002 = new wxToggleButton( sbSizer251222->GetStaticBox(), id_button_ecrans_SC002, wxT("Écrans"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer32912->Add( m_button_ecrans_SC002, 0, wxALL, 5 );


	sbSizer251222->Add( bSizer32912, 1, wxEXPAND, 5 );


	gbSizer101122->Add( sbSizer251222, wxGBPosition( 0, 1 ), wxGBSpan( 1, 1 ), wxALL|wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer2512252;
	sbSizer2512252 = new wxStaticBoxSizer( new wxStaticBox( sbSizer3522->GetStaticBox(), wxID_ANY, wxT("Programmer") ), wxVERTICAL );

	m_datePicker12 = new wxDatePickerCtrl( sbSizer2512252->GetStaticBox(), wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxDP_DEFAULT );
	sbSizer2512252->Add( m_datePicker12, 0, wxALL, 5 );

	m_timePicker32 = new wxTimePickerCtrl( sbSizer2512252->GetStaticBox(), wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxTP_DEFAULT );
	sbSizer2512252->Add( m_timePicker32, 0, wxALL, 5 );

	m_button_applique_SC = new wxButton( sbSizer2512252->GetStaticBox(), id_button_applique_SC, wxT("Appliqué"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer2512252->Add( m_button_applique_SC, 0, wxALL|wxEXPAND, 5 );


	gbSizer101122->Add( sbSizer2512252, wxGBPosition( 0, 2 ), wxGBSpan( 1, 1 ), wxALL|wxEXPAND, 5 );


	sbSizer3522->Add( gbSizer101122, 1, wxALL|wxEXPAND, 5 );

	m_button_activer_SC = new wxToggleButton( sbSizer3522->GetStaticBox(), id_button_activer_SC, wxT("Activer"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer3522->Add( m_button_activer_SC, 0, wxALL|wxEXPAND, 5 );


	bSizer4071->Add( sbSizer3522, 1, wxALL|wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer35211;
	sbSizer35211 = new wxStaticBoxSizer( new wxStaticBox( m_panel_salle_2, wxID_ANY, wxT("SECTEUR D") ), wxVERTICAL );

	wxGridBagSizer* gbSizer1011211;
	gbSizer1011211 = new wxGridBagSizer( 0, 0 );
	gbSizer1011211->SetFlexibleDirection( wxBOTH );
	gbSizer1011211->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxStaticBoxSizer* sbSizer251521;
	sbSizer251521 = new wxStaticBoxSizer( new wxStaticBox( sbSizer35211->GetStaticBox(), wxID_ANY, wxT("module 1") ), wxVERTICAL );

	wxBoxSizer* bSizer1371521;
	bSizer1371521 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText471521 = new wxStaticText( sbSizer251521->GetStaticBox(), wxID_ANY, wxT("Intensité"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText471521->Wrap( -1 );
	bSizer1371521->Add( m_staticText471521, 1, wxALIGN_CENTER|wxALL|wxEXPAND, 5 );

	m_textCtrl_SD001_intensy = new wxTextCtrl( sbSizer251521->GetStaticBox(), id_textCtrl_SD001_intensy, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer1371521->Add( m_textCtrl_SD001_intensy, 1, wxALL|wxEXPAND, 5 );


	sbSizer251521->Add( bSizer1371521, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer13151521;
	bSizer13151521 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText4551521 = new wxStaticText( sbSizer251521->GetStaticBox(), wxID_ANY, wxT("Tension"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4551521->Wrap( -1 );
	bSizer13151521->Add( m_staticText4551521, 1, wxALIGN_CENTER|wxALL, 5 );

	m_textCtrl_SD001_tension = new wxTextCtrl( sbSizer251521->GetStaticBox(), id_textCtrl_SD001_tension, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer13151521->Add( m_textCtrl_SD001_tension, 1, wxALL|wxEXPAND, 5 );


	sbSizer251521->Add( bSizer13151521, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer13251521;
	bSizer13251521 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText4651521 = new wxStaticText( sbSizer251521->GetStaticBox(), wxID_ANY, wxT("Puissance"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4651521->Wrap( -1 );
	bSizer13251521->Add( m_staticText4651521, 1, wxALIGN_CENTER|wxALL, 5 );

	m_textCtrl_SD001_puissance = new wxTextCtrl( sbSizer251521->GetStaticBox(), id_textCtrl_SD001_puissance, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer13251521->Add( m_textCtrl_SD001_puissance, 1, wxALL, 5 );


	sbSizer251521->Add( bSizer13251521, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer32931;
	bSizer32931 = new wxBoxSizer( wxHORIZONTAL );

	m_button_24h_SD001 = new wxButton( sbSizer251521->GetStaticBox(), id_button_24h_SD001, wxT("24h"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer32931->Add( m_button_24h_SD001, 0, wxALL, 5 );

	m_button_pc_SD001 = new wxToggleButton( sbSizer251521->GetStaticBox(), id_button_pc_SD001, wxT("Pc"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer32931->Add( m_button_pc_SD001, 0, wxALL, 5 );

	m_button_ecrans_SD001 = new wxToggleButton( sbSizer251521->GetStaticBox(), id_button_ecrans_SD001, wxT("Écrans"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer32931->Add( m_button_ecrans_SD001, 0, wxALL, 5 );


	sbSizer251521->Add( bSizer32931, 1, wxEXPAND, 5 );


	gbSizer1011211->Add( sbSizer251521, wxGBPosition( 0, 0 ), wxGBSpan( 1, 1 ), wxALL|wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer2512211;
	sbSizer2512211 = new wxStaticBoxSizer( new wxStaticBox( sbSizer35211->GetStaticBox(), wxID_ANY, wxT("module 2") ), wxVERTICAL );

	wxBoxSizer* bSizer13712211;
	bSizer13712211 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText4712211 = new wxStaticText( sbSizer2512211->GetStaticBox(), wxID_ANY, wxT("Intensité"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4712211->Wrap( -1 );
	bSizer13712211->Add( m_staticText4712211, 1, wxALIGN_CENTER|wxALL|wxEXPAND, 5 );

	m_textCtrl_SD002_intensy = new wxTextCtrl( sbSizer2512211->GetStaticBox(), id_textCtrl_SD002_intensy, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer13712211->Add( m_textCtrl_SD002_intensy, 1, wxALL|wxEXPAND, 5 );


	sbSizer2512211->Add( bSizer13712211, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer131512211;
	bSizer131512211 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText45512211 = new wxStaticText( sbSizer2512211->GetStaticBox(), wxID_ANY, wxT("Tension"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText45512211->Wrap( -1 );
	bSizer131512211->Add( m_staticText45512211, 1, wxALIGN_CENTER|wxALL, 5 );

	m_textCtrl_SD002_tension = new wxTextCtrl( sbSizer2512211->GetStaticBox(), id_textCtrl_SD002_tension, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer131512211->Add( m_textCtrl_SD002_tension, 1, wxALL, 5 );


	sbSizer2512211->Add( bSizer131512211, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer132512211;
	bSizer132512211 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText46512211 = new wxStaticText( sbSizer2512211->GetStaticBox(), wxID_ANY, wxT("Puissance"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText46512211->Wrap( -1 );
	bSizer132512211->Add( m_staticText46512211, 1, wxALIGN_CENTER|wxALL, 5 );

	m_textCtrl_SD002_puissance = new wxTextCtrl( sbSizer2512211->GetStaticBox(), id_textCtrl_SD002_puissance, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer132512211->Add( m_textCtrl_SD002_puissance, 1, wxALL, 5 );


	sbSizer2512211->Add( bSizer132512211, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer329111;
	bSizer329111 = new wxBoxSizer( wxHORIZONTAL );

	m_button_24h_SD002 = new wxButton( sbSizer2512211->GetStaticBox(), id_button_24h_SD002, wxT("24h"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer329111->Add( m_button_24h_SD002, 0, wxALL, 5 );

	m_button_pc_SD002 = new wxToggleButton( sbSizer2512211->GetStaticBox(), id_button_pc_SD002, wxT("Pc"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer329111->Add( m_button_pc_SD002, 0, wxALL, 5 );

	m_button_ecrans_SD002 = new wxToggleButton( sbSizer2512211->GetStaticBox(), id_button_ecrans_SD002, wxT("Écrans"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer329111->Add( m_button_ecrans_SD002, 0, wxALL, 5 );


	sbSizer2512211->Add( bSizer329111, 1, wxEXPAND, 5 );


	gbSizer1011211->Add( sbSizer2512211, wxGBPosition( 0, 1 ), wxGBSpan( 1, 1 ), wxALL|wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer2512253;
	sbSizer2512253 = new wxStaticBoxSizer( new wxStaticBox( sbSizer35211->GetStaticBox(), wxID_ANY, wxT("Programmer") ), wxVERTICAL );

	m_datePicker13 = new wxDatePickerCtrl( sbSizer2512253->GetStaticBox(), wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxDP_DEFAULT );
	sbSizer2512253->Add( m_datePicker13, 0, wxALL, 5 );

	m_timePicker33 = new wxTimePickerCtrl( sbSizer2512253->GetStaticBox(), wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxTP_DEFAULT );
	sbSizer2512253->Add( m_timePicker33, 0, wxALL, 5 );

	im_button_applique_SD = new wxButton( sbSizer2512253->GetStaticBox(), id_button_applique_SD, wxT("Appliqué"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer2512253->Add( im_button_applique_SD, 0, wxALL|wxEXPAND, 5 );


	gbSizer1011211->Add( sbSizer2512253, wxGBPosition( 0, 2 ), wxGBSpan( 1, 1 ), wxEXPAND, 5 );


	sbSizer35211->Add( gbSizer1011211, 1, wxALL|wxEXPAND, 5 );

	m_button_activer_SD = new wxToggleButton( sbSizer35211->GetStaticBox(), id_button_activer_SD, wxT("Activer"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer35211->Add( m_button_activer_SD, 0, wxALL|wxEXPAND, 5 );


	bSizer4071->Add( sbSizer35211, 1, wxALL|wxEXPAND, 5 );


	bSizer3281->Add( bSizer4071, 1, wxEXPAND, 5 );


	bSizerPrincipal1->Add( bSizer3281, 0, wxALL, 5 );

	wxBoxSizer* bSizer3251;
	bSizer3251 = new wxBoxSizer( wxHORIZONTAL );

	m_bitmap331 = new wxStaticBitmap( m_panel_salle_2, wxID_ANY, wxBitmap( wxT("carte.jpg"), wxBITMAP_TYPE_RESOURCE ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3251->Add( m_bitmap331, 0, wxALL, 5 );


	bSizerPrincipal1->Add( bSizer3251, 1, wxALL|wxEXPAND, 5 );


	m_panel_salle_2->SetSizer( bSizerPrincipal1 );
	m_panel_salle_2->Layout();
	bSizerPrincipal1->Fit( m_panel_salle_2 );
	m_notebook1->AddPage( m_panel_salle_2, wxT("Salle 2"), false );
	m_panel_salle_3 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerPrincipal2;
	bSizerPrincipal2 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer3282;
	bSizer3282 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer4072;
	bSizer4072 = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sbSizer3523;
	sbSizer3523 = new wxStaticBoxSizer( new wxStaticBox( m_panel_salle_3, wxID_ANY, wxT("SECTEUR E") ), wxVERTICAL );

	wxGridBagSizer* gbSizer101123;
	gbSizer101123 = new wxGridBagSizer( 0, 0 );
	gbSizer101123->SetFlexibleDirection( wxBOTH );
	gbSizer101123->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxStaticBoxSizer* sbSizer25153;
	sbSizer25153 = new wxStaticBoxSizer( new wxStaticBox( sbSizer3523->GetStaticBox(), wxID_ANY, wxT("module 1") ), wxVERTICAL );

	wxBoxSizer* bSizer137153;
	bSizer137153 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText47153 = new wxStaticText( sbSizer25153->GetStaticBox(), wxID_ANY, wxT("Intensité"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText47153->Wrap( -1 );
	bSizer137153->Add( m_staticText47153, 1, wxALIGN_CENTER|wxALL|wxEXPAND, 5 );

	m_textCtrl_SE001_intensy = new wxTextCtrl( sbSizer25153->GetStaticBox(), id_textCtrl_SE001_intensy, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer137153->Add( m_textCtrl_SE001_intensy, 1, wxALL|wxEXPAND, 5 );


	sbSizer25153->Add( bSizer137153, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer1315153;
	bSizer1315153 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText455153 = new wxStaticText( sbSizer25153->GetStaticBox(), wxID_ANY, wxT("Tension"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText455153->Wrap( -1 );
	bSizer1315153->Add( m_staticText455153, 1, wxALIGN_CENTER|wxALL, 5 );

	m_textCtrl_SE001_tension = new wxTextCtrl( sbSizer25153->GetStaticBox(), id_textCtrl_SE001_tension, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer1315153->Add( m_textCtrl_SE001_tension, 1, wxALL, 5 );


	sbSizer25153->Add( bSizer1315153, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer1325153;
	bSizer1325153 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText465153 = new wxStaticText( sbSizer25153->GetStaticBox(), wxID_ANY, wxT("Puissance"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText465153->Wrap( -1 );
	bSizer1325153->Add( m_staticText465153, 1, wxALIGN_CENTER|wxALL, 5 );

	m_textCtrl_SE001_puissance = new wxTextCtrl( sbSizer25153->GetStaticBox(), id_textCtrl_SE001_puissance, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer1325153->Add( m_textCtrl_SE001_puissance, 1, wxALL, 5 );


	sbSizer25153->Add( bSizer1325153, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer3294;
	bSizer3294 = new wxBoxSizer( wxHORIZONTAL );

	m_button_24h_SE001 = new wxButton( sbSizer25153->GetStaticBox(), id_button_24h_SE001, wxT("24h"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3294->Add( m_button_24h_SE001, 0, wxALL, 5 );

	m_button_pc_SE001 = new wxToggleButton( sbSizer25153->GetStaticBox(), id_button_pc_SE001, wxT("Pc"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3294->Add( m_button_pc_SE001, 0, wxALL, 5 );

	m_button_ecrans_SE001 = new wxToggleButton( sbSizer25153->GetStaticBox(), id_button_ecrans_SE001, wxT("Écrans"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3294->Add( m_button_ecrans_SE001, 0, wxALL, 5 );


	sbSizer25153->Add( bSizer3294, 1, wxEXPAND, 5 );


	gbSizer101123->Add( sbSizer25153, wxGBPosition( 0, 0 ), wxGBSpan( 1, 1 ), wxALL|wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer251223;
	sbSizer251223 = new wxStaticBoxSizer( new wxStaticBox( sbSizer3523->GetStaticBox(), wxID_ANY, wxT("module 2") ), wxVERTICAL );

	wxBoxSizer* bSizer1371223;
	bSizer1371223 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText471223 = new wxStaticText( sbSizer251223->GetStaticBox(), wxID_ANY, wxT("Intensité"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText471223->Wrap( -1 );
	bSizer1371223->Add( m_staticText471223, 1, wxALIGN_CENTER|wxALL|wxEXPAND, 5 );

	m_textCtrl_SE002_intensy = new wxTextCtrl( sbSizer251223->GetStaticBox(), id_textCtrl_SE002_intensy, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer1371223->Add( m_textCtrl_SE002_intensy, 1, wxALL|wxEXPAND, 5 );


	sbSizer251223->Add( bSizer1371223, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer13151223;
	bSizer13151223 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText4551223 = new wxStaticText( sbSizer251223->GetStaticBox(), wxID_ANY, wxT("Tension"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4551223->Wrap( -1 );
	bSizer13151223->Add( m_staticText4551223, 1, wxALIGN_CENTER|wxALL, 5 );

	m_textCtrl_SE002_tension = new wxTextCtrl( sbSizer251223->GetStaticBox(), id_textCtrl_SE002_tension, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer13151223->Add( m_textCtrl_SE002_tension, 1, wxALL, 5 );


	sbSizer251223->Add( bSizer13151223, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer13251223;
	bSizer13251223 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText4651223 = new wxStaticText( sbSizer251223->GetStaticBox(), wxID_ANY, wxT("Puissance"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4651223->Wrap( -1 );
	bSizer13251223->Add( m_staticText4651223, 1, wxALIGN_CENTER|wxALL, 5 );

	m_textCtrl_SE002_puissance = new wxTextCtrl( sbSizer251223->GetStaticBox(), id_textCtrl_SE002_puissance, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer13251223->Add( m_textCtrl_SE002_puissance, 1, wxALL, 5 );


	sbSizer251223->Add( bSizer13251223, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer32913;
	bSizer32913 = new wxBoxSizer( wxHORIZONTAL );

	m_button_24h_SE002 = new wxButton( sbSizer251223->GetStaticBox(), id_button_24h_SE002, wxT("24h"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer32913->Add( m_button_24h_SE002, 0, wxALL, 5 );

	m_button_pc_SE002 = new wxToggleButton( sbSizer251223->GetStaticBox(), id_button_pc_SE002, wxT("Pc"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer32913->Add( m_button_pc_SE002, 0, wxALL, 5 );

	m_button_ecrans_SE002 = new wxToggleButton( sbSizer251223->GetStaticBox(), id_button_ecrans_SE002, wxT("Écrans"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer32913->Add( m_button_ecrans_SE002, 0, wxALL, 5 );


	sbSizer251223->Add( bSizer32913, 1, wxEXPAND, 5 );


	gbSizer101123->Add( sbSizer251223, wxGBPosition( 0, 1 ), wxGBSpan( 1, 1 ), wxALL|wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer25122521;
	sbSizer25122521 = new wxStaticBoxSizer( new wxStaticBox( sbSizer3523->GetStaticBox(), wxID_ANY, wxT("Programmer") ), wxVERTICAL );

	m_datePicker121 = new wxDatePickerCtrl( sbSizer25122521->GetStaticBox(), wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxDP_DEFAULT );
	sbSizer25122521->Add( m_datePicker121, 0, wxALL, 5 );

	m_timePicker321 = new wxTimePickerCtrl( sbSizer25122521->GetStaticBox(), wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxTP_DEFAULT );
	sbSizer25122521->Add( m_timePicker321, 0, wxALL, 5 );

	m_button_applique_SE = new wxButton( sbSizer25122521->GetStaticBox(), id_button_applique_SE, wxT("Appliqué"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer25122521->Add( m_button_applique_SE, 0, wxALL|wxEXPAND, 5 );


	gbSizer101123->Add( sbSizer25122521, wxGBPosition( 0, 2 ), wxGBSpan( 1, 1 ), wxALL|wxEXPAND, 5 );


	sbSizer3523->Add( gbSizer101123, 1, wxALL|wxEXPAND, 5 );

	m_button_activer_SE = new wxToggleButton( sbSizer3523->GetStaticBox(), id_button_activer_SE, wxT("Activer"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer3523->Add( m_button_activer_SE, 0, wxALL|wxEXPAND, 5 );


	bSizer4072->Add( sbSizer3523, 1, wxALL|wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer35212;
	sbSizer35212 = new wxStaticBoxSizer( new wxStaticBox( m_panel_salle_3, wxID_ANY, wxT("SECTEUR F") ), wxVERTICAL );

	wxGridBagSizer* gbSizer1011212;
	gbSizer1011212 = new wxGridBagSizer( 0, 0 );
	gbSizer1011212->SetFlexibleDirection( wxBOTH );
	gbSizer1011212->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxStaticBoxSizer* sbSizer251522;
	sbSizer251522 = new wxStaticBoxSizer( new wxStaticBox( sbSizer35212->GetStaticBox(), wxID_ANY, wxT("module 1") ), wxVERTICAL );

	wxBoxSizer* bSizer1371522;
	bSizer1371522 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText471522 = new wxStaticText( sbSizer251522->GetStaticBox(), wxID_ANY, wxT("Intensité"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText471522->Wrap( -1 );
	bSizer1371522->Add( m_staticText471522, 1, wxALIGN_CENTER|wxALL|wxEXPAND, 5 );

	m_textCtrl_SF001_intensy = new wxTextCtrl( sbSizer251522->GetStaticBox(), id_textCtrl_SF001_intensy, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer1371522->Add( m_textCtrl_SF001_intensy, 1, wxALL|wxEXPAND, 5 );


	sbSizer251522->Add( bSizer1371522, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer13151522;
	bSizer13151522 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText4551522 = new wxStaticText( sbSizer251522->GetStaticBox(), wxID_ANY, wxT("Tension"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4551522->Wrap( -1 );
	bSizer13151522->Add( m_staticText4551522, 1, wxALIGN_CENTER|wxALL, 5 );

	m_textCtrl_SF001_tension = new wxTextCtrl( sbSizer251522->GetStaticBox(), id_textCtrl_SF001_tension, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer13151522->Add( m_textCtrl_SF001_tension, 1, wxALL|wxEXPAND, 5 );


	sbSizer251522->Add( bSizer13151522, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer13251522;
	bSizer13251522 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText4651522 = new wxStaticText( sbSizer251522->GetStaticBox(), wxID_ANY, wxT("Puissance"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4651522->Wrap( -1 );
	bSizer13251522->Add( m_staticText4651522, 1, wxALIGN_CENTER|wxALL, 5 );

	m_textCtrl_SF001_puissance = new wxTextCtrl( sbSizer251522->GetStaticBox(), id_textCtrl_SF001_puissance, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer13251522->Add( m_textCtrl_SF001_puissance, 1, wxALL, 5 );


	sbSizer251522->Add( bSizer13251522, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer32932;
	bSizer32932 = new wxBoxSizer( wxHORIZONTAL );

	m_button_24h_SF001 = new wxButton( sbSizer251522->GetStaticBox(), id_button_24h_SF001, wxT("24h"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer32932->Add( m_button_24h_SF001, 0, wxALL, 5 );

	m_button_pc_SF001 = new wxToggleButton( sbSizer251522->GetStaticBox(), id_button_pc_SF001, wxT("Pc"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer32932->Add( m_button_pc_SF001, 0, wxALL, 5 );

	m_button_ecrans_SF001 = new wxToggleButton( sbSizer251522->GetStaticBox(), id_button_ecrans_SF001, wxT("Écrans"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer32932->Add( m_button_ecrans_SF001, 0, wxALL, 5 );


	sbSizer251522->Add( bSizer32932, 1, wxEXPAND, 5 );


	gbSizer1011212->Add( sbSizer251522, wxGBPosition( 0, 0 ), wxGBSpan( 1, 1 ), wxALL|wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer2512212;
	sbSizer2512212 = new wxStaticBoxSizer( new wxStaticBox( sbSizer35212->GetStaticBox(), wxID_ANY, wxT("module 2") ), wxVERTICAL );

	wxBoxSizer* bSizer13712212;
	bSizer13712212 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText4712212 = new wxStaticText( sbSizer2512212->GetStaticBox(), wxID_ANY, wxT("Intensité"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4712212->Wrap( -1 );
	bSizer13712212->Add( m_staticText4712212, 1, wxALIGN_CENTER|wxALL|wxEXPAND, 5 );

	m_textCtrl_SF002_intensy = new wxTextCtrl( sbSizer2512212->GetStaticBox(), id_textCtrl_SF002_intensy, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer13712212->Add( m_textCtrl_SF002_intensy, 1, wxALL|wxEXPAND, 5 );


	sbSizer2512212->Add( bSizer13712212, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer131512212;
	bSizer131512212 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText45512212 = new wxStaticText( sbSizer2512212->GetStaticBox(), wxID_ANY, wxT("Tension"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText45512212->Wrap( -1 );
	bSizer131512212->Add( m_staticText45512212, 1, wxALIGN_CENTER|wxALL, 5 );

	m_textCtrl_SF002_tension = new wxTextCtrl( sbSizer2512212->GetStaticBox(), id_textCtrl_SF002_tension, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer131512212->Add( m_textCtrl_SF002_tension, 1, wxALL, 5 );


	sbSizer2512212->Add( bSizer131512212, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer132512212;
	bSizer132512212 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText46512212 = new wxStaticText( sbSizer2512212->GetStaticBox(), wxID_ANY, wxT("Puissance"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText46512212->Wrap( -1 );
	bSizer132512212->Add( m_staticText46512212, 1, wxALIGN_CENTER|wxALL, 5 );

	m_textCtrl_SF002_puissance = new wxTextCtrl( sbSizer2512212->GetStaticBox(), id_textCtrl_SF002_puissance, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer132512212->Add( m_textCtrl_SF002_puissance, 1, wxALL, 5 );


	sbSizer2512212->Add( bSizer132512212, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer329112;
	bSizer329112 = new wxBoxSizer( wxHORIZONTAL );

	m_button_24h_SF002 = new wxButton( sbSizer2512212->GetStaticBox(), id_button_24h_SF002, wxT("24h"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer329112->Add( m_button_24h_SF002, 0, wxALL, 5 );

	m_button_pc_SF002 = new wxToggleButton( sbSizer2512212->GetStaticBox(), id_button_pc_SF002, wxT("Pc"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer329112->Add( m_button_pc_SF002, 0, wxALL, 5 );

	m_button_ecrans_SF002 = new wxToggleButton( sbSizer2512212->GetStaticBox(), id_button_ecrans_SF002, wxT("Écrans"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer329112->Add( m_button_ecrans_SF002, 0, wxALL, 5 );


	sbSizer2512212->Add( bSizer329112, 1, wxEXPAND, 5 );


	gbSizer1011212->Add( sbSizer2512212, wxGBPosition( 0, 1 ), wxGBSpan( 1, 1 ), wxALL|wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer25122522;
	sbSizer25122522 = new wxStaticBoxSizer( new wxStaticBox( sbSizer35212->GetStaticBox(), wxID_ANY, wxT("Programmer") ), wxVERTICAL );

	m_datePicker122 = new wxDatePickerCtrl( sbSizer25122522->GetStaticBox(), wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxDP_DEFAULT );
	sbSizer25122522->Add( m_datePicker122, 0, wxALL, 5 );

	m_timePicker322 = new wxTimePickerCtrl( sbSizer25122522->GetStaticBox(), wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxTP_DEFAULT );
	sbSizer25122522->Add( m_timePicker322, 0, wxALL, 5 );

	m_button_applique_SF = new wxButton( sbSizer25122522->GetStaticBox(), id_button_applique_SF, wxT("Appliqué"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer25122522->Add( m_button_applique_SF, 0, wxALL|wxEXPAND, 5 );


	gbSizer1011212->Add( sbSizer25122522, wxGBPosition( 0, 2 ), wxGBSpan( 1, 1 ), wxEXPAND, 5 );


	sbSizer35212->Add( gbSizer1011212, 1, wxALL|wxEXPAND, 5 );

	m_button_activer_SF = new wxToggleButton( sbSizer35212->GetStaticBox(), id_button_activer_SF, wxT("Activer"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button_activer_SF->SetValue( true );
	sbSizer35212->Add( m_button_activer_SF, 0, wxALL|wxEXPAND, 5 );


	bSizer4072->Add( sbSizer35212, 1, wxALL|wxEXPAND, 5 );


	bSizer3282->Add( bSizer4072, 1, wxEXPAND, 5 );


	bSizerPrincipal2->Add( bSizer3282, 0, wxALL, 5 );

	wxBoxSizer* bSizer3252;
	bSizer3252 = new wxBoxSizer( wxHORIZONTAL );

	m_bitmap332 = new wxStaticBitmap( m_panel_salle_3, wxID_ANY, wxBitmap( wxT("carte.jpg"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3252->Add( m_bitmap332, 0, wxALL, 5 );


	bSizerPrincipal2->Add( bSizer3252, 1, wxALL|wxEXPAND, 5 );


	m_panel_salle_3->SetSizer( bSizerPrincipal2 );
	m_panel_salle_3->Layout();
	bSizerPrincipal2->Fit( m_panel_salle_3 );
	m_notebook1->AddPage( m_panel_salle_3, wxT("Salle 3"), false );
	m_panel_salle_4 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerPrincipal3;
	bSizerPrincipal3 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer3283;
	bSizer3283 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer4073;
	bSizer4073 = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sbSizer3524;
	sbSizer3524 = new wxStaticBoxSizer( new wxStaticBox( m_panel_salle_4, wxID_ANY, wxT("SECTEUR G") ), wxVERTICAL );

	wxGridBagSizer* gbSizer101124;
	gbSizer101124 = new wxGridBagSizer( 0, 0 );
	gbSizer101124->SetFlexibleDirection( wxBOTH );
	gbSizer101124->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxStaticBoxSizer* sbSizer25154;
	sbSizer25154 = new wxStaticBoxSizer( new wxStaticBox( sbSizer3524->GetStaticBox(), wxID_ANY, wxT("module 1") ), wxVERTICAL );

	wxBoxSizer* bSizer137154;
	bSizer137154 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText47154 = new wxStaticText( sbSizer25154->GetStaticBox(), wxID_ANY, wxT("Intensité"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText47154->Wrap( -1 );
	bSizer137154->Add( m_staticText47154, 1, wxALIGN_CENTER|wxALL|wxEXPAND, 5 );

	m_textCtrl_SG001_intensy = new wxTextCtrl( sbSizer25154->GetStaticBox(), id_textCtrl_SG001_intensy, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer137154->Add( m_textCtrl_SG001_intensy, 1, wxALL|wxEXPAND, 5 );


	sbSizer25154->Add( bSizer137154, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer1315154;
	bSizer1315154 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText455154 = new wxStaticText( sbSizer25154->GetStaticBox(), wxID_ANY, wxT("Tension"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText455154->Wrap( -1 );
	bSizer1315154->Add( m_staticText455154, 1, wxALIGN_CENTER|wxALL, 5 );

	m_textCtrl_SG001_tension = new wxTextCtrl( sbSizer25154->GetStaticBox(), id_textCtrl_SG001_tension, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer1315154->Add( m_textCtrl_SG001_tension, 1, wxALL, 5 );


	sbSizer25154->Add( bSizer1315154, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer1325154;
	bSizer1325154 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText465154 = new wxStaticText( sbSizer25154->GetStaticBox(), wxID_ANY, wxT("Puissance"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText465154->Wrap( -1 );
	bSizer1325154->Add( m_staticText465154, 1, wxALIGN_CENTER|wxALL, 5 );

	m_textCtrl_SG001_puissance = new wxTextCtrl( sbSizer25154->GetStaticBox(), id_textCtrl_SG001_puissance, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer1325154->Add( m_textCtrl_SG001_puissance, 1, wxALL, 5 );


	sbSizer25154->Add( bSizer1325154, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer3295;
	bSizer3295 = new wxBoxSizer( wxHORIZONTAL );

	m_button_24h_SG001 = new wxButton( sbSizer25154->GetStaticBox(), id_button_24h_SG001, wxT("24h"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3295->Add( m_button_24h_SG001, 0, wxALL, 5 );

	m_button_pc_SG001 = new wxToggleButton( sbSizer25154->GetStaticBox(), id_button_pc_SG001, wxT("Pc"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3295->Add( m_button_pc_SG001, 0, wxALL, 5 );

	m_button_ecrans_SG001 = new wxToggleButton( sbSizer25154->GetStaticBox(), id_button_ecrans_SG001, wxT("Écrans"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3295->Add( m_button_ecrans_SG001, 0, wxALL, 5 );


	sbSizer25154->Add( bSizer3295, 1, wxEXPAND, 5 );


	gbSizer101124->Add( sbSizer25154, wxGBPosition( 0, 0 ), wxGBSpan( 1, 1 ), wxALL|wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer251224;
	sbSizer251224 = new wxStaticBoxSizer( new wxStaticBox( sbSizer3524->GetStaticBox(), wxID_ANY, wxT("module 2") ), wxVERTICAL );

	wxBoxSizer* bSizer1371224;
	bSizer1371224 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText471224 = new wxStaticText( sbSizer251224->GetStaticBox(), wxID_ANY, wxT("Intensité"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText471224->Wrap( -1 );
	bSizer1371224->Add( m_staticText471224, 1, wxALIGN_CENTER|wxALL|wxEXPAND, 5 );

	m_textCtrl_SG002_intensy = new wxTextCtrl( sbSizer251224->GetStaticBox(), id_textCtrl_SG002_intensy, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer1371224->Add( m_textCtrl_SG002_intensy, 1, wxALL|wxEXPAND, 5 );


	sbSizer251224->Add( bSizer1371224, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer13151224;
	bSizer13151224 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText4551224 = new wxStaticText( sbSizer251224->GetStaticBox(), wxID_ANY, wxT("Tension"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4551224->Wrap( -1 );
	bSizer13151224->Add( m_staticText4551224, 1, wxALIGN_CENTER|wxALL, 5 );

	m_textCtrl_SG002_tension = new wxTextCtrl( sbSizer251224->GetStaticBox(), id_textCtrl_SG002_tension, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer13151224->Add( m_textCtrl_SG002_tension, 1, wxALL, 5 );


	sbSizer251224->Add( bSizer13151224, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer13251224;
	bSizer13251224 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText4651224 = new wxStaticText( sbSizer251224->GetStaticBox(), wxID_ANY, wxT("Puissance"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4651224->Wrap( -1 );
	bSizer13251224->Add( m_staticText4651224, 1, wxALIGN_CENTER|wxALL, 5 );

	m_textCtrl_SG002_puissance = new wxTextCtrl( sbSizer251224->GetStaticBox(), id_textCtrl_SG002_puissance, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer13251224->Add( m_textCtrl_SG002_puissance, 1, wxALL, 5 );


	sbSizer251224->Add( bSizer13251224, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer32914;
	bSizer32914 = new wxBoxSizer( wxHORIZONTAL );

	m_button_24h_SG002 = new wxButton( sbSizer251224->GetStaticBox(), id_button_24h_SG002, wxT("24h"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer32914->Add( m_button_24h_SG002, 0, wxALL, 5 );

	m_button_pc_SG002 = new wxToggleButton( sbSizer251224->GetStaticBox(), id_button_pc_SG002, wxT("Pc"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer32914->Add( m_button_pc_SG002, 0, wxALL, 5 );

	m_button_ecrans_SG002 = new wxToggleButton( sbSizer251224->GetStaticBox(), id_button_ecrans_SG002, wxT("Écrans"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer32914->Add( m_button_ecrans_SG002, 0, wxALL, 5 );


	sbSizer251224->Add( bSizer32914, 1, wxEXPAND, 5 );


	gbSizer101124->Add( sbSizer251224, wxGBPosition( 0, 1 ), wxGBSpan( 1, 1 ), wxALL|wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer2512254;
	sbSizer2512254 = new wxStaticBoxSizer( new wxStaticBox( sbSizer3524->GetStaticBox(), wxID_ANY, wxT("Programmer") ), wxVERTICAL );

	m_datePicker14 = new wxDatePickerCtrl( sbSizer2512254->GetStaticBox(), wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxDP_DEFAULT );
	sbSizer2512254->Add( m_datePicker14, 0, wxALL, 5 );

	m_timePicker34 = new wxTimePickerCtrl( sbSizer2512254->GetStaticBox(), wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxTP_DEFAULT );
	sbSizer2512254->Add( m_timePicker34, 0, wxALL, 5 );

	m_button_applique_SG = new wxButton( sbSizer2512254->GetStaticBox(), id_button_applique_SG, wxT("Appliqué"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer2512254->Add( m_button_applique_SG, 0, wxALL|wxEXPAND, 5 );


	gbSizer101124->Add( sbSizer2512254, wxGBPosition( 0, 2 ), wxGBSpan( 1, 1 ), wxALL|wxEXPAND, 5 );


	sbSizer3524->Add( gbSizer101124, 1, wxALL|wxEXPAND, 5 );

	m_button_activer_SG = new wxToggleButton( sbSizer3524->GetStaticBox(), id_button_activer_SG, wxT("Activer"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer3524->Add( m_button_activer_SG, 0, wxALL|wxEXPAND, 5 );


	bSizer4073->Add( sbSizer3524, 1, wxALL|wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer35213;
	sbSizer35213 = new wxStaticBoxSizer( new wxStaticBox( m_panel_salle_4, wxID_ANY, wxT("SECTEUR H") ), wxVERTICAL );

	wxGridBagSizer* gbSizer1011213;
	gbSizer1011213 = new wxGridBagSizer( 0, 0 );
	gbSizer1011213->SetFlexibleDirection( wxBOTH );
	gbSizer1011213->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxStaticBoxSizer* sbSizer251523;
	sbSizer251523 = new wxStaticBoxSizer( new wxStaticBox( sbSizer35213->GetStaticBox(), wxID_ANY, wxT("module 1") ), wxVERTICAL );

	wxBoxSizer* bSizer1371523;
	bSizer1371523 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText471523 = new wxStaticText( sbSizer251523->GetStaticBox(), wxID_ANY, wxT("Intensité"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText471523->Wrap( -1 );
	bSizer1371523->Add( m_staticText471523, 1, wxALIGN_CENTER|wxALL|wxEXPAND, 5 );

	m_textCtrl_SH001_intensy = new wxTextCtrl( sbSizer251523->GetStaticBox(), id_textCtrl_SH001_intensy, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer1371523->Add( m_textCtrl_SH001_intensy, 1, wxALL|wxEXPAND, 5 );


	sbSizer251523->Add( bSizer1371523, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer13151523;
	bSizer13151523 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText4551523 = new wxStaticText( sbSizer251523->GetStaticBox(), wxID_ANY, wxT("Tension"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4551523->Wrap( -1 );
	bSizer13151523->Add( m_staticText4551523, 1, wxALIGN_CENTER|wxALL, 5 );

	m_textCtrl_SH001_tension = new wxTextCtrl( sbSizer251523->GetStaticBox(), id_textCtrl_SH001_tension, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer13151523->Add( m_textCtrl_SH001_tension, 1, wxALL|wxEXPAND, 5 );


	sbSizer251523->Add( bSizer13151523, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer13251523;
	bSizer13251523 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText4651523 = new wxStaticText( sbSizer251523->GetStaticBox(), wxID_ANY, wxT("Puissance"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4651523->Wrap( -1 );
	bSizer13251523->Add( m_staticText4651523, 1, wxALIGN_CENTER|wxALL, 5 );

	m_textCtrl_SH001_puissance = new wxTextCtrl( sbSizer251523->GetStaticBox(), id_textCtrl_SH001_puissance, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer13251523->Add( m_textCtrl_SH001_puissance, 1, wxALL, 5 );


	sbSizer251523->Add( bSizer13251523, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer32933;
	bSizer32933 = new wxBoxSizer( wxHORIZONTAL );

	m_button_24h_SH001 = new wxButton( sbSizer251523->GetStaticBox(), id_button_24h_SH001, wxT("24h"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer32933->Add( m_button_24h_SH001, 0, wxALL, 5 );

	m_button_pc_SH001 = new wxToggleButton( sbSizer251523->GetStaticBox(), id_button_pc_SH001, wxT("Pc"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer32933->Add( m_button_pc_SH001, 0, wxALL, 5 );

	m_button_ecrans_SH001 = new wxToggleButton( sbSizer251523->GetStaticBox(), id_button_ecrans_SH001, wxT("Écrans"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer32933->Add( m_button_ecrans_SH001, 0, wxALL, 5 );


	sbSizer251523->Add( bSizer32933, 1, wxEXPAND, 5 );


	gbSizer1011213->Add( sbSizer251523, wxGBPosition( 0, 0 ), wxGBSpan( 1, 1 ), wxALL|wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer2512213;
	sbSizer2512213 = new wxStaticBoxSizer( new wxStaticBox( sbSizer35213->GetStaticBox(), wxID_ANY, wxT("module 2") ), wxVERTICAL );

	wxBoxSizer* bSizer13712213;
	bSizer13712213 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText4712213 = new wxStaticText( sbSizer2512213->GetStaticBox(), wxID_ANY, wxT("Intensité"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4712213->Wrap( -1 );
	bSizer13712213->Add( m_staticText4712213, 1, wxALIGN_CENTER|wxALL|wxEXPAND, 5 );

	m_textCtrl_SH002_intensy = new wxTextCtrl( sbSizer2512213->GetStaticBox(), id_textCtrl_SH002_intensy, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer13712213->Add( m_textCtrl_SH002_intensy, 1, wxALL|wxEXPAND, 5 );


	sbSizer2512213->Add( bSizer13712213, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer131512213;
	bSizer131512213 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText45512213 = new wxStaticText( sbSizer2512213->GetStaticBox(), wxID_ANY, wxT("Tension"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText45512213->Wrap( -1 );
	bSizer131512213->Add( m_staticText45512213, 1, wxALIGN_CENTER|wxALL, 5 );

	m_textCtrl_SH002_tension = new wxTextCtrl( sbSizer2512213->GetStaticBox(), id_textCtrl_SH002_tension, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer131512213->Add( m_textCtrl_SH002_tension, 1, wxALL, 5 );


	sbSizer2512213->Add( bSizer131512213, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer132512213;
	bSizer132512213 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText46512213 = new wxStaticText( sbSizer2512213->GetStaticBox(), wxID_ANY, wxT("Puissance"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText46512213->Wrap( -1 );
	bSizer132512213->Add( m_staticText46512213, 1, wxALIGN_CENTER|wxALL, 5 );

	m_textCtrl_SH002_puissance = new wxTextCtrl( sbSizer2512213->GetStaticBox(), id_textCtrl_SH002_puissance, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
	bSizer132512213->Add( m_textCtrl_SH002_puissance, 1, wxALL, 5 );


	sbSizer2512213->Add( bSizer132512213, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer329113;
	bSizer329113 = new wxBoxSizer( wxHORIZONTAL );

	m_button_24h_SH002 = new wxButton( sbSizer2512213->GetStaticBox(), id_button_24h_SH002, wxT("24h"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer329113->Add( m_button_24h_SH002, 0, wxALL, 5 );

	m_button_pc_SH002 = new wxToggleButton( sbSizer2512213->GetStaticBox(), id_button_pc_SH002, wxT("Pc"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer329113->Add( m_button_pc_SH002, 0, wxALL, 5 );

	m_button_ecrans_SH002 = new wxToggleButton( sbSizer2512213->GetStaticBox(), id_button_ecrans_SH002, wxT("Écrans"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer329113->Add( m_button_ecrans_SH002, 0, wxALL, 5 );


	sbSizer2512213->Add( bSizer329113, 1, wxEXPAND, 5 );


	gbSizer1011213->Add( sbSizer2512213, wxGBPosition( 0, 1 ), wxGBSpan( 1, 1 ), wxALL|wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer25122541;
	sbSizer25122541 = new wxStaticBoxSizer( new wxStaticBox( sbSizer35213->GetStaticBox(), wxID_ANY, wxT("Programmer") ), wxVERTICAL );

	m_datePicker141 = new wxDatePickerCtrl( sbSizer25122541->GetStaticBox(), wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxDP_DEFAULT );
	sbSizer25122541->Add( m_datePicker141, 0, wxALL, 5 );

	m_timePicker341 = new wxTimePickerCtrl( sbSizer25122541->GetStaticBox(), wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxTP_DEFAULT );
	sbSizer25122541->Add( m_timePicker341, 0, wxALL, 5 );

	m_button_applique_SH = new wxButton( sbSizer25122541->GetStaticBox(), id_button_applique_SH, wxT("Appliqué"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer25122541->Add( m_button_applique_SH, 0, wxALL|wxEXPAND, 5 );


	gbSizer1011213->Add( sbSizer25122541, wxGBPosition( 0, 2 ), wxGBSpan( 1, 1 ), wxEXPAND, 5 );


	sbSizer35213->Add( gbSizer1011213, 1, wxALL|wxEXPAND, 5 );

	m_button_activer_SH = new wxToggleButton( sbSizer35213->GetStaticBox(), id_button_activer_SH, wxT("Activer"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer35213->Add( m_button_activer_SH, 0, wxALL|wxEXPAND, 5 );


	bSizer4073->Add( sbSizer35213, 1, wxALL|wxEXPAND, 5 );


	bSizer3283->Add( bSizer4073, 1, wxEXPAND, 5 );


	bSizerPrincipal3->Add( bSizer3283, 0, wxALL, 5 );

	wxBoxSizer* bSizer3253;
	bSizer3253 = new wxBoxSizer( wxHORIZONTAL );

	m_bitmap6 = new wxStaticBitmap( m_panel_salle_4, wxID_ANY, wxBitmap( wxT("carte.jpg"), wxBITMAP_TYPE_RESOURCE ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3253->Add( m_bitmap6, 0, wxALL, 5 );


	bSizerPrincipal3->Add( bSizer3253, 1, wxALL|wxEXPAND, 5 );


	m_panel_salle_4->SetSizer( bSizerPrincipal3 );
	m_panel_salle_4->Layout();
	bSizerPrincipal3->Fit( m_panel_salle_4 );
	m_notebook1->AddPage( m_panel_salle_4, wxT("Salle 4"), false );

	bSizer247->Add( m_notebook1, 1, wxEXPAND | wxALL, 5 );


	this->SetSizer( bSizer247 );
	this->Layout();
	m_statusBar = this->CreateStatusBar( 1, wxSTB_SIZEGRIP, wxID_ANY );

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( FramePrincipal::OnCloseapp ) );
}

FramePrincipal::~FramePrincipal()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( FramePrincipal::OnCloseapp ) );

}
