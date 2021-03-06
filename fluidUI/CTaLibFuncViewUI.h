// generated by Fast Light User Interface Designer (fluid) version 1.0302

#ifndef CTaLibFuncViewUI_h
#define CTaLibFuncViewUI_h
#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Tile.H>
#include <FL/Fl_Tree.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Tabs.H>
#include <FL/Fl_Table.H>

class CTaLibFuncViewUI {
public:
  CTaLibFuncViewUI();
  Fl_Double_Window *m_window;
  Fl_Group *m_taLibView;
  Fl_Tree *m_funcTree;
  Fl_Group *m_funcInfo;
  Fl_Box *m_funcName;
  Fl_Group *m_summaryGroup;
  Fl_Box *m_funcDescription;
  Fl_Box *m_funcGroup;
  Fl_Box *m_funcInputs;
  Fl_Box *m_funcOptInputs;
  Fl_Box *m_funcOutputs;
  Fl_Box *m_funcDisplayTypes;
  Fl_Table *m_inputsTable;
  Fl_Table *m_optInputsTable;
  Fl_Table *m_outputsTable;
};
#endif
