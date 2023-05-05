#include "wx_pch.h"
#include "Menu_okno.h"
#include "Espresso.h"
#include "espresso_dopio.h"
#include "Flat_white.h"
#include "Cafe_mocha.h"
#include "Irish_Caffe.h"
#include "Latte_macchiato.h"
#include "Herbata.h"
#include "Smerf.h"
#include "RedGentelman.h"
#include "Kamikadze.h"
#include "TequillaSunrise.h"
#include "Tropical.h"
#include "MalibuSunrise.h"
#include "Sexonthebeach.h"


#ifndef WX_PRECOMP
	//(*InternalHeadersPCH(Menu_okno)
	#include <wx/string.h>
	#include <wx/intl.h>
	//*)
#endif
//(*InternalHeaders(Menu_okno)
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/image.h>
//*)

//(*IdInit(Menu_okno)
const long Menu_okno::ID_STATICBITMAP1 = wxNewId();
const long Menu_okno::ID_LISTBOX1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Menu_okno,wxDialog)
	//(*EventTable(Menu_okno)
	//*)
END_EVENT_TABLE()
/**
* Konstruktor Menu_okno
* Przyjmujacy jako argumenty wskaznik na nadrzedny element okna, identyfikator okna, wymiary okna,
* wspolrzedne lewego gornego okna obiektu w stosunku do obiektu nadrzednego
*/
Menu_okno::Menu_okno(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Menu_okno)
	Create(parent, id, _("Menu"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxSize(800,800));
	Move(wxDefaultPosition);
	SetMinSize(wxSize(800,800));
	SetMaxSize(wxSize(800,-1));
	SetBackgroundColour(wxColour(240,240,240));
	StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("/home/kacper/Pulpit/Ciekawa_Projekt/obrazki/ciekawa.png"))), wxPoint(250,50), wxDefaultSize, 0, _T("ID_STATICBITMAP1"));
	ListBox1 = new wxListBox(this, ID_LISTBOX1, wxPoint(300,325), wxSize(200,455), 0, 0, 0, wxDefaultValidator, _T("ID_LISTBOX1"));
	ListBox1->Append(wxEmptyString);
	ListBox1->Append(_("Espresso"));
	ListBox1->Append(_("Espresso Dopio"));
	ListBox1->Append(_("Flat white"));
	ListBox1->Append(_("Cafe mocha"));
	ListBox1->Append(_("Irish Cafe"));
	ListBox1->Append(_("Latte Macchiato"));
	ListBox1->Append(_("Herbata"));
	ListBox1->Append(_("Sex on the Beach"));
	ListBox1->Append(_("Smerf"));
	ListBox1->Append(_("Kamikadze"));
	ListBox1->Append(_("Red Gentelman"));
	ListBox1->Append(_("Tequila Sunrise"));
	ListBox1->Append(_("Tropical"));
	ListBox1->Append(_("Malibu Sunrise"));
	wxFont ListBox1Font(15,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Sans"),wxFONTENCODING_DEFAULT);
	ListBox1->SetFont(ListBox1Font);

	Connect(ID_LISTBOX1,wxEVT_COMMAND_LISTBOX_SELECTED,(wxObjectEventFunction)&Menu_okno::OnListBox1Select);
	//*)
}
/**
* Destruktor Menu_okno
*/
Menu_okno::~Menu_okno()
{
	//(*Destroy(Menu_okno)
	//*)
}
/**
* Metoda umozliwia wywolanie poszczegolnych okien dialogowych przypisanych do pozycji z menu
* Metoda jako argument przyjmuje obiekt zawierajacy szczegolowe informacje na temat zdarzenia
* Metoda nic nie zwraca
*/
void Menu_okno::OnListBox1Select(wxCommandEvent& event)
{
    int selected;
    selected = ListBox1->GetSelection();
    ListBox1->Deselect(0);
    if(selected == 1){
        Espresso okno(this);
        okno.ShowModal();
    }
    if(selected == 2){
        espresso_dopio okno(this);
        okno.ShowModal();
    }
    if(selected == 3){
        Flat_white okno(this);
        okno.ShowModal();
    }
    if(selected == 4){
        Cafe_mocha okno(this);
        okno.ShowModal();
    }
    if(selected == 5){
        Irish_Caffe okno(this);
        okno.ShowModal();
    }
    if(selected == 6){
        Latte_macchiato okno(this);
        okno.ShowModal();
    }
    if(selected == 7){
        Herbata okno(this);
        okno.ShowModal();
    }
    if(selected == 8){
        Sexonthebeach okno(this);
        okno.ShowModal();
    }
    if(selected == 9){
        Smerf okno(this);
        okno.ShowModal();
    }
    if(selected == 10){
        Kamikadze okno(this);
        okno.ShowModal();
    }
    if(selected == 11){
        RedGentelman okno(this);
        okno.ShowModal();
    }
    if(selected == 12){
        TequillaSunrise okno(this);
        okno.ShowModal();
    }
    if(selected == 13){
        Tropical okno(this);
        okno.ShowModal();
    }
    if(selected == 14){
        MalibuSunrise okno(this);
        okno.ShowModal();
    }
}
