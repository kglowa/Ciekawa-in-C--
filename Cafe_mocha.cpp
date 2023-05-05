#include "wx_pch.h"
#include "Cafe_mocha.h"

#ifndef WX_PRECOMP
	//(*InternalHeadersPCH(Cafe_mocha)
	#include <wx/string.h>
	#include <wx/intl.h>
	//*)
#endif
//(*InternalHeaders(Cafe_mocha)
#include <wx/bitmap.h>
#include <wx/image.h>
//*)

//(*IdInit(Cafe_mocha)
const long Cafe_mocha::ID_STATICBITMAP1 = wxNewId();
const long Cafe_mocha::ID_STATICTEXT1 = wxNewId();
const long Cafe_mocha::ID_STATICTEXT2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Cafe_mocha,wxDialog)
	//(*EventTable(Cafe_mocha)
	//*)
END_EVENT_TABLE()
/**
* Konstruktor Cafe_mocha
* Przyjmujacy jako argumenty wskaznik na nadrzedny element okna, identyfikator okna, wymiary okna,
* wspolrzedne lewego gornego okna obiektu w stosunku do obiektu nadrzednego
*/
Cafe_mocha::Cafe_mocha(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Cafe_mocha)
	Create(parent, id, _("Cafe mocha"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxSize(500,500));
	Move(wxDefaultPosition);
	SetMinSize(wxSize(500,500));
	SetMaxSize(wxSize(500,500));
	SetBackgroundColour(wxColour(240,240,240));
	StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("/home/kacper/Pulpit/Ciekawa_Projekt/obrazki/kawy/caffe_mocha.png"))), wxPoint(120,50), wxDefaultSize, 0, _T("ID_STATICBITMAP1"));
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("- podwojna kolba\n-drugi przycisk na ekspresie\n-mleko lekko spienione, podgrzane\n- lyzka czekolady\n- na wierzch bita smietana"), wxPoint(5,350), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Przed przygotowaniem kaw nalezy przepusic wrzatek przez ekspres\n Po wykonaniu kawy nalezy przetrzec spieniacz do mleka"), wxPoint(5,450), wxSize(475,46), 0, _T("ID_STATICTEXT2"));
	//*)
}
/**
* Destruktor Cafe_mocha
*/
Cafe_mocha::~Cafe_mocha()
{
	//(*Destroy(Cafe_mocha)
	//*)
}

