#ifndef ZAMOWIENIA_OKNO_H
#define ZAMOWIENIA_OKNO_H

#ifndef WX_PRECOMP
	//(*HeadersPCH(Zamowienia_okno)
	#include <wx/button.h>
	#include <wx/dialog.h>
	#include <wx/listbox.h>
	#include <wx/statbmp.h>
	#include <wx/statbox.h>
	#include <wx/textctrl.h>
	//*)
#endif
//(*Headers(Zamowienia_okno)
//*)
/**
* Deklaracja klasy opisujacej okno Zamowienia_okno
*/
class Zamowienia_okno: public wxDialog
{
	public:

		Zamowienia_okno(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Zamowienia_okno();

		//(*Declarations(Zamowienia_okno)
		wxButton* Button1;
		wxButton* Button2;
		wxListBox* ListBox1;
		wxListBox* ListBox2;
		wxListBox* ListBox3;
		wxListBox* ListBox4;
		wxStaticBitmap* StaticBitmap1;
		wxStaticBox* StaticBox1;
		wxStaticBox* StaticBox2;
		wxStaticBox* StaticBox3;
		wxStaticBox* StaticBox4;
		wxTextCtrl* TextCtrl1;
		wxTextCtrl* TextCtrl2;
		//*)

	protected:

		//(*Identifiers(Zamowienia_okno)
		static const long ID_STATICBITMAP1;
		static const long ID_LISTBOX1;
		static const long ID_BUTTON1;
		static const long ID_STATICBOX1;
		static const long ID_STATICBOX2;
		static const long ID_LISTBOX2;
		static const long ID_TEXTCTRL1;
		static const long ID_TEXTCTRL2;
		static const long ID_LISTBOX3;
		static const long ID_LISTBOX4;
		static const long ID_BUTTON2;
		static const long ID_STATICBOX3;
		static const long ID_STATICBOX4;
		//*)

	private:

		//(*Handlers(Zamowienia_okno)
		void OnButton1Click(wxCommandEvent& event);
		void OnListBox1Select(wxCommandEvent& event);
		void OnButton1Click1(wxCommandEvent& event);
		void OnCheckListBox1Toggled(wxCommandEvent& event);
		void OnListBox2Select(wxCommandEvent& event);
		void OnButton2Click(wxCommandEvent& event);
		void OnButton2Click1(wxCommandEvent& event);
		void OnListBox4Select(wxCommandEvent& event);
		void OnListBox3Select(wxCommandEvent& event);
		void OnButton2Click2(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
