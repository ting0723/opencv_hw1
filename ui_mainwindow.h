/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLoad;
    QAction *actionSave;
    QWidget *centralWidget;
    QSlider *horizontalSlider;
    QSlider *red_horizontalSlider;
    QSlider *green_horizontalSlider;
    QSlider *blue_horizontalSlider;
    QPushButton *grayscale_pushButton;
    QPushButton *blur_pushButton;
    QLabel *image_label;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *negative;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(881, 462);
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName(QStringLiteral("actionLoad"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(20, 30, 160, 22));
        horizontalSlider->setOrientation(Qt::Horizontal);
        red_horizontalSlider = new QSlider(centralWidget);
        red_horizontalSlider->setObjectName(QStringLiteral("red_horizontalSlider"));
        red_horizontalSlider->setGeometry(QRect(20, 70, 160, 22));
        red_horizontalSlider->setOrientation(Qt::Horizontal);
        green_horizontalSlider = new QSlider(centralWidget);
        green_horizontalSlider->setObjectName(QStringLiteral("green_horizontalSlider"));
        green_horizontalSlider->setGeometry(QRect(20, 110, 160, 22));
        green_horizontalSlider->setOrientation(Qt::Horizontal);
        blue_horizontalSlider = new QSlider(centralWidget);
        blue_horizontalSlider->setObjectName(QStringLiteral("blue_horizontalSlider"));
        blue_horizontalSlider->setGeometry(QRect(20, 150, 160, 22));
        blue_horizontalSlider->setOrientation(Qt::Horizontal);
        grayscale_pushButton = new QPushButton(centralWidget);
        grayscale_pushButton->setObjectName(QStringLiteral("grayscale_pushButton"));
        grayscale_pushButton->setGeometry(QRect(20, 190, 75, 23));
        blur_pushButton = new QPushButton(centralWidget);
        blur_pushButton->setObjectName(QStringLiteral("blur_pushButton"));
        blur_pushButton->setGeometry(QRect(110, 190, 75, 23));
        image_label = new QLabel(centralWidget);
        image_label->setObjectName(QStringLiteral("image_label"));
        image_label->setGeometry(QRect(200, 40, 651, 361));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 260, 161, 91));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 20, 61, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 60, 47, 12));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(70, 100, 47, 12));
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(70, 140, 47, 12));
        label_5->setAlignment(Qt::AlignCenter);
        negative = new QPushButton(centralWidget);
        negative->setObjectName(QStringLiteral("negative"));
        negative->setGeometry(QRect(60, 220, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 881, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionLoad);
        menuFile->addAction(actionSave);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionLoad->setText(QApplication::translate("MainWindow", "load", 0));
        actionSave->setText(QApplication::translate("MainWindow", "save", 0));
        grayscale_pushButton->setText(QApplication::translate("MainWindow", "grayscale", 0));
        blur_pushButton->setText(QApplication::translate("MainWindow", "blur", 0));
        image_label->setText(QString());
        label->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "brightness", 0));
        label_3->setText(QApplication::translate("MainWindow", "red", 0));
        label_4->setText(QApplication::translate("MainWindow", "green", 0));
        label_5->setText(QApplication::translate("MainWindow", "blue", 0));
        negative->setText(QApplication::translate("MainWindow", "negative", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "file", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
