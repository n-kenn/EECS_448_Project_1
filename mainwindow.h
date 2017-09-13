#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    
    void on_btnNew_clicked();

    void on_btnSelecExist_clicked();

    void on_btnNewDateBack_clicked();

    void on_btnNewDateNext_clicked();

    void on_btnNewTimeBack_clicked();

    void on_btnNewTimeSave_clicked();

    void on_btnNewTimeToggle_clicked();

    void on_btnExit_clicked();

    void on_btnReturnToStart_clicked();

    void on_btnListAttendanceBack_clicked();

    void on_btnListAttendanceNext_clicked();

    void on_btnAddAttendanceBack_clicked();

    void on_btnAddAttendanceSave_clicked();

    void on_btnViewAttendanceBack_clicked();

    void on_btnViewAttendanceReturn_clicked();

    void on_btnViewAttendanceQuit_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
