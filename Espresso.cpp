#include "wx_pch.h"
#include "Espresso.h"

#ifndef WX_PRECOMP
	//(*InternalHeadersPCH(Espresso)
	#include <wx/string.h>
	#include <wx/intl.h>
	//*)
#endif
//(*InternalHeaders(Espresso)
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/image.h>
//*)

//(*IdInit(Espresso)
const long Espresso::ID_STATICBITMAP1 = wxNewId();
const long Espresso::ID_STATICTEXT1 = wxNewId();
const long Espresso::ID_STATICTEXT2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Espresso,wxDialog)
	//(*EventTable(Espresso)
	//*)
END_EVENT_TABLE()
/**
* Konstruktor Espresso
* Przyjmujacy jako argumenty wskaznik na nadrzedny element okna, identyfikator okna, wymiary okna,
* wspolrzedne lewego gornego okna obiektu w stosunku do obiektu nadrzednego
*/
Espresso::Espresso(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Espresso)
	Create(parent, id, _("Espresso"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxSize(500,500));
	Move(wxDefaultPosition);
	SetBackgroundColour(wxColour(240,240,240));
	StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("/home/kacper/Pulpit/Ciekawa_Projekt/obrazki/kawy/espresso.png"))), wxPoint(120,48), wxDefaultSize, 0, _T("ID_STATICBITMAP1"));
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("- pojedyncza kolba\n- pierwszy przycisk na ekspresie\n"), wxPoint(5,300), wxSize(224,48), 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Sans"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Przed przygotowaniem kaw nalezy przepusic wrzatek przez ekspres"), wxPoint(5,350), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	//*)
}
/**
* Destruktor Espresso
*/
Espresso::~Espresso()
{
	//(*Destroy(Espresso)
	//*)
}

