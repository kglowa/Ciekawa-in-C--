#include "wx_pch.h"
#include "Zamowienia_okno.h"
#ifndef WX_PRECOMP
	//(*InternalHeadersPCH(Zamowienia_okno)
	#include <wx/intl.h>
	#include <wx/string.h>
	//*)
#endif
//(*InternalHeaders(Zamowienia_okno)
#include <wx/bitmap.h>
#include <wx/image.h>
//*)

//(*IdInit(Zamowienia_okno)
const long Zamowienia_okno::ID_STATICBITMAP1 = wxNewId();
const long Zamowienia_okno::ID_LISTBOX1 = wxNewId();
const long Zamowienia_okno::ID_BUTTON1 = wxNewId();
const long Zamowienia_okno::ID_STATICBOX1 = wxNewId();
const long Zamowienia_okno::ID_STATICBOX2 = wxNewId();
const long Zamowienia_okno::ID_LISTBOX2 = wxNewId();
const long Zamowienia_okno::ID_TEXTCTRL1 = wxNewId();
const long Zamowienia_okno::ID_TEXTCTRL2 = wxNewId();
const long Zamowienia_okno::ID_LISTBOX3 = wxNewId();
const long Zamowienia_okno::ID_LISTBOX4 = wxNewId();
const long Zamowienia_okno::ID_BUTTON2 = wxNewId();
const long Zamowienia_okno::ID_STATICBOX3 = wxNewId();
const long Zamowienia_okno::ID_STATICBOX4 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Zamowienia_okno,wxDialog)
	//(*EventTable(Zamowienia_okno)
	//*)
