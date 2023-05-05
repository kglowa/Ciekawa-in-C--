#ifndef MALIBUSUNRISE_H
#define MALIBUSUNRISE_H

#ifndef WX_PRECOMP
	//(*HeadersPCH(MalibuSunrise)
	#include <wx/dialog.h>
	#include <wx/stattext.h>
	//*)
#endif
//(*Headers(MalibuSunrise)
//*)
/**
* Deklaracja klasy opisujacej okno MalibuSunrise
*/
class MalibuSunrise: public wxDialog
{
	public:

		MalibuSunrise(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~MalibuSunrise();

		//(*Declarations(MalibuSunrise)
		wxStaticText* StaticText1;
		//*)

	protected:

		//(*Identifiers(MalibuSunrise)
		static const long ID_STATICTEXT1;
		//*)

	private:

		//(*Handlers(MalibuSunrise)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
