#pragma once  //______________________________________ Free.h  
#include "Resource.h"
class Free: public Win::Dialog
{
public:
	Free()
	{
	}
	~Free()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Label lb2;
	Win::Textbox tbxAnos;
	Win::Textbox tbxPeso;
	Win::Label lb3;
	Win::Label lb4;
	Win::Textbox tbxDeclaracion;
	Win::Button btPregunta;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(16.32479);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(2.54000);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Free";
		lb1.CreateX(NULL, L"Edad", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.37042, 0.39688, 2.19604, 0.60854, hWnd, 1000);
		lb2.CreateX(NULL, L"Peso", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.37042, 1.74625, 2.11667, 0.60854, hWnd, 1001);
		tbxAnos.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 3.12208, 0.42333, 2.30187, 0.60854, hWnd, 1002);
		tbxPeso.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 3.09563, 1.56104, 2.32833, 0.60854, hWnd, 1003);
		lb3.CreateX(NULL, L"Kg", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 5.87375, 1.61396, 0.92604, 0.60854, hWnd, 1004);
		lb4.CreateX(NULL, L"Fre Admission", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 7.40833, 0.55563, 2.40771, 0.60854, hWnd, 1005);
		tbxDeclaracion.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 10.47750, 0.58208, 2.46062, 0.60854, hWnd, 1006);
		btPregunta.CreateX(NULL, L"Pregunta", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 13.41438, 0.58208, 2.72521, 0.68792, hWnd, 1007);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		lb1.Font = fontArial009A;
		lb2.Font = fontArial009A;
		tbxAnos.Font = fontArial009A;
		tbxPeso.Font = fontArial009A;
		lb3.Font = fontArial009A;
		lb4.Font = fontArial009A;
		tbxDeclaracion.Font = fontArial009A;
		btPregunta.Font = fontArial009A;
	}
	//_________________________________________________
	void btPregunta_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btPregunta.IsEvent(e, BN_CLICKED)) {btPregunta_Click(e); return true;}
		return false;
	}
};
