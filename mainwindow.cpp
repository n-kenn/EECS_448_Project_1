#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    currentToggleNew(false)
{
    ui->setupUi(this);
    float timeCounter = 0;
    for (int i = 0; i < 48; i++){
        QCheckBox *box = new QCheckBox;
        if (QString::number(timeCounter).contains(".5")){
            QString sTime = QString::number((int)timeCounter) + ":30";
            if (timeCounter < 3){
                sTime.prepend("0");
            }
            QDateTime time;
            time.setTime(QDateTime::fromString(sTime, "hh:mm").time());
            if (!time.time().isValid()){
                QMessageBox::information(this, "This: ", sTime);
            }
            box->setText(time.time().toString());
        }
        else{

            QString sTime = QString::number((int)timeCounter) + ":00";
            if (timeCounter < 3){
                sTime.prepend("0");
            }
            QDateTime time;
            time.setTime(QDateTime::fromString(sTime, "hh:mm").time());
            if (!time.time().isValid()){
                QMessageBox::information(this, "This: ", sTime);
            }
            box->setText(time.time().toString());
        }
        timeCounter += 0.5;
        ui->gridLayout_17->addWidget(box);
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
    Event event(ui->eventCreatorName->text(), ui->calendarWidget->selectedDate().toString(), ui->txtName->text());
    eventList.append(event);
    ui->eventCreatorName->setText(event.getCreator());
    ui->stackedWidget->setCurrentWidget(ui->pageReturn);
}

void MainWindow::on_btnNewTimeToggle_clicked()
{
    QWidget* list = ui->scrollArea->widget();
    QObjectList newList = list->children();
    newList.removeFirst();
    float timeCounter = 0;
    foreach(QObject *box, newList){
        QCheckBox *thatBox = qobject_cast<QCheckBox*>(box);
        if (!currentToggleNew){
                QString textToConvert = thatBox->text();
                /*Extremely odd behavior where I imagine float to String converstion produces odd & character.
                 * These were the locations that they appeared in the string, so they are fixed accordingly.
                */
                if(textToConvert.contains("&")){
                    if (textToConvert.indexOf("&") == 3){
                        textToConvert.replace("&", "");

                    }
                    if (textToConvert.indexOf("&") == 1){
                        textToConvert.replace("&", "");

                    }
                    if (textToConvert.indexOf("&") == 0){
                        textToConvert.replace("&", "");

                    }
                }
                QDateTime time;
                time.setTime(QTime::fromString(textToConvert));
                thatBox->setText(time.time().toString("hh:mm:ss AP"));
        }
        else{
            QString timeCounterS = QString::number(timeCounter);
                if (timeCounterS.contains(".5")){
                    QString sTime = QString::number((int)timeCounter) + ":30";
                    if (timeCounter < 3){
                        sTime.prepend("0");
                    }
                    QDateTime time;
                    time.setTime(QDateTime::fromString(sTime, "hh:mm").time());

                    thatBox->setText(time.time().toString());
                }
                else{

                    QString sTime = QString::number((int)timeCounter) + ":00";
                    if (timeCounter < 3){
                        sTime.prepend("0");
                    }
                    QDateTime time;
                    time.setTime(QDateTime::fromString(sTime, "hh:mm").time());
                    thatBox->setText(time.time().toString());
                }
                timeCounter += 0.5;
        }
    }
    if (currentToggleNew)
        currentToggleNew = false;
    else
        currentToggleNew = true;
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
}
void MainWindow::on_rdAdd_clicked()
{
    ui->btnListAttendanceNext->setEnabled(true);
}

void MainWindow::on_rdView_clicked()
{
    ui->btnListAttendanceNext->setEnabled(true);
}
