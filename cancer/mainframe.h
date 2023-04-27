#ifndef MAINFRAME_H_INCLUDED
#define MAINFRAME_H_INCLUDED
#include <wx/wxprec.h>
#include <iostream>
#include <string>
#include "Home.h"
#include <opencv2/opencv.hpp>

// Le header wxWidgets de base
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif // !WX_PRECOMP


class MainFrame : public wxFrame
{
public:

    MainFrame(wxWindow* parent,
        wxWindowID id,
        const wxString& title,
        const wxPoint& pos = wxDefaultPosition,
        const wxSize& size = wxDefaultSize,
        long style = wxDEFAULT_FRAME_STYLE,
        const wxString& name = wxASCII_STR(wxFrameNameStr));

    wxStaticBitmap* imConv;
    wxButton* HomeButton;
    wxImage wx_from_mat(cv::Mat& img);
    ~MainFrame();

    void onNew(wxCommandEvent& event);
    void onClick(wxCommandEvent& event);
    DECLARE_EVENT_TABLE()
};

#endif // MAINFRAME_H_INCLUDED#pragma once
