#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QWidget* list = ui->scrollArea->widget();
    QObjectList newList = list->children();
    QMessageBox::information(this, "Test", newList.at(2)->objectName());
    QMessageBox::information(this, "Test", newList.at(3)->objectName());
    foreach(QObject *box, newList){
        if (box->objectName().contains("check")){
            QCheckBox *thatBox = qobject_cast<QCheckBox*>(box);
            thatBox->setText("Test");
        }
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnNew_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageNewDate);
}

void MainWindow::on_btnSelecExist_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageListAttendance);
}

void MainWindow::on_btnNewDateBack_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageStart);
}

void MainWindow::on_btnNewDateNext_clicked()
{
     ui->stackedWidget->setCurrentWidget(ui->pageNewTime);
}
void MainWindow::on_btnNewTimeBack_clicked()
{
     ui->stackedWidget->setCurrentWidget(ui->pageNewDate);
}

void MainWindow::on_btnNewTimeSave_clicked()
{
    Event event(ui->lineEdit->text(), ui->calendarWidget->selectedDate().toString(), ui->txtName->text());
    eventList.append(event);
    ui->lineEdit->setText(event.getCreator());
    ui->stackedWidget->setCurrentWidget(ui->pageReturn);
}

void MainWindow::on_btnNewTimeToggle_clicked()
{

}

void MainWindow::on_btnExit_clicked()
{
    QCoreApplication::quit();
}

void MainWindow::on_btnReturnToStart_clicked()
{
     ui->stackedWidget->setCurrentWidget(ui->pageStart);
}

void MainWindow::on_btnListAttendanceBack_clicked()
{
     ui->stackedWidget->setCurrentWidget(ui->pageStart);
}

void MainWindow::on_btnListAttendanceNext_clicked()
{
    if(ui->rdAdd->isChecked()){
           ui->stackedWidget->setCurrentWidget(ui->pageAddAttendance);
       }
       else if (ui->rdView->isChecked()){
           ui->stackedWidget->setCurrentWidget(ui->pageViewAttendance);
   }
}

void MainWindow::on_btnAddAttendanceBack_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageListAttendance);
}

void MainWindow::on_btnAddAttendanceSave_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageReturn);
}

void MainWindow::on_btnViewAttendanceBack_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageListAttendance);
}

void MainWindow::on_btnViewAttendanceReturn_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageStart);
}

void MainWindow::on_btnViewAttendanceQuit_clicked()
{
    QCoreApplication::quit();
}

<<<<<<< HEAD
void MainWindow::on_txtName_textChanged(const QString &arg1)
{
    if (ui->txtName->text() != ""){
        ui->btnNew->setEnabled(true);
        ui->btnSelecExist->setEnabled(true);
    }
    else{
        ui->btnNew->setEnabled(false);
        ui->btnSelecExist->setEnabled(false);
    }
=======
void MainWindow::on_rdAdd_clicked()
{
    ui->btnListAttendanceNext->setEnabled(true);
}

void MainWindow::on_rdView_clicked()
{
    ui->btnListAttendanceNext->setEnabled(true);
>>>>>>> 12a0440d9d033b099f2afadf7b418cfd6024ce5e
}
