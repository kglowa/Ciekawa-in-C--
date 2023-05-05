/***************************************************************
 * Name:      Ciekawa_ProjektApp.h
 * Purpose:   Defines Application Class
 * Author:    Kacper Głowacki & Michał Gizicki & Dawid Bujak ()
 * Created:   2021-01-15
 * Copyright: Kacper Głowacki & Michał Gizicki & Dawid Bujak ()
 * License:
 **************************************************************/

#ifndef CIEKAWA_PROJEKTAPP_H
#define CIEKAWA_PROJEKTAPP_H

#include <wx/app.h>
/**
* Deklaracja klasy opisujacej okno Ciekawa_Projekt
*/
class Ciekawa_ProjektApp : public wxApp
{
    public:
        virtual bool OnInit();
};

#endif // CIEKAWA_PROJEKTAPP_H
