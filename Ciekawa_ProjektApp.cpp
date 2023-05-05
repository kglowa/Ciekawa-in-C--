/***************************************************************
 * Name:      Ciekawa_ProjektApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Kacper Głowacki & Michał Gizicki & Dawid Bujak ()
 * Created:   2021-01-15
 * Copyright: Kacper Głowacki & Michał Gizicki & Dawid Bujak ()
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "Ciekawa_ProjektApp.h"

//(*AppHeaders
#include "Ciekawa_ProjektMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(Ciekawa_ProjektApp);
/**
* Metoda inicjująca aplikację
* Nie przujmuje zadnych argumentow
* Metoda zwraca zmienną wxsOk przechowujaca informacje o powodzeniu utworzenia okna aplikacji
*/
bool Ciekawa_ProjektApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	Ciekawa_ProjektFrame* Frame = new Ciekawa_ProjektFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
