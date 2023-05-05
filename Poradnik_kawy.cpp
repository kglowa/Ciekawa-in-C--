#include "wx_pch.h"
#include "Poradnik_kawy.h"
#include "Espresso.h"
#include "espresso_dopio.h"
#include "Flat_white.h"
#include "Cafe_mocha.h"
#include "Irish_Caffe.h"
#include "Latte_macchiato.h"
#include "Herbata.h"
#ifndef WX_PRECOMP
	//(*InternalHeadersPCH(Poradnik_kawy)
	#include <wx/string.h>
	#include <wx/intl.h>
	//*)
#endif
//(*InternalHeaders(Poradnik_kawy)
#include <wx/bitmap.h>
#include <wx/image.h>
//*)

//(*IdInit(Poradnik_kawy)
const long Poradnik_kawy::ID_STATICBITMAP1 = wxNewId();
const long Poradnik_kawy::ID_BUTTON1 = wxNewId();
const long Poradnik_kawy::ID_BUTTON2 = wxNewId();
const long Poradnik_kawy::ID_BUTTON3 = wxNewId();
const long Poradnik_kawy::ID_BUTTON4 = wxNewId();
const long Poradnik_kawy::ID_BUTTON5 = wxNewId();
const long Poradnik_kawy::ID_BUTTON6 = wxNewId();
const long Poradnik_kawy::ID_BUTTON7 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Poradnik_kawy,wxDialog)
	//(*EventTable(Poradnik_kawy)
	//*)
END_EVENT_TABLE()

Poradnik_kawy::Poradnik_kawy(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Poradnik_kawy)
	Create(parent, id, _("Pradnik kaw"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxSize(800,800));
	Move(wxDefaultPosition);
	SetMinSize(wxSize(800,800));
	SetMaxSize(wxSize(800,-1));
	SetBackgroundColour(wxColour(240,240,240));
	StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("/home/kacper/Pulpit/Ciekawa_Projekt/obrazki/ciekawa.png"))), wxPoint(250,50), wxDefaultSize, 0, _T("ID_STATICBITMAP1"));
	Button1 = new wxButton(this, ID_BUTTON1, _("Espresso"), wxPoint(300,300), wxSize(200,30), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	Button2 = new wxButton(this, ID_BUTTON2, _("Espresso Dopio"), wxPoint(300,350), wxSize(200,30), 0, wxDefaultValidator, _T("ID_BUTTON2"));
	Button3 = new wxButton(this, ID_BUTTON3, _("Flat white"), wxPoint(300,400), wxSize(200,30), 0, wxDefaultValidator, _T("ID_BUTTON3"));
	Button4 = new wxButton(this, ID_BUTTON4, _("Caffe mocha"), wxPoint(300,450), wxSize(200,30), 0, wxDefaultValidator, _T("ID_BUTTON4"));
	Button5 = new wxButton(this, ID_BUTTON5, _("Irish Caffe"), wxPoint(300,500), wxSize(200,30), 0, wxDefaultValidator, _T("ID_BUTTON5"));
	Button6 = new wxButton(this, ID_BUTTON6, _("Latte macchiato"), wxPoint(300,550), wxSize(200,30), 0, wxDefaultValidator, _T("ID_BUTTON6"));
	Button7 = new wxButton(this, ID_BUTTON7, _("Herbata"), wxPoint(300,600), wxSize(200,30), 0, wxDefaultValidator, _T("ID_BUTTON7"));

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Poradnik_kawy::OnButton1Click);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Poradnik_kawy::OnButton2Click);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Poradnik_kawy::OnButton3Click);
	Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Poradnik_kawy::OnButton4Click);
	Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Poradnik_kawy::OnButton5Click);
	Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Poradnik_kawy::OnButton6Click);
	Connect(ID_BUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Poradnik_kawy::OnButton7Click);
	//*)
}

Poradnik_kawy::~Poradnik_kawy()
{
	//(*Destroy(Poradnik_kawy)
	//*)
}





void Poradnik_kawy::OnButton1Click(wxCommandEvent& event)
{
     Espresso okno(this);
    okno.ShowModal();
}

void Poradnik_kawy::OnButton2Click(wxCommandEvent& event)
{
    espresso_dopio okno(this);
    okno.ShowModal();
}

void Poradnik_kawy::OnButton3Click(wxCommandEvent& event)
{
    Flat_white okno(this);
    okno.ShowModal();
}

void Poradnik_kawy::OnButton4Click(wxCommandEvent& event)
{
    Cafe_mocha okno(this);
    okno.ShowModal();
}

void Poradnik_kawy::OnButton5Click(wxCommandEvent& event)
{
     Irish_Caffe okno(this);
    okno.ShowModal();
}

void Poradnik_kawy::OnButton6Click(wxCommandEvent& event)
{
    Latte_macchiato okno(this);
    okno.ShowModal();
}

void Poradnik_kawy::OnButton7Click(wxCommandEvent& event)
{
    Herbata okno(this);
    okno.ShowModal();
}
