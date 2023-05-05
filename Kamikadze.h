#ifndef KAMIKADZE_H
#define KAMIKADZE_H

#ifndef WX_PRECOMP
	//(*HeadersPCH(Kamikadze)
	#include <wx/dialog.h>
	#include <wx/stattext.h>
	//*)
#endif
//(*Headers(Kamikadze)
//*)
/**
* Deklaracja klasy opisujacej okno Kamikadze
*/
class Kamikadze: public wxDialog
{
	public:

		Kamikadze(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Kamikadze();

		//(*Declarations(Kamikadze)
		wxStaticText* StaticText1;
		//*)

	protected:

		//(*Identifiers(Kamikadze)
		static const long ID_STATICTEXT1;
		//*)

	private:

		//(*Handlers(Kamikadze)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
