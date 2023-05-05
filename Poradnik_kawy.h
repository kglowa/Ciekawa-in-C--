#ifndef PORADNIK_KAWY_H
#define PORADNIK_KAWY_H

#ifndef WX_PRECOMP
	//(*HeadersPCH(Poradnik_kawy)
	#include <wx/button.h>
	#include <wx/dialog.h>
	#include <wx/statbmp.h>
	//*)
#endif
//(*Headers(Poradnik_kawy)
//*)

class Poradnik_kawy: public wxDialog
{
	public:

		Poradnik_kawy(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Poradnik_kawy();

		//(*Declarations(Poradnik_kawy)
		wxButton* Button1;
		wxButton* Button2;
		wxButton* Button3;
		wxButton* Button4;
		wxButton* Button5;
		wxButton* Button6;
		wxButton* Button7;
		wxStaticBitmap* StaticBitmap1;
		//*)

	protected:

		//(*Identifiers(Poradnik_kawy)
		static const long ID_STATICBITMAP1;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_BUTTON3;
		static const long ID_BUTTON4;
		static const long ID_BUTTON5;
		static const long ID_BUTTON6;
		static const long ID_BUTTON7;
		//*)

	private:

		//(*Handlers(Poradnik_kawy)
		void OnButton1Click(wxCommandEvent& event);
		void OnButton2Click(wxCommandEvent& event);
		void OnButton3Click(wxCommandEvent& event);
		void OnButton4Click(wxCommandEvent& event);
		void OnButton5Click(wxCommandEvent& event);
		void OnButton6Click(wxCommandEvent& event);
		void OnButton7Click(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
