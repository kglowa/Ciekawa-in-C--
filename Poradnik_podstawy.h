#ifndef PORADNIK_PODSTAWY_H
#define PORADNIK_PODSTAWY_H

#ifndef WX_PRECOMP
	//(*HeadersPCH(Poradnik_podstawy)
	#include <wx/dialog.h>
	#include <wx/stattext.h>
	//*)
#endif
//(*Headers(Poradnik_podstawy)
//*)
/**
* Deklaracja klasy opisujacej okno Poradnik_podstawy
*/
class Poradnik_podstawy: public wxDialog
{
	public:

		Poradnik_podstawy(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Poradnik_podstawy();

		//(*Declarations(Poradnik_podstawy)
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		//*)

	protected:

		//(*Identifiers(Poradnik_podstawy)
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		//*)

	private:

		//(*Handlers(Poradnik_podstawy)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
