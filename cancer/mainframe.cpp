#include "mainframe.h"
#include <wx/artprov.h>
#include "id.h"
#include <opencv2/opencv.hpp>

BEGIN_EVENT_TABLE(MainFrame, wxFrame)
  EVT_MENU(wxID_NEW, MainFrame::onNew)
END_EVENT_TABLE()


MainFrame::MainFrame(wxWindow* parent,
    wxWindowID id,
    const wxString& title,
    const wxPoint& pos,
    const wxSize& size,
    long style,
    const wxString& name) :
    wxFrame(parent, id, title, pos, size, style, name)
{

    wxMenuBar* menubar = new wxMenuBar();
    wxMenu* fileMenu = new wxMenu();
    //wxWidgets default wxItem example
    fileMenu->Append(wxID_NEW);

    //Custom wxMenuItem
    fileMenu->Append(wxID_ANY, _("&Test\tCtrl+T"));
    fileMenu->AppendSeparator();

    // subMenu example

    wxMenu* subMenu = new wxMenu();
    subMenu->Append(wxID_CUT);
    subMenu->Append(wxID_COPY);
    subMenu->Append(wxID_PASTE);
    fileMenu->AppendSubMenu(subMenu, "SubMenu");

    //Create wxWidgetItem example
    wxMenuItem* quitItem = new wxMenuItem(fileMenu, wxID_EXIT);
    quitItem->SetBitmap(wxArtProvider::GetBitmap("wxART_QUIT"));
    fileMenu->Append(quitItem);

    menubar->Append(fileMenu, _("&File"));
    SetMenuBar(menubar);

    HomeButton = new wxButton(this, wxID_ANY, _("Click Me"), wxPoint(50, 50), wxSize(50, 50), wxBU_BOTTOM, wxDefaultValidator, _("Home"));
    Bind(wxEVT_BUTTON,&MainFrame::onClick, this, HomeButton->GetId());


    /*
   imConv = new wxStaticBitmap(this, wxID_ANY, wxBitmap(wxT("C:\\Users\\Wakfu\\PycharmProjects\\faceRecognition\\images_dir\\Bill gates.jpg"),
        wxBITMAP_TYPE_JPEG), wxPoint(256, 0), wxSize(512, 512));

    cv::Mat img1 = cv::imread("C:\\Users\\Wakfu\\PycharmProjects\\faceRecognition\\images_dir\\Bill gates.jpg", cv::IMREAD_UNCHANGED);
    std::string  str = "Channels:" + std::to_string(img1.channels());
    cv::putText(img1, str, cv::Point(100, 100), cv::FONT_HERSHEY_PLAIN, 4.0, CV_RGB(128, 0, 128), 4.0);
    wxBitmap imwx1 = wx_from_mat(img1);
    imConv->SetBitmap(imwx1);
    */
    
}

MainFrame::~MainFrame()
{
    // Destructeur  

   
}

/**
wxImage MainFrame::wx_from_mat(cv::Mat& img)
{
    cv::Mat im2;
    if (img.channels() == 1) { cv::cvtColor(img, im2,cv::COLOR_GRAY2RGB ); }
    else if (img.channels() == 4) { cv::cvtColor(img, im2, cv::COLOR_BGRA2RGB); }
    else { cv::cvtColor(img, im2, cv::COLOR_BGR2RGB); }
    long imsize = im2.rows * im2.cols * im2.channels();
    wxImage wx(im2.cols, im2.rows, (unsigned char*)malloc(imsize), false);
    unsigned char* s = im2.data;
    unsigned char* d = wx.GetData();
    for (long i = 0; i < imsize; i++) { d[i] = s[i]; }
    return wx;

}
*/

void MainFrame::onNew(wxCommandEvent& event)
{
    wxMessageBox("MainWindow::onNew");
}

void MainFrame::onClick(wxCommandEvent& event)
{
    Home* HomeFrame = new Home(nullptr, frame::id::HOME, _("Home"));
    HomeFrame->Show();
    //this->Close();
    
}