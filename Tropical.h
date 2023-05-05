#ifndef TROPICAL_H
#define TROPICAL_H

#ifndef WX_PRECOMP
	//(*HeadersPCH(Tropical)
	#include <wx/dialog.h>
	#include <wx/stattext.h>
	//*)
#endif
//(*Headers(Tropical)
//*)
/**
* Deklaracja klasy opisujacej okno Tropical
*/
class Tropical: public wxDialog
{
	public:

		Tropical(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Tropical();

		//(*Declarations(Tropical)
		wxStaticText* StaticText1;
		//*)

	protected:

		//(*Identifiers(Tropical)
		static const long ID_STATICTEXT1;
		//*)

	private:

		//(*Handlers(Tropical)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
