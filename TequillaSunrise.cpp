#include "wx_pch.h"
#include "TequillaSunrise.h"

#ifndef WX_PRECOMP
	//(*InternalHeadersPCH(TequillaSunrise)
	#include <wx/string.h>
	#include <wx/intl.h>
	//*)
#endif
//(*InternalHeaders(TequillaSunrise)
//*)

//(*IdInit(TequillaSunrise)
const long TequillaSunrise::ID_STATICTEXT1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(TequillaSunrise,wxDialog)
	//(*EventTable(TequillaSunrise)
	//*)
END_EVENT_TABLE()
/**
* Konstruktor TequillaSunrise
* Przyjmujacy jako argumenty wskaznik na nadrzedny element okna, identyfikator okna, wymiary okna,
* wspolrzedne lewego gornego okna obiektu w stosunku do obiektu nadrzednego
*/
TequillaSunrise::TequillaSunrise(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(TequillaSunrise)
	Create(parent, id, _("Tequilla Sunrise"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxSize(500,500));
	Move(wxDefaultPosition);
	SetMinSize(wxSize(500,500));
	SetMaxSize(wxSize(500,500));
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("50ml srebrnej tequili\n200ml soku pomaranczowego\njedna pompka granadyny"), wxPoint(0,0), wxSize(500,500), 0, _T("ID_STATICTEXT1"));
	StaticText1->SetMinSize(wxSize(500,500));
	StaticText1->SetMaxSize(wxSize(500,0));
	//*)
}
/**
* Destruktor TequillaSunrise
*/
TequillaSunrise::~TequillaSunrise()
{
	//(*Destroy(TequillaSunrise)
	//*)
}

