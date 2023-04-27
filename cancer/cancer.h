#pragma once
#include <wx/wxprec.h>
#include <iostream>
#include <opencv2/opencv.hpp>

#ifndef WX_PRECOMP
#include <wx/wx.h>

#endif // !WX_PRECOMP

class cancer : public wxApp
{
public:
	cancer();
	bool OnInit();
	~cancer();
};

DECLARE_APP(cancer); //wxGetApp();