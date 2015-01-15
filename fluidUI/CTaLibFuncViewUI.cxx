// generated by Fast Light User Interface Designer (fluid) version 1.0302

#include "CTaLibFuncViewUI.h"

CTaLibFuncViewUI::CTaLibFuncViewUI() {
  { m_window = new Fl_Double_Window(780, 385, "Technical Analysis Function Browser");
    m_window->user_data((void*)(this));
    { m_taLibView = new Fl_Group(-35, 0, 815, 470);
      m_taLibView->box(FL_DOWN_BOX);
      { Fl_Tile* o = new Fl_Tile(5, 5, 770, 340);
        o->box(FL_FLAT_BOX);
        o->color(FL_YELLOW);
        { m_funcTree = new Fl_Tree(5, 5, 260, 340);
          m_funcTree->color((Fl_Color)20);
          m_funcTree->root()->label("FUNCTIONS");
          m_funcTree->root()->labelcolor(FL_RED);
        } // Fl_Tree* m_funcTree
        { m_funcInfo = new Fl_Group(265, 5, 510, 340);
          m_funcInfo->box(FL_DOWN_BOX);
          m_funcInfo->color((Fl_Color)43);
          m_funcInfo->align(Fl_Align(65));
          { Fl_Box* o = new Fl_Box(270, 10, 500, 25, "Function Information");
            o->labeltype(FL_SHADOW_LABEL);
            o->labelsize(20);
            o->labelcolor(FL_BACKGROUND2_COLOR);
            o->align(Fl_Align(FL_ALIGN_CLIP));
          } // Fl_Box* o
          { Fl_Tabs* o = new Fl_Tabs(270, 40, 500, 300);
            { Fl_Group* o = new Fl_Group(270, 60, 500, 280, "SUMMARY");
              o->end();
            } // Fl_Group* o
            { m_inputsTable = new Fl_Table(270, 60, 500, 280, "INPUTS");
              m_inputsTable->box(FL_THIN_UP_FRAME);
              m_inputsTable->hide();
              m_inputsTable->end();
            } // Fl_Table* m_inputsTable
            { m_optInputsTable = new Fl_Table(270, 60, 500, 280, "OPT-INPUTS");
              m_optInputsTable->box(FL_THIN_UP_FRAME);
              m_optInputsTable->hide();
              m_optInputsTable->end();
            } // Fl_Table* m_optInputsTable
            { m_outputsTable = new Fl_Table(270, 60, 500, 280, "OUTPUTS");
              m_outputsTable->box(FL_THIN_UP_FRAME);
              m_outputsTable->hide();
              m_outputsTable->end();
            } // Fl_Table* m_outputsTable
            o->end();
          } // Fl_Tabs* o
          m_funcInfo->end();
        } // Fl_Group* m_funcInfo
        o->end();
      } // Fl_Tile* o
      m_taLibView->end();
      Fl_Group::current()->resizable(m_taLibView);
    } // Fl_Group* m_taLibView
    m_window->end();
  } // Fl_Double_Window* m_window
}