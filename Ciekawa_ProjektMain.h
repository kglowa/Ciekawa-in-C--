/***************************************************************
 * Name:      Ciekawa_ProjektMain.h
 * Purpose:   Defines Application Frame
 * Author:    Kacper Głowacki & Michał Gizicki & Dawid Bujak ()
 * Created:   2021-01-15
 * Copyright: Kacper Głowacki & Michał Gizicki & Dawid Bujak ()
 * License:
 **************************************************************/

#ifndef CIEKAWA_PROJEKTMAIN_H
#define CIEKAWA_PROJEKTMAIN_H

//(*Headers(Ciekawa_ProjektFrame)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/statbmp.h>
#include <wx/statusbr.h>
//*)
/**
* Deklaracja klasy opisujacej okno Ciekawa_Projekt
*/
class Ciekawa_ProjektFrame: public wxFrame
{
    public:

        Ciekawa_ProjektFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~Ciekawa_ProjektFrame();

    private:

        //(*Handlers(Ciekawa_ProjektFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnMenuClick(wxCommandEvent& event);
        void OnZamowieniaClick(wxCommandEvent& event);
        void OnMagazynClick(wxCommandEvent& event);
        void OnPoradnikClick(wxCommandEvent& event);
        void OnMenuClick1(wxCommandEvent& event);
        void OnZamowieniaClick1(wxCommandEvent& event);
        void OnMagazynClick1(wxCommandEvent& event);
        void OnPoradnikClick1(wxCommandEvent& event);
        void OnClose(wxCloseEvent& event);
        //*)

        //(*Identifiers(Ciekawa_ProjektFrame)
        static const long ID_Menu;
        static const long ID_Zamowienia;
        static const long ID_Poradnik;
        static const long ID_STATICBITMAP1;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(Ciekawa_ProjektFrame)
        wxButton* Menu;
        wxButton* Poradnik;
        wxButton* Zamowienia;
        wxStaticBitmap* StaticBitmap1;
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // CIEKAWA_PROJEKTMAIN_H
