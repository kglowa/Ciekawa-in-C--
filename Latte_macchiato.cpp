#include "wx_pch.h"
#include "Latte_macchiato.h"

#ifndef WX_PRECOMP
	//(*InternalHeadersPCH(Latte_macchiato)
	#include <wx/string.h>
	#include <wx/intl.h>
	//*)
#endif
//(*InternalHeaders(Latte_macchiato)
#include <wx/bitmap.h>
#include <wx/image.h>
//*)

//(*IdInit(Latte_macchiato)
const long Latte_macchiato::ID_STATICBITMAP1 = wxNewId();
const long Latte_macchiato::ID_STATICTEXT1 = wxNewId();
const long Latte_macchiato::ID_STATICTEXT2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Latte_macchiato,wxDialog)
	//(*EventTable(Latte_macchiato)
	//*)
END_EVENT_TABLE()
/**
* Konstruktor Latte_macchiato
* Przyjmujacy jako argumenty wskaznik na nadrzedny element okna, identyfikator okna, wymiary okna,
* wspolrzedne lewego gornego okna obiektu w stosunku do obiektu nadrzednego
*/
Latte_macchiato::Latte_macchiato(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Latte_macchiato)
	Create(parent, id, _("Latte macchiato"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxSize(500,500));
	Move(wxDefaultPosition);
	SetMinSize(wxSize(500,500));
	SetMaxSize(wxSize(500,500));
	SetBackgroundColour(wxColour(240,240,240));
	StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("/home/kacper/Pulpit/Ciekawa_Projekt/obrazki/kawy/latte_macchiato.png"))), wxPoint(120,50), wxDefaultSize, 0, _T("ID_STATICBITMAP1"));
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("-pojedyncza kolba\n- pierwszy przycisk na ekspresie\n- lekko spienione mleko pozostawione na pol minuty do odstania"), wxPoint(5,350), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Przed przygotowaniem kaw nalezy przepusic wrzatek przez ekspres\n Po wykonaniu kawy nalezy przetrzec spieniacz do mleka"), wxPoint(8,424), wxSize(488,48), 0, _T("ID_STATICTEXT2"));
	//*)
}
/**
* Destruktor Latte_macchiato
*/
Latte_macchiato::~Latte_macchiato()
{
	//(*Destroy(Latte_macchiato)
	//*)
}

