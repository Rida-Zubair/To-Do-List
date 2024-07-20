#pragma once
#include <wx/wx.h>

class MainFrame : public wxFrame  // Ensure inheritance is public
{
public:
    MainFrame(const wxString& title);
private:
    void CreateControls();
    void BindEventHandlers();
    void AddSavedTasks();

    void OnAddButtonClicked(wxCommandEvent& evt);
    void OnInputEnter(wxCommandEvent& evt);//for enter button
    void OnListKeyDown(wxKeyEvent& evt);//for deleting task
    void OnClearButtonClicked(wxCommandEvent& evt);
    void OnWindowClosed(wxCloseEvent& evt);

    void AddTaskFromInput();
    void DeleteSelectedTask();//for deleting task
    void MoveSelectedTask(int offset);//to move task up and down. the offset  will be + or - one to move the task one step up or down
    void SwapTasks(int i, int j);//i and j will be the 2 tasks to be switched

    wxPanel* panel;
    wxStaticText* headlineText;
    wxTextCtrl* inputField;
    wxButton* addButton;
    wxCheckListBox* checkListBox;
    wxButton* clearButton;
};
