/********************************************************************************
** Form generated from reading UI file 'TestApp.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTAPP_H
#define UI_TESTAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestAppClass
{
public:
    QWidget *centralWidget;
    QListWidget *issueList;
    QPushButton *issueButton;
    QLineEdit *issueEdit;
    QPushButton *deleteIssueButton;
    QPushButton *resolveButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TestAppClass)
    {
        if (TestAppClass->objectName().isEmpty())
            TestAppClass->setObjectName("TestAppClass");
        TestAppClass->resize(600, 400);
        centralWidget = new QWidget(TestAppClass);
        centralWidget->setObjectName("centralWidget");
        issueList = new QListWidget(centralWidget);
        issueList->setObjectName("issueList");
        issueList->setGeometry(QRect(20, 10, 256, 192));
        issueButton = new QPushButton(centralWidget);
        issueButton->setObjectName("issueButton");
        issueButton->setGeometry(QRect(210, 250, 80, 24));
        issueEdit = new QLineEdit(centralWidget);
        issueEdit->setObjectName("issueEdit");
        issueEdit->setGeometry(QRect(60, 250, 113, 24));
        deleteIssueButton = new QPushButton(centralWidget);
        deleteIssueButton->setObjectName("deleteIssueButton");
        deleteIssueButton->setGeometry(QRect(350, 80, 80, 24));
        resolveButton = new QPushButton(centralWidget);
        resolveButton->setObjectName("resolveButton");
        resolveButton->setGeometry(QRect(350, 140, 80, 24));
        TestAppClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TestAppClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        TestAppClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TestAppClass);
        mainToolBar->setObjectName("mainToolBar");
        TestAppClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TestAppClass);
        statusBar->setObjectName("statusBar");
        TestAppClass->setStatusBar(statusBar);

        retranslateUi(TestAppClass);

        QMetaObject::connectSlotsByName(TestAppClass);
    } // setupUi

    void retranslateUi(QMainWindow *TestAppClass)
    {
        TestAppClass->setWindowTitle(QCoreApplication::translate("TestAppClass", "TestApp", nullptr));
        issueButton->setText(QCoreApplication::translate("TestAppClass", "addIssue", nullptr));
        deleteIssueButton->setText(QCoreApplication::translate("TestAppClass", "Delete issue", nullptr));
        resolveButton->setText(QCoreApplication::translate("TestAppClass", "Resolve", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestAppClass: public Ui_TestAppClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTAPP_H
