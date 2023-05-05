#ifndef SMERF_H
#define SMERF_H

#ifndef WX_PRECOMP
	//(*HeadersPCH(Smerf)
	#include <wx/dialog.h>
	#include <wx/stattext.h>
	//*)
#endif
//(*Headers(Smerf)
//*)
/**
* Deklaracja klasy opisujacej okno Smerf
*/
class Smerf: public wxDialog
{
	public:

		Smerf(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Smerf();

		//(*Declarations(Smerf)
		wxStaticText* StaticText2;
		//*)

	protected:

		//(*Identifiers(Smerf)
		static const long ID_STATICTEXT2;
		//*)

	private:

		//(*Handlers(Smerf)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
