
#include "MainFrame.h"
#include <wx/spinctrl.h>
#include <wx/wx.h>

MainFrame::MainFrame(const wxString &title)
    : wxFrame(nullptr, wxID_ANY, title) {
  wxPanel *panel = new wxPanel(this);

  wxButton *button = new wxButton(panel, wxID_ANY, "Button", wxPoint(150, 50),
                                  wxSize(100, 30));

  wxCheckBox *checkBox =
      new wxCheckBox(panel, wxID_ANY, "checkBox", wxPoint(500, 55));

  wxStaticText *staticText = new wxStaticText(
      panel, wxID_ANY, "StaticText - Not enabled", wxPoint(120, 150));

  wxTextCtrl *textCtrl = new wxTextCtrl(panel, wxID_ANY, "textCtrl - enable ",
                                        wxPoint(500, 140), wxSize(200, -1));

  wxSlider *slider = new wxSlider(panel, wxID_ANY, 25, 0, 100,
                                  wxPoint(100, 250), wxSize(200, -1));
  wxGauge *gauge =
      new wxGauge(panel, wxID_ANY, 100, wxPoint(500, 250), wxSize(200, -1));
  gauge->SetValue(50);

  wxArrayString choices;
  choices.Add("Item A");
  choices.Add("Item B");
  choices.Add("Item c");

  wxChoice *choice = new wxChoice(panel, wxID_ANY, wxPoint(150, 370),
                                  wxSize(100, -1), choices);
  choice->Select(0);

  wxSpinCtrl *spinCtrl =
      new wxSpinCtrl(panel, wxID_ANY, "", wxPoint(550, 375), wxSize(100, -1));
}
