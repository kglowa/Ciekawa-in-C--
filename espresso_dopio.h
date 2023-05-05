#ifndef ESPRESSO_DOPIO_H
#define ESPRESSO_DOPIO_H

#ifndef WX_PRECOMP
	//(*HeadersPCH(espresso_dopio)
	#include <wx/dialog.h>
	#include <wx/statbmp.h>
	#include <wx/stattext.h>
	//*)
#endif
//(*Headers(espresso_dopio)
//*)
/**
* Deklaracja klasy opisujacej okno espresso_dopio
*/
class espresso_dopio: public wxDialog
{
	public:

		espresso_dopio(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~espresso_dopio();

		//(*Declarations(espresso_dopio)
		wxStaticBitmap* StaticBitmap1;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		//*)

	protected:

		//(*Identifiers(espresso_dopio)
		static const long ID_STATICBITMAP1;
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		//*)

	private:

		//(*Handlers(espresso_dopio)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
