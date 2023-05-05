#ifndef CAFE_MOCHA_H
#define CAFE_MOCHA_H

#ifndef WX_PRECOMP
	//(*HeadersPCH(Cafe_mocha)
	#include <wx/dialog.h>
	#include <wx/statbmp.h>
	#include <wx/stattext.h>
	//*)
#endif
//(*Headers(Cafe_mocha)
//*)
/**
* Deklaracja klasy opisujacej okno Cafe_mocha
*/
class Cafe_mocha: public wxDialog
{
	public:

		Cafe_mocha(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Cafe_mocha();

		//(*Declarations(Cafe_mocha)
		wxStaticBitmap* StaticBitmap1;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		//*)

	protected:

		//(*Identifiers(Cafe_mocha)
		static const long ID_STATICBITMAP1;
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		//*)

	private:

		//(*Handlers(Cafe_mocha)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
