#include "wx_pch.h"
#include "Smerf.h"

#ifndef WX_PRECOMP
	//(*InternalHeadersPCH(Smerf)
	#include <wx/string.h>
	#include <wx/intl.h>
	//*)
#endif
//(*InternalHeaders(Smerf)
//*)

//(*IdInit(Smerf)
const long Smerf::ID_STATICTEXT2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Smerf,wxDialog)
	//(*EventTable(Smerf)
	//*)
END_EVENT_TABLE()
/**
* Konstruktor Smerf
* Przyjmujacy jako argumenty wskaznik na nadrzedny element okna, identyfikator okna, wymiary okna,
* wspolrzedne lewego gornego okna obiektu w stosunku do obiektu nadrzednego
*/
Smerf::Smerf(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Smerf)
	Create(parent, id, _("Smerf"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxSize(500,500));
	Move(wxDefaultPosition);
	SetMinSize(wxSize(500,500));
	SetMaxSize(wxSize(500,500));
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("50ml wodki\n40ml malibu\n150ml soku z banana\njedna pompka blue curacao"), wxPoint(0,0), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	//*)
}
/**
* Destruktor Smerf
*/
Smerf::~Smerf()
{
	//(*Destroy(Smerf)
	//*)
}

