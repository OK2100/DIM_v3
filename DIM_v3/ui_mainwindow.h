/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSpinBox *SpinBox_Nchs;
    QPushButton *Btn_AppNode;
    QLabel *lbl3_2;
    QPushButton *Btn_Random;
    QLabel *lbl1;
    QSpinBox *SpinBox_Npms;
    QLineEdit *lE1_node;
    QLabel *lbl2;
    QPushButton *Btn_Start;
    QLabel *lbl3;
    QPushButton *Btn_Stop;
    QLineEdit *lE2_name;
    QPushButton *Btn2_AppName;
    QLabel *lbl3_3;
    QRadioButton *checkLab;
    QRadioButton *checkWinCC;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(450, 222);
        MainWindow->setMinimumSize(QSize(450, 200));
        MainWindow->setMaximumSize(QSize(450, 310));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        SpinBox_Nchs = new QSpinBox(centralwidget);
        SpinBox_Nchs->setObjectName(QString::fromUtf8("SpinBox_Nchs"));
        SpinBox_Nchs->setEnabled(false);
        SpinBox_Nchs->setMinimum(1);
        SpinBox_Nchs->setMaximum(12);
        SpinBox_Nchs->setValue(1);
        SpinBox_Nchs->setDisplayIntegerBase(10);

        gridLayout->addWidget(SpinBox_Nchs, 5, 1, 1, 1);

        Btn_AppNode = new QPushButton(centralwidget);
        Btn_AppNode->setObjectName(QString::fromUtf8("Btn_AppNode"));
        Btn_AppNode->setCheckable(true);

        gridLayout->addWidget(Btn_AppNode, 2, 2, 1, 1);

        lbl3_2 = new QLabel(centralwidget);
        lbl3_2->setObjectName(QString::fromUtf8("lbl3_2"));
        lbl3_2->setEnabled(false);

        gridLayout->addWidget(lbl3_2, 5, 0, 1, 1);

        Btn_Random = new QPushButton(centralwidget);
        Btn_Random->setObjectName(QString::fromUtf8("Btn_Random"));
        Btn_Random->setEnabled(false);

        gridLayout->addWidget(Btn_Random, 14, 0, 1, 1);

        lbl1 = new QLabel(centralwidget);
        lbl1->setObjectName(QString::fromUtf8("lbl1"));

        gridLayout->addWidget(lbl1, 2, 0, 1, 1);

        SpinBox_Npms = new QSpinBox(centralwidget);
        SpinBox_Npms->setObjectName(QString::fromUtf8("SpinBox_Npms"));
        SpinBox_Npms->setMinimum(1);
        SpinBox_Npms->setMaximum(18);
        SpinBox_Npms->setValue(1);
        SpinBox_Npms->setDisplayIntegerBase(10);

        gridLayout->addWidget(SpinBox_Npms, 4, 1, 1, 1);

        lE1_node = new QLineEdit(centralwidget);
        lE1_node->setObjectName(QString::fromUtf8("lE1_node"));

        gridLayout->addWidget(lE1_node, 2, 1, 1, 1);

        lbl2 = new QLabel(centralwidget);
        lbl2->setObjectName(QString::fromUtf8("lbl2"));

        gridLayout->addWidget(lbl2, 1, 0, 1, 1);

        Btn_Start = new QPushButton(centralwidget);
        Btn_Start->setObjectName(QString::fromUtf8("Btn_Start"));
        Btn_Start->setEnabled(true);

        gridLayout->addWidget(Btn_Start, 14, 1, 1, 1);

        lbl3 = new QLabel(centralwidget);
        lbl3->setObjectName(QString::fromUtf8("lbl3"));

        gridLayout->addWidget(lbl3, 4, 0, 1, 1);

        Btn_Stop = new QPushButton(centralwidget);
        Btn_Stop->setObjectName(QString::fromUtf8("Btn_Stop"));
        Btn_Stop->setEnabled(false);

        gridLayout->addWidget(Btn_Stop, 14, 2, 1, 1);

        lE2_name = new QLineEdit(centralwidget);
        lE2_name->setObjectName(QString::fromUtf8("lE2_name"));

        gridLayout->addWidget(lE2_name, 1, 1, 1, 1);

        Btn2_AppName = new QPushButton(centralwidget);
        Btn2_AppName->setObjectName(QString::fromUtf8("Btn2_AppName"));
        Btn2_AppName->setCheckable(true);

        gridLayout->addWidget(Btn2_AppName, 1, 2, 1, 1);

        lbl3_3 = new QLabel(centralwidget);
        lbl3_3->setObjectName(QString::fromUtf8("lbl3_3"));
        lbl3_3->setEnabled(false);

        gridLayout->addWidget(lbl3_3, 5, 2, 1, 1);

        checkLab = new QRadioButton(centralwidget);
        checkLab->setObjectName(QString::fromUtf8("checkLab"));
        checkLab->setChecked(true);

        gridLayout->addWidget(checkLab, 6, 1, 1, 1);

        checkWinCC = new QRadioButton(centralwidget);
        checkWinCC->setObjectName(QString::fromUtf8("checkWinCC"));

        gridLayout->addWidget(checkWinCC, 6, 2, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnStretch(2, 1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 450, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Btn_AppNode->setText(QCoreApplication::translate("MainWindow", "Apply", nullptr));
        lbl3_2->setText(QCoreApplication::translate("MainWindow", " Channels in PM:", nullptr));
        Btn_Random->setText(QCoreApplication::translate("MainWindow", "Randomize ACT", nullptr));
        lbl1->setText(QCoreApplication::translate("MainWindow", "Set DNS node:", nullptr));
        lE1_node->setText(QCoreApplication::translate("MainWindow", "localhost", nullptr));
        lbl2->setText(QCoreApplication::translate("MainWindow", "Set Server name:", nullptr));
        Btn_Start->setText(QCoreApplication::translate("MainWindow", "Start server", nullptr));
        lbl3->setText(QCoreApplication::translate("MainWindow", "Number of PMs:", nullptr));
        Btn_Stop->setText(QCoreApplication::translate("MainWindow", "Stop server", nullptr));
        lE2_name->setText(QCoreApplication::translate("MainWindow", "FIT_DIM_server", nullptr));
        Btn2_AppName->setText(QCoreApplication::translate("MainWindow", "Apply", nullptr));
        lbl3_3->setText(QCoreApplication::translate("MainWindow", "Doesn't work yet", nullptr));
        checkLab->setText(QCoreApplication::translate("MainWindow", "For lab", nullptr));
        checkWinCC->setText(QCoreApplication::translate("MainWindow", "For WinCC", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
