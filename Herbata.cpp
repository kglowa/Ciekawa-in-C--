#include "wx_pch.h"
#include "Herbata.h"

#ifndef WX_PRECOMP
	//(*InternalHeadersPCH(Herbata)
	#include <wx/string.h>
	#include <wx/intl.h>
	//*)
#endif
//(*InternalHeaders(Herbata)
#include <wx/bitmap.h>
#include <wx/image.h>
//*)

//(*IdInit(Herbata)
const long Herbata::ID_STATICBITMAP1 = wxNewId();
const long Herbata::ID_STATICTEXT2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Herbata,wxDialog)
	//(*EventTable(Herbata)
	//*)
END_EVENT_TABLE()
/**
* Konstruktor Herbata
* Przyjmujacy jako argumenty wskaznik na nadrzedny element okna, identyfikator okna, wymiary okna,
* wspolrzedne lewego gornego okna obiektu w stosunku do obiektu nadrzednego
*/
Herbata::Herbata(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Herbata)
	Create(parent, id, _("Herbata"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxSize(500,500));
	Move(wxDefaultPosition);
	SetMinSize(wxSize(500,500));
	SetMaxSize(wxSize(500,500));
	SetBackgroundColour(wxColour(240,240,240));
	StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("/home/kacper/Pulpit/Ciekawa_Projekt/obrazki/kawy/herbata.png"))), wxPoint(120,50), wxDefaultSize, 0, _T("ID_STATICBITMAP1"));
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("- ostatni przycisk na ekspresie\n-przed nalaniem wody na hebate nalezy sprawdzic ile stopni pokazuje\n termometr\n - dla herbat czarnych termometr powinien wskazywac 95-100 stopni\n- dla herbat zielonych termometr powinien pokazywac 70-80 stopni\n- jezeli temperatura jest za wysoka nalezy nacisnac przycisk i przepuscic\n wrzatek, obserwujac przy tym temperature\n- nie wrzucamy saszetek z herbata do wrzatku poniewaz\n moze sie zaparzyc zbyt mocno zanim zdazymy podac zamowienie"), wxPoint(5,340), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	//*)
}
/**
* Destruktor Herbata
*/
Herbata::~Herbata()
{
	//(*Destroy(Herbata)
	//*)
}

