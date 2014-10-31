#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gpp_qt/wfunction/wfunction.h"
#include<iostream>
#include<string>
#include<QString>

using namespace std;

extern QApplication * qa;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
	qRegisterMetaType<QString>("QString");
	qRegisterMetaType<QString>("QTextBlock");
	qRegisterMetaType<QString>("QTextCursor");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    cout << "1 clicked"<<endl;
}
void MainWindow::update_price(const string & ID,const string & nowtime,double price )
{
	QString line_str;
	line_str.fromStdString(ID);
	line_str.fromStdString(" ");
	line_str.append(QString::fromStdString(nowtime));
	line_str.append(" ");
	line_str.append(QString::fromStdString(wfunction::ftos(price)));
	this->ui->textBrowser->append(line_str);
	qa->processEvents();
}
