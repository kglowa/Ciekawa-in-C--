#include "wx_pch.h"
#include "RedGentelman.h"

#ifndef WX_PRECOMP
	//(*InternalHeadersPCH(RedGentelman)
	#include <wx/string.h>
	#include <wx/intl.h>
	//*)
#endif
//(*InternalHeaders(RedGentelman)
//*)

//(*IdInit(RedGentelman)
const long RedGentelman::ID_STATICTEXT1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(RedGentelman,wxDialog)
	//(*EventTable(RedGentelman)
	//*)
END_EVENT_TABLE()
/**
* Konstruktor RedGentelman
* Przyjmujacy jako argumenty wskaznik na nadrzedny element okna, identyfikator okna, wymiary okna,
* wspolrzedne lewego gornego okna obiektu w stosunku do obiektu nadrzednego
*/
RedGentelman::RedGentelman(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(RedGentelman)
	Create(parent, id, _("Red Gentelman"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxSize(500,500));
	Move(wxDefaultPosition);
	SetMinSize(wxSize(500,500));
	SetMaxSize(wxSize(500,500));
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("50ml red stag JimBeam\n30ml wisniowka\ndo do dopelnienia woda gazowana\ncwiartka cytryny"), wxPoint(0,0), wxSize(0,0), 0, _T("ID_STATICTEXT1"));
	//*)
}
/**
* Destruktor RedGentelman
*/
RedGentelman::~RedGentelman()
{
	//(*Destroy(RedGentelman)
	//*)
}

