#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCheckBox>
#include <QMessageBox>
#include <QListWidgetItem>
#include "event.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    /*!
      \brief MainWindow - Deconstructor
      *
      * Pre: The MainWindow is to be deleted.
      *
      * Post: None
      */
    ~MainWindow();

private slots:

    /*!
     * \brief on_btnNew_clicked
     *
     * Pre: None
     *
     * Post: The button is clicked, indicating that a new event is wanting to be created.
     */
    void on_btnNew_clicked();

    /*!
     * \brief on_btnSelecExist_clicked
     *
     * Pre: None
     *
     * Post: The button is clicked, indicating that something is desired about the attendance.
     */
    void on_btnSelecExist_clicked();

    /*!
     * \brief on_btnNewDateBack_clicked
     *
     * Pre: None
     *
     * Post: The user will return to pageStart.
     */
    void on_btnNewDateBack_clicked();

    /*!
     * \brief on_btnNewDateNext_clicked
     *
     * Pre: None
     *
     * Post: The user will go to select a time for the new event.
     */
    void on_btnNewDateNext_clicked();


    /*!
     * \brief on_btnNewTimeBack_clicked
     *
     * Pre: None
     *
     * Post: The user will return back to pick a date.
     */
    void on_btnNewTimeBack_clicked();


    /*!
     * \brief on_btnNewTimeSave_clicked
     *
     * Pre: None
     *
     * Post: The date and times will be saved, and a new event will be created.
     */
    void on_btnNewTimeSave_clicked();


    /*!
     * \brief on_btnNewTimeToggle_clicked
     *
     * Pre: None
     *
     * Post: The time format on the checkboxes will be changed to either 24 or 12 hour format depending on the value of
     *       currentToggleNew.
     */
    void on_btnNewTimeToggle_clicked();


    /*!
     * \brief on_btnExit_clicked
     *
     * Pre: None
     *
     * Post: The program is to end.
     */
    void on_btnExit_clicked();


    /*!
     * \brief on_btnReturnToStart_clicked
     *
     * Pre: None
     *
     * Post: The user will return back to the start.
     */
    void on_btnReturnToStart_clicked();

    /*!
     * \brief on_btnListAttendanceBack_clicked
     *
     * Pre: None
     *
     * Post: The user will return back to the beginning.
     */
    void on_btnListAttendanceBack_clicked();


    /*!
     * \brief on_btnListAttendanceNext_clicked
     *
     * Pre: None
     *
     * Post: The user will go either to add their attendance to the selected event,
     *       or they will go to see a list of attendees to events.
     */
    void on_btnListAttendanceNext_clicked();


    /*!
     * \brief on_btnAddAttendanceBack_clicked
     *
     * Pre: None
     *
     * Post: The user will return back to pageListAttendance
     */
    void on_btnAddAttendanceBack_clicked();

    /*!
     * \brief on_btnAddAttendanceSave_clicked
     *
     * Pre: None
     *
     * Post: The user's attendance to the selected event will be saved.
     */
    void on_btnAddAttendanceSave_clicked();

    /*!
     * \brief on_btnViewAttendanceBack_clicked
     *
     * Pre: None
     *
     * Post: The user will return back to pageListAttendance
     */
    void on_btnViewAttendanceBack_clicked();

    /*!
     * \brief on_btnViewAttendanceReturn_clicked
     *
     * Pre: None
     *
     * Post: The user will return back to the beginning of the program.
     */
    void on_btnViewAttendanceReturn_clicked();

    /*!
     * \brief on_btnViewAttendanceQuit_clicked
     *
     * Pre: None
     *
     * Post: The program is to end.
     */
    void on_btnViewAttendanceQuit_clicked();


    /*!
     * \brief on_txtName_textChanged
     * \param arg1 - An unnecessary argument, but kept just in case for potential needs for evaluation.
     *
     * Pre: None
     *
     * Post: So long as the line edit is not empty, the buttons will become enabled.
     */
    void on_txtName_textChanged(/*const QString &arg1*/);

    void on_eventName_textChanged(/*const QString &arg1*/);

    /*!
     * \brief on_rdAdd_clicked
     *
     * Pre: None
     *
     * Post: btnListAttendanceNext will be enabled.
     */
    void on_rdAdd_clicked();


    /*!
     * \brief on_rdView_clicked
     *
     * Pre: None
     *
     * Post: btnLIstAttendanceNext will be enabled.
     */
    void on_rdView_clicked();

    //Anna: I think that this is unecessary so I took it out
   // void on_eventName_textChanged(const QString &arg1);

    void on_lstListEvents_itemClicked(QListWidgetItem* item);

    void on_btnViewAttendanceToggle_clicked();

private:
    QVector<Event> eventList;
    Ui::MainWindow *ui; /*!< The "Main Window" object where all of the widgets reside.*/
    bool currentToggleNew; /*!< Keeps track of whether or not the toggle button on the pageNewTime is currently in the
                                UTC or the AM/PM format. False represents 24 hour, and true represents 12 hour format. */
    QString currentEvent;

    bool currentToggleView;
};

#endif // MAINWINDOW_H
