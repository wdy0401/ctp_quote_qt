#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<string>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

	void on_pushButton_clicked();
	void update_price(const std::string & ID,const std::string & nowtime,double price );

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
