#include "wx_pch.h"
#include "Irish_Caffe.h"

#ifndef WX_PRECOMP
	//(*InternalHeadersPCH(Irish_Caffe)
	#include <wx/string.h>
	#include <wx/intl.h>
	//*)
#endif
//(*InternalHeaders(Irish_Caffe)
#include <wx/bitmap.h>
#include <wx/image.h>
//*)

//(*IdInit(Irish_Caffe)
const long Irish_Caffe::ID_STATICBITMAP1 = wxNewId();
const long Irish_Caffe::ID_STATICTEXT1 = wxNewId();
const long Irish_Caffe::ID_STATICTEXT2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Irish_Caffe,wxDialog)
	//(*EventTable(Irish_Caffe)
	//*)
END_EVENT_TABLE()
/**
* Konstruktor Irish_Caff
* Przyjmujacy jako argumenty wskaznik na nadrzedny element okna, identyfikator okna, wymiary okna,
* wspolrzedne lewego gornego okna obiektu w stosunku do obiektu nadrzednego
*/
Irish_Caffe::Irish_Caffe(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Irish_Caffe)
	Create(parent, id, _("Irish Cafe"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxSize(500,500));
	Move(wxDefaultPosition);
	SetMinSize(wxSize(500,500));
	SetMaxSize(wxSize(500,500));
	SetBackgroundColour(wxColour(240,240,240));
	StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("/home/kacper/Pulpit/Ciekawa_Projekt/obrazki/kawy/irish_caffe.png"))), wxPoint(120,50), wxDefaultSize, 0, _T("ID_STATICBITMAP1"));
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("-pojedyncza kolba\n- pierwszy przycisk na ekspresie\n- 50ml irlandzkiej whiskey\n- mleko lekko spienione\n- na wierzch bita smietana"), wxPoint(5,320), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Przed przygotowaniem kaw nalezy przepusic wrzatek przez ekspres\n Po wykonaniu kawy nalezy przetrzec spieniacz do mleka"), wxPoint(5,420), wxSize(459,52), 0, _T("ID_STATICTEXT2"));
	//*)
}
/**
* Destruktor Irish_Caff
*/
Irish_Caffe::~Irish_Caffe()
{
	//(*Destroy(Irish_Caffe)
	//*)
}

