#include "wx_pch.h"
#include "MalibuSunrise.h"

#ifndef WX_PRECOMP
	//(*InternalHeadersPCH(MalibuSunrise)
	#include <wx/string.h>
	#include <wx/intl.h>
	//*)
#endif
//(*InternalHeaders(MalibuSunrise)
//*)

//(*IdInit(MalibuSunrise)
const long MalibuSunrise::ID_STATICTEXT1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(MalibuSunrise,wxDialog)
	//(*EventTable(MalibuSunrise)
	//*)
END_EVENT_TABLE()
/**
* Konstruktor MalibuSunrise
* Przyjmujacy jako argumenty wskaznik na nadrzedny element okna, identyfikator okna, wymiary okna,
* wspolrzedne lewego gornego okna obiektu w stosunku do obiektu nadrzednego
*/
MalibuSunrise::MalibuSunrise(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(MalibuSunrise)
	Create(parent, id, _("Malibu Sunrise"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxSize(500,500));
	Move(wxDefaultPosition);
	SetMinSize(wxSize(500,500));
	SetMaxSize(wxSize(500,500));
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("50ml wodka\n40ml malibu\n150ml soku pomaranczowego\njedna pompka granadyny"), wxPoint(0,0), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	//*)
}
/**
* Destruktor MalibuSunrise
*/
MalibuSunrise::~MalibuSunrise()
{
	//(*Destroy(MalibuSunrise)
	//*)
}

