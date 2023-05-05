#include "wx_pch.h"
#include "Flat_white.h"

#ifndef WX_PRECOMP
	//(*InternalHeadersPCH(Flat_white)
	#include <wx/string.h>
	#include <wx/intl.h>
	//*)
#endif
//(*InternalHeaders(Flat_white)
#include <wx/bitmap.h>
#include <wx/image.h>
//*)

//(*IdInit(Flat_white)
const long Flat_white::ID_STATICBITMAP1 = wxNewId();
const long Flat_white::ID_STATICTEXT1 = wxNewId();
const long Flat_white::ID_STATICTEXT2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Flat_white,wxDialog)
	//(*EventTable(Flat_white)
	//*)
END_EVENT_TABLE()
/**
* Konstruktor Flat_white
* Przyjmujacy jako argumenty wskaznik na nadrzedny element okna, identyfikator okna, wymiary okna,
* wspolrzedne lewego gornego okna obiektu w stosunku do obiektu nadrzednego
*/
Flat_white::Flat_white(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Flat_white)
	Create(parent, id, _("Flat white"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxSize(500,500));
	Move(wxDefaultPosition);
	SetMinSize(wxSize(500,500));
	SetMaxSize(wxSize(500,500));
	StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("/home/kacper/Pulpit/Ciekawa_Projekt/obrazki/kawy/flat_white.png"))), wxPoint(120,50), wxDefaultSize, 0, _T("ID_STATICBITMAP1"));
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("-podwojna kolba\n- drugi przycisk na ekspresie\n- mleko podgrzane "), wxPoint(5,300), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Przed przygotowaniem kaw nalezy przepusic wrzatek przez ekspres\n Po wykonaniu kawy nalezy przetrzec spieniacz do mleka"), wxPoint(5,370), wxSize(491,46), 0, _T("ID_STATICTEXT2"));
	//*)
}
/**
* Destruktor Flat_white
*/
Flat_white::~Flat_white()
{
	//(*Destroy(Flat_white)
	//*)
}