END_EVENT_TABLE()
/**
* Konstruktor Zamowienia_okno
* Przyjmujacy jako argumenty wskaznik na nadrzedny element okna, identyfikator okna, wymiary okna,
* wspolrzedne lewego gornego okna obiektu w stosunku do obiektu nadrzednego
*/
Zamowienia_okno::Zamowienia_okno(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Zamowienia_okno)
	Create(parent, id, _("Zamowienia"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxSize(800,800));
	Move(wxDefaultPosition);
	SetMinSize(wxSize(800,800));
	SetMaxSize(wxSize(800,800));
	SetBackgroundColour(wxColour(240,240,240));
	StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("/home/kacper/Pulpit/Ciekawa_Projekt/obrazki/ciekawa.png"))), wxPoint(250,50), wxDefaultSize, 0, _T("ID_STATICBITMAP1"));
	ListBox1 = new wxListBox(this, ID_LISTBOX1, wxPoint(50,360), wxSize(150,360), 0, 0, 0, wxDefaultValidator, _T("ID_LISTBOX1"));
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
	Button1 = new wxButton(this, ID_BUTTON1, _("Dodaj ->"), wxPoint(230,575), wxSize(120,30), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	StaticBox1 = new wxStaticBox(this, ID_STATICBOX1, _("MENU"), wxPoint(30,330), wxSize(190,400), 0, _T("ID_STATICBOX1"));
	StaticBox2 = new wxStaticBox(this, ID_STATICBOX2, _("Zamowienie"), wxPoint(360,330), wxSize(184,400), 0, _T("ID_STATICBOX2"));
	ListBox2 = new wxListBox(this, ID_LISTBOX2, wxPoint(380,360), wxSize(150,360), 0, 0, 0, wxDefaultValidator, _T("ID_LISTBOX2"));
	ListBox2->Append(wxEmptyString);
	TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, _("Numer stolika"), wxPoint(232,525), wxSize(120,30), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	TextCtrl2 = new wxTextCtrl(this, ID_TEXTCTRL2, _("Ilosc"), wxPoint(232,475), wxSize(120,30), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	ListBox3 = new wxListBox(this, ID_LISTBOX3, wxPoint(560,360), wxSize(50,360), 0, 0, 0, wxDefaultValidator, _T("ID_LISTBOX3"));
	ListBox3->Append(wxEmptyString);
	ListBox4 = new wxListBox(this, ID_LISTBOX4, wxPoint(640,360), wxSize(112,360), 0, 0, 0, wxDefaultValidator, _T("ID_LISTBOX4"));
	ListBox4->Append(wxEmptyString);
	Button2 = new wxButton(this, ID_BUTTON2, _("Wyczysc"), wxPoint(232,624), wxSize(120,30), 0, wxDefaultValidator, _T("ID_BUTTON2"));
	StaticBox3 = new wxStaticBox(this, ID_STATICBOX3, _("Numer Stolika"), wxPoint(632,336), wxSize(128,400), 0, _T("ID_STATICBOX3"));
	StaticBox4 = new wxStaticBox(this, ID_STATICBOX4, _("Ilosc"), wxPoint(552,336), wxSize(72,400), 0, _T("ID_STATICBOX4"));

	Connect(ID_LISTBOX1,wxEVT_COMMAND_LISTBOX_SELECTED,(wxObjectEventFunction)&Zamowienia_okno::OnListBox1Select);
	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Zamowienia_okno::OnButton1Click1);
	Connect(ID_LISTBOX2,wxEVT_COMMAND_LISTBOX_SELECTED,(wxObjectEventFunction)&Zamowienia_okno::OnListBox2Select);
	Connect(ID_LISTBOX3,wxEVT_COMMAND_LISTBOX_SELECTED,(wxObjectEventFunction)&Zamowienia_okno::OnListBox3Select);
	Connect(ID_LISTBOX4,wxEVT_COMMAND_LISTBOX_SELECTED,(wxObjectEventFunction)&Zamowienia_okno::OnListBox4Select);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Zamowienia_okno::OnButton2Click2);
	//*)
}
/**
* Destruktor Cafe_mocha
*/
Zamowienia_okno::~Zamowienia_okno()
{
	//(*Destroy(Zamowienia_okno)
	//*)
}
/**
* Metoda umozliwia dodanie wybranych pozycji menu do zamowienia przypisujac im ilosc i numer stolika
* Metoda jako argument przyjmuje obiekt zawierajacy szczegolowe informacje na temat zdarzenia
* Metoda nic nie zwraca
*/
void Zamowienia_okno::OnButton1Click1(wxCommandEvent& event)
{
    std::string nr_stolik = TextCtrl1->GetValue().ToStdString();
    std::string ilosc = TextCtrl2->GetValue().ToStdString();
    int selected;
    selected = ListBox1->GetSelection();

    switch(selected){
    case 1:
        ListBox2->Append(_("Espresso"));
        ListBox4->Append(_(nr_stolik));
        ListBox3->Append(_(ilosc));
    break;
    case 2:
        ListBox2->Append(_("Espresso Dopio"));
        ListBox4->Append(_(nr_stolik));
        ListBox3->Append(_(ilosc));;
    break;
    case 3:
        ListBox2->Append(_("Flat white"));
        ListBox4->Append(_(nr_stolik));
        ListBox3->Append(_(ilosc));
    break;
    case 4:
        ListBox2->Append(_("Cafe Mocha"));
        ListBox4->Append(_(nr_stolik));
        ListBox3->Append(_(ilosc));
    break;
    case 5:
        ListBox2->Append(_("Irish Cafe"));
        ListBox4->Append(_(nr_stolik));
        ListBox3->Append(_(ilosc));
     break;
    case 6:
        ListBox2->Append(_("Latte Macchiato"));
        ListBox4->Append(_(nr_stolik));
        ListBox3->Append(_(ilosc));
    break;
    case 7:
        ListBox2->Append(_("Herbata"));
        ListBox4->Append(_(nr_stolik));
        ListBox3->Append(_(ilosc));
    break;
    case 8:
        ListBox2->Append(_("Sex on the beach"));
        ListBox4->Append(_(nr_stolik));
        ListBox3->Append(_(ilosc));
    break;
    case 9:
        ListBox2->Append(_("Smerf"));
        ListBox4->Append(_(nr_stolik));
        ListBox3->Append(_(ilosc));
    break;
    case 10:
        ListBox2->Append(_("Kamikadze"));
        ListBox4->Append(_(nr_stolik));
        ListBox3->Append(_(ilosc));
    break;
    case 11:
        ListBox2->Append(_("Red Gentelman"));
        ListBox4->Append(_(nr_stolik));
        ListBox3->Append(_(ilosc));
    break;
    case 12:
        ListBox2->Append(_("Tequila Sunrise"));
        ListBox4->Append(_(nr_stolik));
        ListBox3->Append(_(ilosc));
    break;
    case 13:
        ListBox2->Append(_("Tropical"));
        ListBox4->Append(_(nr_stolik));
        ListBox3->Append(_(ilosc));
    break;
    case 14:
        ListBox2->Append(_("Malibu Sunrise"));
        ListBox4->Append(_(nr_stolik));
        ListBox3->Append(_(ilosc));
    break;
    }
}
/**
* Metoda umozliwia wyczysczenie pol tekstowych
* Metoda jako argument przyjmuje obiekt zawierajacy szczegolowe informacje na temat zdarzenia
* Metoda nic nie zwraca
*/
void Zamowienia_okno::OnButton2Click2(wxCommandEvent& event)
{
    ListBox2->Clear();
    ListBox3->Clear();
    ListBox4->Clear();
}
