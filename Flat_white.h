#ifndef FLAT_WHITE_H
#define FLAT_WHITE_H

#ifndef WX_PRECOMP
	//(*HeadersPCH(Flat_white)
	#include <wx/dialog.h>
	#include <wx/statbmp.h>
	#include <wx/stattext.h>
	//*)
#endif
//(*Headers(Flat_white)
//*)
/**
* Deklaracja klasy opisujacej okno  Flat_white
*/
class Flat_white: public wxDialog
{
	public:

		Flat_white(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Flat_white();

		//(*Declarations(Flat_white)
		wxStaticBitmap* StaticBitmap1;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		//*)

	protected:

		//(*Identifiers(Flat_white)
		static const long ID_STATICBITMAP1;
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		//*)

	private:

		//(*Handlers(Flat_white)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
