#include "stdafx.h"  //________________________________________ Free.cpp
#include "Free.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Free app;
	return app.BeginDialog(IDI_Free, hInstance);
}

void Free::Window_Open(Win::Event& e)
{
}

void Free::btPregunta_Click(Win::Event& e)
{
	const int age = tbxAnos.IntValue;
	const double weight = tbxPeso.DoubleValue;
	const bool isFreeAdmision = (age <= 11) && (weight <= 50.0);
	tbxDeclaracion.Text = Sys::Convert::ToString(isFreeAdmision);
}

