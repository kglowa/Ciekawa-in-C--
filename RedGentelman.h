#ifndef REDGENTELMAN_H
#define REDGENTELMAN_H

#ifndef WX_PRECOMP
	//(*HeadersPCH(RedGentelman)
	#include <wx/dialog.h>
	#include <wx/stattext.h>
	//*)
#endif
//(*Headers(RedGentelman)
//*)
/**
* Deklaracja klasy opisujacej okno RedGentelman
*/
class RedGentelman: public wxDialog
{
	public:

		RedGentelman(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~RedGentelman();

		//(*Declarations(RedGentelman)
		wxStaticText* StaticText1;
		//*)

	protected:

		//(*Identifiers(RedGentelman)
		static const long ID_STATICTEXT1;
		//*)

	private:

		//(*Handlers(RedGentelman)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
