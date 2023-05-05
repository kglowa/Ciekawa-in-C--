#ifndef LATTE_MACCHIATO_H
#define LATTE_MACCHIATO_H

#ifndef WX_PRECOMP
	//(*HeadersPCH(Latte_macchiato)
	#include <wx/dialog.h>
	#include <wx/statbmp.h>
	#include <wx/stattext.h>
	//*)
#endif
//(*Headers(Latte_macchiato)
//*)
/**
* Deklaracja klasy opisujacej okno Latte_macchiato
*/
class Latte_macchiato: public wxDialog
{
	public:

		Latte_macchiato(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Latte_macchiato();

		//(*Declarations(Latte_macchiato)
		wxStaticBitmap* StaticBitmap1;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		//*)

	protected:

		//(*Identifiers(Latte_macchiato)
		static const long ID_STATICBITMAP1;
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		//*)

	private:

		//(*Handlers(Latte_macchiato)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
