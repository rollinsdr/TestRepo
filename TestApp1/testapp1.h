#ifndef TESTAPP1_H
#define TESTAPP1_H

#include <QtGui/QMainWindow>
#include "ui_testapp1.h"

class TestApp1 : public QMainWindow
{
	Q_OBJECT

public:
	TestApp1(QWidget *parent = 0, Qt::WFlags flags = 0);
	~TestApp1();

private:
	Ui::TestApp1Class ui;

protected slots:
	void on_m_btn_Popup_clicked();
};

#endif // TESTAPP1_H
