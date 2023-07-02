#ifndef NOSTRO_WEB_HOME_HH
#define NOSTRO_WEB_HOME_HH

#include "web.hh"

/////////////////////////////////////////////////////////////////////////////////////////////////////
//ContainerHome
/////////////////////////////////////////////////////////////////////////////////////////////////////

class ContainerHome : public Wt::WContainerWidget
{
public:
  ContainerHome();
  ~ContainerHome()
  {
    auto app = dynamic_cast<NostroApplication*>(Wt::WApplication::instance());
    app->pubkey = m_edit_pubkey->text().toUTF8();
  }

private:
  Wt::WTextArea* m_area_content;
  Wt::WTextArea* m_area_message;
  Wt::WLineEdit* m_edit_uri;
  Wt::WLineEdit* m_edit_seckey;
  Wt::WLineEdit* m_edit_pubkey;
  Wt::WLineEdit* m_edit_event_id;
  Wt::WLineEdit* m_edit_author;
  Wt::WComboBox* m_combo_kind;
  Wt::WCheckBox* m_check_raw;
  std::shared_ptr<Wt::WButtonGroup> m_button_message;
  Wt::WTable* m_table_messages;
  int m_row;
  void send_message();
  void make_message();
  void row_text(const Wt::WString& s);
};


#endif