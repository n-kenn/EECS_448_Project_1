#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_btnNew_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageNewDate);
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageNewTime);

}

void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageReturn);

}

void MainWindow::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageNewDate);
}

void MainWindow::on_pushButton_6_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageStart);
}

void MainWindow::on_pushButton_7_clicked()
{
    QCoreApplication::quit();
}

void MainWindow::on_btnSelecExist_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageListAttendance);
}

void MainWindow::on_pushButton_10_clicked()
{
    if(ui->rdAdd->isChecked()){
        ui->stackedWidget->setCurrentWidget(ui->pageAddAttendance);
    }
    else if (ui->rdView->isChecked()){
        ui->stackedWidget->setCurrentWidget(ui->pageViewAttendance);
    }
}

void MainWindow::on_pushButton_9_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageStart);
}

void MainWindow::on_pushButton_11_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageListAttendance);
}

void MainWindow::on_pushButton_12_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageReturn);
}

void MainWindow::on_pushButton_14_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageStart);
}

void MainWindow::on_pushButton_15_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageListAttendance);
}

void MainWindow::on_pushButton_16_clicked()
{
    QCoreApplication::quit();
}

void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageStart);
}
