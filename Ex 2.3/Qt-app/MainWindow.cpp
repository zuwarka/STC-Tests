#include "MainWindow.h"
#include "my_rand_lcg.h"
#include "ui_MainWindow.h"

unsigned short diapason_from, diapason_to;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_chose_diapason_from_valueChanged(int arg1)
{
    diapason_from = arg1;
}


void MainWindow::on_chose_diapason_to_valueChanged(int arg1)
{
    diapason_to = arg1;
}


void MainWindow::on_pushButton_clicked()
{
    ui->lcdNumber->display(my_rand_lcg(diapason_from, diapason_to));
}
