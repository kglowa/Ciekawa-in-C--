#ifndef TEQUILLASUNRISE_H
#define TEQUILLASUNRISE_H

#ifndef WX_PRECOMP
	//(*HeadersPCH(TequillaSunrise)
	#include <wx/dialog.h>
	#include <wx/stattext.h>
	//*)
#endif
//(*Headers(TequillaSunrise)
//*)
/**
* Deklaracja klasy opisujacej okno TequillaSunrise
*/
class TequillaSunrise: public wxDialog
{
	public:

		TequillaSunrise(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~TequillaSunrise();

		//(*Declarations(TequillaSunrise)
		wxStaticText* StaticText1;
		//*)

	protected:

		//(*Identifiers(TequillaSunrise)
		static const long ID_STATICTEXT1;
		//*)

	private:

		//(*Handlers(TequillaSunrise)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
