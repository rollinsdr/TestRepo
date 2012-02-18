#include "testapp1.h"

#include <QMessageBox>

TestApp1::TestApp1(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
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
	//QMessageBox::critical(this, "Popup box", "heres the popup!");
}


