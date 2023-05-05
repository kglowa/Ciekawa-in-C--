#ifndef ESPRESSO_H
#define ESPRESSO_H

#ifndef WX_PRECOMP
	//(*HeadersPCH(Espresso)
	#include <wx/dialog.h>
	#include <wx/statbmp.h>
	#include <wx/stattext.h>
	//*)
#endif
//(*Headers(Espresso)
//*)
/**
* Deklaracja klasy opisujacej okno Espresso
*/
class Espresso: public wxDialog
{
	public:

		Espresso(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Espresso();

		//(*Declarations(Espresso)
		wxStaticBitmap* StaticBitmap1;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		//*)

	protected:

		//(*Identifiers(Espresso)
		static const long ID_STATICBITMAP1;
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		//*)

	private:

		//(*Handlers(Espresso)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
