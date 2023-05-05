#ifndef HERBATA_H
#define HERBATA_H

#ifndef WX_PRECOMP
	//(*HeadersPCH(Herbata)
	#include <wx/dialog.h>
	#include <wx/statbmp.h>
	#include <wx/stattext.h>
	//*)
#endif
//(*Headers(Herbata)
//*)
/**
* Deklaracja klasy opisujacej okno Herbata
*/
class Herbata: public wxDialog
{
	public:

		Herbata(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Herbata();

		//(*Declarations(Herbata)
		wxStaticBitmap* StaticBitmap1;
		wxStaticText* StaticText2;
		//*)

	protected:

		//(*Identifiers(Herbata)
		static const long ID_STATICBITMAP1;
		static const long ID_STATICTEXT2;
		//*)

	private:

		//(*Handlers(Herbata)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
