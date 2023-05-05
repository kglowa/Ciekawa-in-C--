/***************************************************************
 * Name:      Ciekawa_ProjektMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Kacper Głowacki & Michał Gizicki & Dawid Bujak ()
 * Created:   2021-01-15
 * Copyright: Kacper Głowacki & Michał Gizicki & Dawid Bujak ()
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "Ciekawa_ProjektMain.h"
#include <wx/msgdlg.h>
#include "Menu_okno.h"
#include "Zamowienia_okno.h"
#include "Poradnik_podstawy.h"

//(*InternalHeaders(Ciekawa_ProjektFrame)
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(Ciekawa_ProjektFrame)
const long Ciekawa_ProjektFrame::ID_Menu = wxNewId();
const long Ciekawa_ProjektFrame::ID_Zamowienia = wxNewId();
const long Ciekawa_ProjektFrame::ID_Poradnik = wxNewId();
const long Ciekawa_ProjektFrame::ID_STATICBITMAP1 = wxNewId();
const long Ciekawa_ProjektFrame::idMenuQuit = wxNewId();
const long Ciekawa_ProjektFrame::idMenuAbout = wxNewId();
const long Ciekawa_ProjektFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Ciekawa_ProjektFrame,wxFrame)
    //(*EventTable(Ciekawa_ProjektFrame)
    //*)
END_EVENT_TABLE()
/**
* Konstruktor Ciekawa_ProjektFrame
* Przyjmujacy jako argumenty wskaznik na nadrzedny element okna, identyfikator okna
*/
Ciekawa_ProjektFrame::Ciekawa_ProjektFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(Ciekawa_ProjektFrame)
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, wxID_ANY, _("Ciekawa"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    SetClientSize(wxSize(800,800));
    SetMinSize(wxSize(800,800));
    SetMaxSize(wxSize(800,800));
    Menu = new wxButton(this, ID_Menu, _("Menu"), wxPoint(300,350), wxSize(200,50), 0, wxDefaultValidator, _T("ID_Menu"));
    Zamowienia = new wxButton(this, ID_Zamowienia, _("Zamowienia"), wxPoint(300,450), wxSize(200,50), 0, wxDefaultValidator, _T("ID_Zamowienia"));
    Poradnik = new wxButton(this, ID_Poradnik, _("Nowi pracownicy"), wxPoint(300,550), wxSize(200,50), 0, wxDefaultValidator, _T("ID_Poradnik"));
    StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("/home/kacper/Pulpit/Ciekawa_Projekt/obrazki/ciekawa.png"))), wxPoint(250,50), wxDefaultSize, 0, _T("ID_STATICBITMAP1"));
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);

    Connect(ID_Menu,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Ciekawa_ProjektFrame::OnMenuClick1);
    Connect(ID_Zamowienia,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Ciekawa_ProjektFrame::OnZamowieniaClick1);
    Connect(ID_Poradnik,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Ciekawa_ProjektFrame::OnPoradnikClick1);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Ciekawa_ProjektFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Ciekawa_ProjektFrame::OnAbout);
    Connect(wxID_ANY,wxEVT_CLOSE_WINDOW,(wxObjectEventFunction)&Ciekawa_ProjektFrame::OnClose);
    //*)
}
/**
* Destruktor Ciekawa_ProjektFrame
*/
Ciekawa_ProjektFrame::~Ciekawa_ProjektFrame()
{
    //(*Destroy(Ciekawa_ProjektFrame)
    //*)
}
/**
* Metoda umozliwia zamkniecie glownego okna programu z poziomu paska Menu
* Metoda jako argument przyjmuje obiekt zawierajacy szczegolowe informacje na temat zdarzenia
* Metoda nic nie zwraca
*/
void Ciekawa_ProjektFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}
/**
* Metoda umozliwia otworzenie okna przechowujacego informacje na temat biblioteki wxWidgets
* Metoda jako argument przyjmuje obiekt zawierajacy szczegolowe informacje na temat zdarzenia
* Metoda nic nie zwraca
*/
void Ciekawa_ProjektFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}
/**
* Metoda umozliwia otworzenie nowego okna dialogowego "Menu_okno"
* Metoda jako argument przyjmuje obiekt zawierajacy szczegolowe informacje na temat zdarzenia
* Metoda nic nie zwraca
*/
void Ciekawa_ProjektFrame::OnMenuClick1(wxCommandEvent& event)
{
    Menu_okno okno(this);
    okno.ShowModal();
}
/**
* Metoda umozliwia otworzenie nowego okna dialogowego "Zamowienia_okno"
* Metoda jako argument przyjmuje obiekt zawierajacy szczegolowe informacje na temat zdarzenia
* Metoda nic nie zwraca
*/
void Ciekawa_ProjektFrame::OnZamowieniaClick1(wxCommandEvent& event)
{
    Zamowienia_okno okno(this);
    okno.ShowModal();
}
/**
* Metoda umozliwia otworzenie nowego okna dialogowego "Poradnik_podstawy"
* Metoda jako argument przyjmuje obiekt zawierajacy szczegolowe informacje na temat zdarzenia
* Metoda nic nie zwraca
*/
void Ciekawa_ProjektFrame::OnPoradnikClick1(wxCommandEvent& event)
{
    Poradnik_podstawy okno(this);
    okno.ShowModal();
}
/**
* Metoda umozliwia zamkniecie glownego okna programu
* Metoda jako argument przyjmuje obiekt zawierajacy szczegolowe informacje na temat zdarzenia
* Metoda nic nie zwraca
*/
void Ciekawa_ProjektFrame::OnClose(wxCloseEvent& event)
{
    Destroy();
}
