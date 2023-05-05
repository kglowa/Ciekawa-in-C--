#include "wx_pch.h"
#include "Kamikadze.h"

#ifndef WX_PRECOMP
	//(*InternalHeadersPCH(Kamikadze)
	#include <wx/string.h>
	#include <wx/intl.h>
	//*)
#endif
//(*InternalHeaders(Kamikadze)
//*)

//(*IdInit(Kamikadze)
const long Kamikadze::ID_STATICTEXT1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Kamikadze,wxDialog)
	//(*EventTable(Kamikadze)
	//*)
END_EVENT_TABLE()
/**
* Konstruktor Kamikadze
* Przyjmujacy jako argumenty wskaznik na nadrzedny element okna, identyfikator okna, wymiary okna,
* wspolrzedne lewego gornego okna obiektu w stosunku do obiektu nadrzednego
*/
Kamikadze::Kamikadze(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Kamikadze)
	Create(parent, id, _("Kamikadze"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxSize(500,500));
	Move(wxDefaultPosition);
	SetMinSize(wxSize(500,500));
	SetMaxSize(wxSize(500,500));
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("100ml wodki\n100ml soku z cytryny\n70ml blue curacao"), wxPoint(0,0), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	//*)
}
/**
* Destruktor Kamikadze
*/
Kamikadze::~Kamikadze()
{
	//(*Destroy(Kamikadze)
	//*)
}

