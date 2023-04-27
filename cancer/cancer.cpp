#include "cancer.h"
#include "id.h"
#include "mainframe.h"
#include <opencv2/opencv.hpp>

#include <iostream>

IMPLEMENT_APP(cancer); //main

cancer::cancer()
{

}

bool cancer::OnInit()
{
	if (!wxApp::OnInit())
		return false;

	MainFrame* frame = new MainFrame(nullptr, frame::id::MAINFRAME, _("Main frame"));
	frame->Show();
	return true;
}

cancer::~cancer()
{

}