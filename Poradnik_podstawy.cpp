#include "wx_pch.h"
#include "Poradnik_podstawy.h"

#ifndef WX_PRECOMP
	//(*InternalHeadersPCH(Poradnik_podstawy)
	#include <wx/intl.h>
	#include <wx/string.h>
	//*)
#endif
//(*InternalHeaders(Poradnik_podstawy)
#include <wx/font.h>
//*)

//(*IdInit(Poradnik_podstawy)
const long Poradnik_podstawy::ID_STATICTEXT1 = wxNewId();
const long Poradnik_podstawy::ID_STATICTEXT2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Poradnik_podstawy,wxDialog)
	//(*EventTable(Poradnik_podstawy)
	//*)
END_EVENT_TABLE()
/**
* Konstruktor Poradnik_podstawy
* Przyjmujacy jako argumenty wskaznik na nadrzedny element okna, identyfikator okna, wymiary okna,
* wspolrzedne lewego gornego okna obiektu w stosunku do obiektu nadrzednego
*/
Poradnik_podstawy::Poradnik_podstawy(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Poradnik_podstawy)
	Create(parent, id, _("Poradnik ogolny"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxSize(500,500));
	Move(wxDefaultPosition);
	SetMinSize(wxSize(500,500));
	SetMaxSize(wxSize(500,500));
	SetBackgroundColour(wxColour(240,240,240));
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Pamietaj!"), wxPoint(150,50), wxSize(200,55), 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(30,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Sans"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("1. Robiac drinki nie zaluj lodu.\n2. Trzymaj sie wyznaczonych receptur.\n3. Nigdy nie wstrzasaj drinkow z napojem gazowanym.\n4. Myj szklanki na bierzaco\n5. Na koniec zmiany przetrzyj blaty i stoliki.\n6. Na koniec zmiany umyj ekspres oraz krany z piwem.\n7. Na bierzaco uzupelniaj lodowki z piwem.\n8. Badz zyczliwy w stosunku do naszych klientow.\n9. Na koniec dnia przelicz utarg i zapisz go w notesie.\n10. Zabierz swoj napiwek"), wxPoint(6,176), wxSize(408,170), 0, _T("ID_STATICTEXT2"));
	wxFont StaticText2Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Sans"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	//*)
}
/**
* Destruktor Poradnik_podstawy
*/
Poradnik_podstawy::~Poradnik_podstawy()
{
	//(*Destroy(Poradnik_podstawy)
	//*)
}

