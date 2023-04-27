#include "Home.h"
#include "mainframe.h"
#include <wx/artprov.h>

#include <opencv2/opencv.hpp>
using namespace cv;

Home::Home(wxWindow* parent,
    wxWindowID id,
    const wxString& title,
    const wxPoint& pos,
    const wxSize& size,
    long style,
    const wxString& name):
    wxFrame(parent, id, title, pos, size, style, name)

{
    Centre();

}

Home::~Home()
{

}