#include "wx_pch.h"
#include "Sexonthebeach.h"

#ifndef WX_PRECOMP
	//(*InternalHeadersPCH(Sexonthebeach)
	#include <wx/string.h>
	#include <wx/intl.h>
	//*)
#endif
//(*InternalHeaders(Sexonthebeach)
//*)

//(*IdInit(Sexonthebeach)
const long Sexonthebeach::ID_STATICTEXT1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Sexonthebeach,wxDialog)
	//(*EventTable(Sexonthebeach)
	//*)
END_EVENT_TABLE()
/**
* Konstruktor Sexonthebeach
* Przyjmujacy jako argumenty wskaznik na nadrzedny element okna, identyfikator okna, wymiary okna,
* wspolrzedne lewego gornego okna obiektu w stosunku do obiektu nadrzednego
*/
Sexonthebeach::Sexonthebeach(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Sexonthebeach)
	Create(parent, id, _("Sex on the Beach"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxSize(500,500));
	Move(wxDefaultPosition);
	SetMinSize(wxSize(500,500));
	SetMaxSize(wxSize(500,500));
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("50ml wodka\n40ml likieru brzoskwiniowego\n100ml soku pomaranczowego\n50ml soku zurawinowego"), wxPoint(0,0), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	//*)
}
/**
* Destruktor Sexonthebeach
*/
Sexonthebeach::~Sexonthebeach()
{
	//(*Destroy(Sexonthebeach)
	//*)
}

