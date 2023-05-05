#include "wx_pch.h"
#include "espresso_dopio.h"

#ifndef WX_PRECOMP
	//(*InternalHeadersPCH(espresso_dopio)
	#include <wx/string.h>
	#include <wx/intl.h>
	//*)
#endif
//(*InternalHeaders(espresso_dopio)
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/image.h>
//*)

//(*IdInit(espresso_dopio)
const long espresso_dopio::ID_STATICBITMAP1 = wxNewId();
const long espresso_dopio::ID_STATICTEXT1 = wxNewId();
const long espresso_dopio::ID_STATICTEXT2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(espresso_dopio,wxDialog)
	//(*EventTable(espresso_dopio)
	//*)
END_EVENT_TABLE()
/**
* Konstruktor espresso_dopio
* Przyjmujacy jako argumenty wskaznik na nadrzedny element okna, identyfikator okna, wymiary okna,
* wspolrzedne lewego gornego okna obiektu w stosunku do obiektu nadrzednego
*/
espresso_dopio::espresso_dopio(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(espresso_dopio)
	Create(parent, id, _("Espresso Dopio"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxSize(500,500));
	Move(wxDefaultPosition);
	SetMinSize(wxSize(500,500));
	SetMaxSize(wxSize(500,500));
	SetBackgroundColour(wxColour(240,240,240));
	StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("/home/kacper/Pulpit/Ciekawa_Projekt/obrazki/kawy/espresso_dopio.png"))), wxPoint(120,50), wxDefaultSize, 0, _T("ID_STATICBITMAP1"));
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("- podwojna kolba\n-drugi przycisk na ekspresie"), wxPoint(5,300), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Sans"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Przed przygotowaniem kaw nalezy przepusic wrzatek przez ekspres"), wxPoint(5,350), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	//*)
}
/**
* Destruktor espresso_dopio
*/
espresso_dopio::~espresso_dopio()
{
	//(*Destroy(espresso_dopio)
	//*)
}

