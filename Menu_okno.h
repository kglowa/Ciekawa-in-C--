#ifndef MENU_OKNO_H
#define MENU_OKNO_H

#ifndef WX_PRECOMP
	//(*HeadersPCH(Menu_okno)
	#include <wx/dialog.h>
	#include <wx/listbox.h>
	#include <wx/statbmp.h>
	//*)
#endif
//(*Headers(Menu_okno)
//*)
/**
* Deklaracja klasy opisujacej okno Menu_okno
*/
class Menu_okno: public wxDialog
{
	public:

		Menu_okno(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Menu_okno();

		//(*Declarations(Menu_okno)
		wxListBox* ListBox1;
		wxStaticBitmap* StaticBitmap1;
		//*)

	protected:

		//(*Identifiers(Menu_okno)
		static const long ID_STATICBITMAP1;
		static const long ID_LISTBOX1;
		//*)

	private:

		//(*Handlers(Menu_okno)
		void OnListBox1Select(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
