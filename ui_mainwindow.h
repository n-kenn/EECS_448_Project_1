/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QStackedWidget *stackedWidget;
    QWidget *pageStart;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_6;
    QPushButton *btnNew;
    QLineEdit *txtName;
    QLabel *lblName;
    QPushButton *btnSelecExist;
    QSpacerItem *verticalSpacer_7;
    QWidget *pageNewDate;
    QGridLayout *gridLayout_13;
    QGridLayout *gridLayout_12;
    QLineEdit *eventName;
    QLabel *label_4;
    QPushButton *btnNewDateBack;
    QPushButton *btnNewDateNext;
    QCalendarWidget *calendarWidget;
    QLabel *label_6;
    QWidget *pageNewTime;
    QGridLayout *gridLayout_14;
    QGridLayout *gridLayout_11;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QPushButton *btnNewTimeToggle;
    QPushButton *btnNewTimeSave;
    QPushButton *btnNewTimeBack;
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_17;
    QWidget *pageReturn;
    QGridLayout *gridLayout_15;
    QGridLayout *gridLayout_10;
    QPushButton *btnReturnToStart;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *btnExit;
    QSpacerItem *horizontalSpacer_11;
    QWidget *pageListAttendance;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_8;
    QPushButton *btnListAttendanceBack;
    QRadioButton *rdAdd;
    QPushButton *btnListAttendanceNext;
    QRadioButton *rdView;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QListWidget *listWidget;
    QWidget *pageAddAttendance;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_6;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btnAddAttendanceToggle;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_9;
    QListWidget *listWidget_2;
    QPushButton *btnAddAttendanceSave;
    QPushButton *btnAddAttendanceBack;
    QLabel *label_3;
    QWidget *pageViewAttendance;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QPushButton *btnViewAttendanceQuit;
    QPushButton *btnViewAttendanceToggle;
    QPushButton *btnViewAttendanceReturn;
    QTableWidget *tableWidget;
    QPushButton *btnViewAttendanceBack;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1280, 757);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(1280, 1024));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        pageStart = new QWidget();
        pageStart->setObjectName(QStringLiteral("pageStart"));
        gridLayout_2 = new QGridLayout(pageStart);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 4, 0, 1, 1);

        btnNew = new QPushButton(pageStart);
        btnNew->setObjectName(QStringLiteral("btnNew"));
        btnNew->setEnabled(false);

        gridLayout->addWidget(btnNew, 4, 1, 1, 1);

        txtName = new QLineEdit(pageStart);
        txtName->setObjectName(QStringLiteral("txtName"));

        gridLayout->addWidget(txtName, 3, 1, 1, 1);

        lblName = new QLabel(pageStart);
        lblName->setObjectName(QStringLiteral("lblName"));
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        font.setWeight(75);
        lblName->setFont(font);
        lblName->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblName, 2, 1, 1, 1);

        btnSelecExist = new QPushButton(pageStart);
        btnSelecExist->setObjectName(QStringLiteral("btnSelecExist"));
        btnSelecExist->setEnabled(false);

        gridLayout->addWidget(btnSelecExist, 5, 1, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 6, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        stackedWidget->addWidget(pageStart);
        pageNewDate = new QWidget();
        pageNewDate->setObjectName(QStringLiteral("pageNewDate"));
        gridLayout_13 = new QGridLayout(pageNewDate);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        gridLayout_12 = new QGridLayout();
        gridLayout_12->setSpacing(6);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        eventName = new QLineEdit(pageNewDate);
        eventName->setObjectName(QStringLiteral("eventName"));

        gridLayout_12->addWidget(eventName, 1, 0, 2, 3);

        label_4 = new QLabel(pageNewDate);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font1;
        font1.setPointSize(26);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        label_4->setFont(font1);
        label_4->setTextFormat(Qt::PlainText);
        label_4->setScaledContents(false);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(label_4, 0, 0, 1, 3);

        btnNewDateBack = new QPushButton(pageNewDate);
        btnNewDateBack->setObjectName(QStringLiteral("btnNewDateBack"));

        gridLayout_12->addWidget(btnNewDateBack, 5, 0, 1, 1);

        btnNewDateNext = new QPushButton(pageNewDate);
        btnNewDateNext->setObjectName(QStringLiteral("btnNewDateNext"));

        gridLayout_12->addWidget(btnNewDateNext, 5, 2, 1, 1);

        calendarWidget = new QCalendarWidget(pageNewDate);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setSelectedDate(QDate(2017, 9, 17));
        calendarWidget->setMinimumDate(QDate(2017, 9, 17));

        gridLayout_12->addWidget(calendarWidget, 4, 0, 1, 3);

        label_6 = new QLabel(pageNewDate);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(label_6, 3, 1, 1, 1);


        gridLayout_13->addLayout(gridLayout_12, 0, 0, 1, 1);

        stackedWidget->addWidget(pageNewDate);
        pageNewTime = new QWidget();
        pageNewTime->setObjectName(QStringLiteral("pageNewTime"));
        gridLayout_14 = new QGridLayout(pageNewTime);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setContentsMargins(11, 11, 11, 11);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        gridLayout_11 = new QGridLayout();
        gridLayout_11->setSpacing(6);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_11->addItem(verticalSpacer, 1, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_11->addItem(verticalSpacer_3, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_11->addItem(verticalSpacer_2, 1, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_11->addItem(verticalSpacer_4, 1, 3, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_11->addItem(verticalSpacer_5, 1, 4, 1, 1);

        btnNewTimeToggle = new QPushButton(pageNewTime);
        btnNewTimeToggle->setObjectName(QStringLiteral("btnNewTimeToggle"));

        gridLayout_11->addWidget(btnNewTimeToggle, 2, 0, 1, 5);

        btnNewTimeSave = new QPushButton(pageNewTime);
        btnNewTimeSave->setObjectName(QStringLiteral("btnNewTimeSave"));

        gridLayout_11->addWidget(btnNewTimeSave, 3, 0, 1, 5);

        btnNewTimeBack = new QPushButton(pageNewTime);
        btnNewTimeBack->setObjectName(QStringLiteral("btnNewTimeBack"));

        gridLayout_11->addWidget(btnNewTimeBack, 4, 0, 1, 5);

        label = new QLabel(pageNewTime);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_11->addWidget(label, 0, 0, 1, 5);

        scrollArea = new QScrollArea(pageNewTime);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 1106, 595));
        gridLayout_17 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_17->setSpacing(6);
        gridLayout_17->setContentsMargins(11, 11, 11, 11);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        scrollArea->setWidget(scrollAreaWidgetContents_2);

        gridLayout_11->addWidget(scrollArea, 1, 5, 1, 1);


        gridLayout_14->addLayout(gridLayout_11, 0, 0, 1, 1);

        stackedWidget->addWidget(pageNewTime);
        pageReturn = new QWidget();
        pageReturn->setObjectName(QStringLiteral("pageReturn"));
        gridLayout_15 = new QGridLayout(pageReturn);
        gridLayout_15->setSpacing(6);
        gridLayout_15->setContentsMargins(11, 11, 11, 11);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(6);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        btnReturnToStart = new QPushButton(pageReturn);
        btnReturnToStart->setObjectName(QStringLiteral("btnReturnToStart"));

        gridLayout_10->addWidget(btnReturnToStart, 0, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_7, 0, 0, 1, 1);

        btnExit = new QPushButton(pageReturn);
        btnExit->setObjectName(QStringLiteral("btnExit"));

        gridLayout_10->addWidget(btnExit, 1, 1, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_11, 0, 2, 1, 1);


        gridLayout_15->addLayout(gridLayout_10, 0, 0, 1, 1);

        stackedWidget->addWidget(pageReturn);
        pageListAttendance = new QWidget();
        pageListAttendance->setObjectName(QStringLiteral("pageListAttendance"));
        gridLayout_9 = new QGridLayout(pageListAttendance);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(6);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        btnListAttendanceBack = new QPushButton(pageListAttendance);
        btnListAttendanceBack->setObjectName(QStringLiteral("btnListAttendanceBack"));

        gridLayout_8->addWidget(btnListAttendanceBack, 3, 2, 1, 2);

        rdAdd = new QRadioButton(pageListAttendance);
        rdAdd->setObjectName(QStringLiteral("rdAdd"));

        gridLayout_8->addWidget(rdAdd, 1, 0, 1, 2);

        btnListAttendanceNext = new QPushButton(pageListAttendance);
        btnListAttendanceNext->setObjectName(QStringLiteral("btnListAttendanceNext"));
        btnListAttendanceNext->setEnabled(false);

        gridLayout_8->addWidget(btnListAttendanceNext, 2, 2, 1, 2);

        rdView = new QRadioButton(pageListAttendance);
        rdView->setObjectName(QStringLiteral("rdView"));

        gridLayout_8->addWidget(rdView, 3, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_5, 3, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_6, 1, 2, 1, 1);

        listWidget = new QListWidget(pageListAttendance);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        gridLayout_8->addWidget(listWidget, 0, 0, 1, 3);


        gridLayout_9->addLayout(gridLayout_8, 0, 0, 1, 1);

        stackedWidget->addWidget(pageListAttendance);
        pageAddAttendance = new QWidget();
        pageAddAttendance->setObjectName(QStringLiteral("pageAddAttendance"));
        gridLayout_7 = new QGridLayout(pageAddAttendance);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_4, 2, 4, 1, 1);

        btnAddAttendanceToggle = new QPushButton(pageAddAttendance);
        btnAddAttendanceToggle->setObjectName(QStringLiteral("btnAddAttendanceToggle"));

        gridLayout_6->addWidget(btnAddAttendanceToggle, 2, 0, 1, 2);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_10, 2, 2, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_8, 3, 3, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_9, 2, 3, 1, 1);

        listWidget_2 = new QListWidget(pageAddAttendance);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));

        gridLayout_6->addWidget(listWidget_2, 1, 0, 1, 6);

        btnAddAttendanceSave = new QPushButton(pageAddAttendance);
        btnAddAttendanceSave->setObjectName(QStringLiteral("btnAddAttendanceSave"));

        gridLayout_6->addWidget(btnAddAttendanceSave, 3, 4, 1, 1);

        btnAddAttendanceBack = new QPushButton(pageAddAttendance);
        btnAddAttendanceBack->setObjectName(QStringLiteral("btnAddAttendanceBack"));

        gridLayout_6->addWidget(btnAddAttendanceBack, 3, 0, 1, 3);

        label_3 = new QLabel(pageAddAttendance);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_6->addWidget(label_3, 0, 0, 1, 5);


        gridLayout_7->addLayout(gridLayout_6, 0, 0, 1, 1);

        stackedWidget->addWidget(pageAddAttendance);
        pageViewAttendance = new QWidget();
        pageViewAttendance->setObjectName(QStringLiteral("pageViewAttendance"));
        gridLayout_5 = new QGridLayout(pageViewAttendance);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        btnViewAttendanceQuit = new QPushButton(pageViewAttendance);
        btnViewAttendanceQuit->setObjectName(QStringLiteral("btnViewAttendanceQuit"));

        gridLayout_4->addWidget(btnViewAttendanceQuit, 1, 6, 1, 1);

        btnViewAttendanceToggle = new QPushButton(pageViewAttendance);
        btnViewAttendanceToggle->setObjectName(QStringLiteral("btnViewAttendanceToggle"));

        gridLayout_4->addWidget(btnViewAttendanceToggle, 0, 0, 1, 1);

        btnViewAttendanceReturn = new QPushButton(pageViewAttendance);
        btnViewAttendanceReturn->setObjectName(QStringLiteral("btnViewAttendanceReturn"));

        gridLayout_4->addWidget(btnViewAttendanceReturn, 1, 0, 1, 1);

        tableWidget = new QTableWidget(pageViewAttendance);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout_4->addWidget(tableWidget, 0, 1, 1, 6);

        btnViewAttendanceBack = new QPushButton(pageViewAttendance);
        btnViewAttendanceBack->setObjectName(QStringLiteral("btnViewAttendanceBack"));

        gridLayout_4->addWidget(btnViewAttendanceBack, 1, 3, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 1, 0, 1, 1);

        stackedWidget->addWidget(pageViewAttendance);

        gridLayout_3->addWidget(stackedWidget, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        btnNew->setText(QApplication::translate("MainWindow", "Create New", Q_NULLPTR));
        lblName->setText(QApplication::translate("MainWindow", "What is your name?", Q_NULLPTR));
        btnSelecExist->setText(QApplication::translate("MainWindow", "Select Existing Event", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        eventName->setToolTip(QApplication::translate("MainWindow", "This box serves to provide a name for your event.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("MainWindow", "Name Your Event", Q_NULLPTR));
        btnNewDateBack->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        btnNewDateNext->setText(QApplication::translate("MainWindow", "Next", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Select A Time", Q_NULLPTR));
        btnNewTimeToggle->setText(QApplication::translate("MainWindow", "24 Hour Toggle", Q_NULLPTR));
        btnNewTimeSave->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        btnNewTimeBack->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Select Event Times", Q_NULLPTR));
        btnReturnToStart->setText(QApplication::translate("MainWindow", "Return to Start", Q_NULLPTR));
        btnExit->setText(QApplication::translate("MainWindow", "End", Q_NULLPTR));
        btnListAttendanceBack->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        rdAdd->setText(QApplication::translate("MainWindow", "Add Attendance", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnListAttendanceNext->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Depending on which radio button you have selected, you will go to a different place in the program.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnListAttendanceNext->setText(QApplication::translate("MainWindow", "Next", Q_NULLPTR));
        rdView->setText(QApplication::translate("MainWindow", "&View Attendance", Q_NULLPTR));
        btnAddAttendanceToggle->setText(QApplication::translate("MainWindow", "24 Hour Toggle", Q_NULLPTR));
        btnAddAttendanceSave->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        btnAddAttendanceBack->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Select Available Times", Q_NULLPTR));
        btnViewAttendanceQuit->setText(QApplication::translate("MainWindow", "Quit", Q_NULLPTR));
        btnViewAttendanceToggle->setText(QApplication::translate("MainWindow", "24-Hour Toggle", Q_NULLPTR));
        btnViewAttendanceReturn->setText(QApplication::translate("MainWindow", "Return to Start", Q_NULLPTR));
        btnViewAttendanceBack->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
