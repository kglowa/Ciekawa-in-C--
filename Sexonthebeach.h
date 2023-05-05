#ifndef SEXONTHEBEACH_H
#define SEXONTHEBEACH_H

#ifndef WX_PRECOMP
	//(*HeadersPCH(Sexonthebeach)
	#include <wx/dialog.h>
	#include <wx/stattext.h>
	//*)
#endif
//(*Headers(Sexonthebeach)
//*)
/**
* Deklaracja klasy opisujacej okno Sexonthebeach
*/
class Sexonthebeach: public wxDialog
{
	public:

		Sexonthebeach(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Sexonthebeach();

		//(*Declarations(Sexonthebeach)
		wxStaticText* StaticText1;
		//*)

	protected:

		//(*Identifiers(Sexonthebeach)
		static const long ID_STATICTEXT1;
		//*)

	private:

		//(*Handlers(Sexonthebeach)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
