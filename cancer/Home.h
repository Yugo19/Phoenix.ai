#ifndef HOME_H_INCLUDED
#define HOME_H_INCLUDED

#include <wx/wxprec.h>
#include <iostream>
#include <string>

#include <opencv2/opencv.hpp>

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif // !WX_PRECOMP

class Home : public wxFrame
{
public:
        Home(wxWindow* parent,
            wxWindowID id,
            const wxString& title,
            const wxPoint& pos = wxDefaultPosition,
            const wxSize& size = wxDefaultSize,
            long style = wxDEFAULT_FRAME_STYLE,
            const wxString& name = wxASCII_STR(wxFrameNameStr));
        ~Home();
};

#endif // Home_H_INCLUDED#pragma once