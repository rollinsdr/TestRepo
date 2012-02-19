#include "testapp1.h"

#include <QMessageBox>

TestApp1::TestApp1(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
	, m_nCounter(0)
{
	ui.setupUi(this);

	//added some stuff

	// try again with "closes #1"
}

TestApp1::~TestApp1()
{

}

void TestApp1::on_m_btn_Popup_clicked()
{
	//QMessageBox::information(this, "Popup box", "heres the popup!");

	ui.m_lab_ClickOutput->setText(QString("%1").arg(m_nCounter));

	m_nCounter++;

	// added by user number 2
}


