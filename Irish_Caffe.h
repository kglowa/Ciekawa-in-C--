#ifndef IRISH_CAFFE_H
#define IRISH_CAFFE_H

#ifndef WX_PRECOMP
	//(*HeadersPCH(Irish_Caffe)
	#include <wx/dialog.h>
	#include <wx/statbmp.h>
	#include <wx/stattext.h>
	//*)
#endif
//(*Headers(Irish_Caffe)
//*)
/**
* Deklaracja klasy opisujacej okno Irish_Caffe
*/
class Irish_Caffe: public wxDialog
{
	public:

		Irish_Caffe(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Irish_Caffe();

		//(*Declarations(Irish_Caffe)
		wxStaticBitmap* StaticBitmap1;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		//*)

	protected:

		//(*Identifiers(Irish_Caffe)
		static const long ID_STATICBITMAP1;
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		//*)

	private:

		//(*Handlers(Irish_Caffe)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
