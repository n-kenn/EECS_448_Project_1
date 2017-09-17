#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "readwrite.h"
#include "attendee.h"

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
    QString time = "Nonya";
    times.append(time);

    for (int i = 0; i < 10; i++){
        Event event("Test Name " +QString::number(i), QString::number(i),"Josh, the literal Event Creator", times);
        Attendee att("Mark", times), att2("Steven", times);
        event.addAttendee(att);
        event.addAttendee(att2);
        eventList.append(event);
    }
    //End of Test Code

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
    ui->lstListEvents->clear();
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
    Attendee creator(ui->txtName->text(), timeSlots);
    event.addAttendee(creator);
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
        //Zero Out Table on Page Load.
        ui->tableWidget->clear();
        ui->tableWidget->setRowCount(0);
        ui->tableWidget->setColumnCount(0);

        //Finds event to be viewed from current event.
        Event currentEventE;
        foreach (Event e, eventList){
            if (e.getName() == currentEvent){
                currentEventE = e;
                break;
            }
        }

        //Initialize header
        ui->tableWidget->insertRow(0);
        ui->tableWidget->insertColumn(0);
        ui->tableWidget->insertColumn(1);
        QTableWidgetItem *labelA = new QTableWidgetItem("Attendees");
        QTableWidgetItem *labelT = new QTableWidgetItem("Times");
        ui->tableWidget->setItem(0, 0, labelA);
        ui->tableWidget->setItem(0, 1, labelT);

        //Set Row Count for the amount of attendees, and read everything into the table.
        ui->tableWidget->setRowCount(currentEventE.getAttendees().count() + 1);
        ui->tableWidget->setCurrentCell(1,0);
        for (Attendee a: currentEventE.getAttendees()){
             QString allSlots;
             QTableWidgetItem *newAtt = new QTableWidgetItem(a.getName());
             for (QString time: a.getSlots()){
                 allSlots.append(time + " ");
             }
             QTableWidgetItem *newTim = new QTableWidgetItem(allSlots);
             ui->tableWidget->setItem(ui->tableWidget->currentRow(),0,newAtt);
             ui->tableWidget->setItem(ui->tableWidget->currentRow(),1,newTim);
             ui->tableWidget->setCurrentCell(ui->tableWidget->currentRow() + 1, 0);
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

//    Attendee attendee(ui->txtName->text(), );
//    event.addAttendee(attendee.getName());
//    ReadWrite::write(event);
//    ui->stackedWidget->setCurrentWidget(ui->pageReturn);
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

void MainWindow::on_eventName_textChanged(/*const QString &arg1*/)
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
//set booleans flags and check those to see what they are at the time
//is it being selected

void MainWindow::on_lstListEvents_itemClicked(QListWidgetItem *item)
{
    currentEvent = item->text();
}
