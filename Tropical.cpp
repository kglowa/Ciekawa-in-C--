#include "wx_pch.h"
#include "Tropical.h"

#ifndef WX_PRECOMP
	//(*InternalHeadersPCH(Tropical)
	#include <wx/string.h>
	#include <wx/intl.h>
	//*)
#endif
//(*InternalHeaders(Tropical)
//*)

//(*IdInit(Tropical)
const long Tropical::ID_STATICTEXT1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Tropical,wxDialog)
	//(*EventTable(Tropical)
	//*)
END_EVENT_TABLE()
/**
* Konstruktor Tropical
* Przyjmujacy jako argumenty wskaznik na nadrzedny element okna, identyfikator okna, wymiary okna,
* wspolrzedne lewego gornego okna obiektu w stosunku do obiektu nadrzednego
*/
Tropical::Tropical(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Tropical)
	Create(parent, id, _("Tropical"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxSize(500,500));
	Move(wxDefaultPosition);
	SetMinSize(wxSize(500,500));
	SetMaxSize(wxSize(500,500));
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("50ml wodka\n40ml maliby\n150ml soku z kaktusa\n 20ml syropu truskawkowego"), wxPoint(0,0), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	//*)
}
/**
* Destruktor Tropical
*/
Tropical::~Tropical()
{
	//(*Destroy(Tropical)
	//*)
}

