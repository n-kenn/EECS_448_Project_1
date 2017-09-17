#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "readwrite.h"

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
    //Test Code for table widget of pageViewAttendance
    QVector<QString> times;
    QString time = "This time is: " + QString::number(i);
    times.append(time);

    for (int i = 0; i < 10; i++){
        Event event("Test Name " +QString::number(i), QString::number(i),"Josh, the literal Event Creator", times);
        event.addAttendee("Mark");
        event.addAttendee("Steven");
        eventList.append(event);
    }
    //End of Test Code

     //Table Widget Initialization.
     ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
     ui->tableWidget->insertRow(0);
     ui->tableWidget->insertColumn(0);
     ui->tableWidget->insertColumn(1);
     ui->tableWidget->insertColumn(2);
     QTableWidgetItem *labelN = new QTableWidgetItem("Event Name");
     QTableWidgetItem *labelC = new QTableWidgetItem("Creator");
     QTableWidgetItem *labelA = new QTableWidgetItem("Attendees");
     ui->tableWidget->setItem(0, 0, labelN);
     ui->tableWidget->setItem(0, 1, labelC);
     ui->tableWidget->setItem(0, 2, labelA);
     ui->tableWidget->setRowCount(eventList.count());
     ui->tableWidget->setCurrentCell(0,0);
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

    foreach (Event e, eventList){
        ui->lstListEvents->addItem(e.getName());
    }
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
    QVector<QString> timeSlots;
    QWidget* list = ui->scrollArea->widget();
    QObjectList newList = list->children();
    newList.removeFirst(); //Removes the Grid from the list.
    foreach(QObject *box, newList)
    {
        QCheckBox *thatBox = qobject_cast<QCheckBox*>(box);
        if (thatBox->isChecked())
        {
            timeSlots.append(thatBox->text());
        }
    }
    Event event(ui->eventName->text(), ui->calendarWidget->selectedDate().toString(), ui->txtName->text(), timeSlots);
    eventList.append(event);
    ReadWrite::write(event);
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
    foreach(Event event, eventList) {
        ReadWrite::write(event);
    }
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
        foreach (Event e, eventList){
               // QMessageBox::information(this, QString::number(ui->tableWidget->itemAt(ui->tableWidget->rowCount() + 1,0)->text());
                QTableWidgetItem *newName = new QTableWidgetItem(e.getName());
                QTableWidgetItem *newCre = new QTableWidgetItem(e.getCreator());
                QTableWidgetItem *newAtt = new QTableWidgetItem(e.getAttendees());
                ui->tableWidget->setItem(ui->tableWidget->currentRow() + 1,0,newName);
                if (ui->tableWidget->currentColumn() == 2)
                    ui->tableWidget->setCurrentCell(ui->tableWidget->currentRow() + 1, 0);
                else
                    ui->tableWidget->setCurrentCell(ui->tableWidget->currentRow(), ui->tableWidget->currentColumn() + 1);
          }

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

void MainWindow::on_txtName_textChanged(/*const QString &arg1*/)
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
