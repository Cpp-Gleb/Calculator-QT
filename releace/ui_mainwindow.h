/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *miniExpression_2;
    QPushButton *brackets;
    QPushButton *unary;
    QPushButton *procent;
    QPushButton *divide;
    QPushButton *eight;
    QPushButton *seven;
    QPushButton *nine;
    QPushButton *multiply;
    QPushButton *subtract;
    QPushButton *five;
    QPushButton *four;
    QPushButton *six;
    QPushButton *one;
    QPushButton *three;
    QPushButton *add;
    QPushButton *two;
    QPushButton *zero;
    QPushButton *point;
    QPushButton *equal;
    QLabel *ExpressionTable;
    QPushButton *clear;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(314, 491);
        QFont font;
        font.setFamilies({QString::fromUtf8("Sans Serif Collection")});
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 34, 68);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        miniExpression_2 = new QLabel(centralwidget);
        miniExpression_2->setObjectName(QString::fromUtf8("miniExpression_2"));
        miniExpression_2->setGeometry(QRect(0, -10, 315, 120));
        miniExpression_2->setMinimumSize(QSize(315, 120));
        miniExpression_2->setMaximumSize(QSize(315, 120));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Sans Serif Collection")});
        font1.setPointSize(25);
        miniExpression_2->setFont(font1);
        miniExpression_2->setStyleSheet(QString::fromUtf8("background-color: rgb(4, 191, 173);\n"
"color:rgb(255, 255, 255);\n"
"Border-radius: 15px;\n"
""));
        miniExpression_2->setMidLineWidth(0);
        miniExpression_2->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);
        miniExpression_2->setWordWrap(false);
        miniExpression_2->setMargin(0);
        miniExpression_2->setIndent(5);
        brackets = new QPushButton(centralwidget);
        brackets->setObjectName(QString::fromUtf8("brackets"));
        brackets->setEnabled(true);
        brackets->setGeometry(QRect(20, 130, 50, 50));
        brackets->setMinimumSize(QSize(45, 45));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Sans Serif Collection")});
        font2.setPointSize(15);
        font2.setStyleStrategy(QFont::NoAntialias);
        brackets->setFont(font2);
        brackets->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:25px;\n"
"background-color: rgb(8, 137, 166);\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:rgb(247, 228, 37);\n"
"}\n"
""));
        unary = new QPushButton(centralwidget);
        unary->setObjectName(QString::fromUtf8("unary"));
        unary->setGeometry(QRect(100, 130, 50, 50));
        unary->setMinimumSize(QSize(45, 45));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Sans Serif Collection")});
        font3.setPointSize(15);
        unary->setFont(font3);
        unary->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:25px;\n"
"background-color: rgb(8, 137, 166);\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:rgb(247, 228, 37);\n"
"}\n"
""));
        procent = new QPushButton(centralwidget);
        procent->setObjectName(QString::fromUtf8("procent"));
        procent->setGeometry(QRect(180, 130, 50, 50));
        procent->setMinimumSize(QSize(45, 45));
        procent->setFont(font3);
        procent->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:25px;\n"
"background-color: rgb(8, 137, 166);\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:rgb(247, 228, 37);\n"
"}\n"
""));
        divide = new QPushButton(centralwidget);
        divide->setObjectName(QString::fromUtf8("divide"));
        divide->setGeometry(QRect(260, 130, 50, 50));
        divide->setMinimumSize(QSize(45, 45));
        divide->setFont(font3);
        divide->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:25px;\n"
"background-color: rgb(8, 137, 166);\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:rgb(247, 228, 37);\n"
"}\n"
""));
        eight = new QPushButton(centralwidget);
        eight->setObjectName(QString::fromUtf8("eight"));
        eight->setGeometry(QRect(100, 200, 50, 50));
        eight->setMinimumSize(QSize(45, 45));
        eight->setFont(font3);
        eight->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"border-radius:25px;\n"
"background-color: rgb(176, 209, 216);\n"
"color:rgb(2, 72, 115)\n"
"}\n"
"QPushButton:hover{\n"
"	\n"
"	background-color: rgb(4, 191, 173);\n"
"	color:rgb(255, 255, 255);\n"
"}\n"
""));
        seven = new QPushButton(centralwidget);
        seven->setObjectName(QString::fromUtf8("seven"));
        seven->setGeometry(QRect(20, 200, 50, 50));
        seven->setMinimumSize(QSize(45, 45));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Sans Serif Collection")});
        font4.setPointSize(15);
        font4.setBold(false);
        seven->setFont(font4);
        seven->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"border-radius:25px;\n"
"background-color: rgb(176, 209, 216);\n"
"color:rgb(2, 72, 115)\n"
"}\n"
"QPushButton:hover{\n"
"	\n"
"	background-color: rgb(4, 191, 173);\n"
"	color:rgb(255, 255, 255);\n"
"}\n"
""));
        nine = new QPushButton(centralwidget);
        nine->setObjectName(QString::fromUtf8("nine"));
        nine->setGeometry(QRect(180, 200, 50, 50));
        nine->setMinimumSize(QSize(45, 45));
        nine->setFont(font3);
        nine->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"border-radius:25px;\n"
"background-color: rgb(176, 209, 216);\n"
"color:rgb(2, 72, 115)\n"
"}\n"
"QPushButton:hover{\n"
"	\n"
"	background-color: rgb(4, 191, 173);\n"
"	color:rgb(255, 255, 255);\n"
"}\n"
""));
        multiply = new QPushButton(centralwidget);
        multiply->setObjectName(QString::fromUtf8("multiply"));
        multiply->setGeometry(QRect(260, 200, 50, 50));
        multiply->setMinimumSize(QSize(45, 45));
        multiply->setFont(font3);
        multiply->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:25px;\n"
"background-color: rgb(8, 137, 166);\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:rgb(247, 228, 37);\n"
"}\n"
""));
        subtract = new QPushButton(centralwidget);
        subtract->setObjectName(QString::fromUtf8("subtract"));
        subtract->setGeometry(QRect(260, 270, 50, 50));
        subtract->setMinimumSize(QSize(45, 45));
        subtract->setFont(font3);
        subtract->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:25px;\n"
"background-color: rgb(8, 137, 166);\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:rgb(247, 228, 37);\n"
"}\n"
""));
        five = new QPushButton(centralwidget);
        five->setObjectName(QString::fromUtf8("five"));
        five->setGeometry(QRect(100, 270, 50, 50));
        five->setMinimumSize(QSize(45, 45));
        five->setFont(font3);
        five->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"border-radius:25px;\n"
"background-color: rgb(176, 209, 216);\n"
"color:rgb(2, 72, 115)\n"
"}\n"
"QPushButton:hover{\n"
"	\n"
"	background-color: rgb(4, 191, 173);\n"
"	color:rgb(255, 255, 255);\n"
"}\n"
""));
        four = new QPushButton(centralwidget);
        four->setObjectName(QString::fromUtf8("four"));
        four->setGeometry(QRect(20, 270, 50, 50));
        four->setMinimumSize(QSize(45, 45));
        four->setFont(font3);
        four->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"border-radius:25px;\n"
"background-color: rgb(176, 209, 216);\n"
"color:rgb(2, 72, 115)\n"
"}\n"
"QPushButton:hover{\n"
"	\n"
"	background-color: rgb(4, 191, 173);\n"
"	color:rgb(255, 255, 255);\n"
"}\n"
""));
        six = new QPushButton(centralwidget);
        six->setObjectName(QString::fromUtf8("six"));
        six->setGeometry(QRect(180, 270, 50, 50));
        six->setMinimumSize(QSize(45, 45));
        six->setFont(font3);
        six->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"border-radius:25px;\n"
"background-color: rgb(176, 209, 216);\n"
"color:rgb(2, 72, 115)\n"
"}\n"
"QPushButton:hover{\n"
"	\n"
"	background-color: rgb(4, 191, 173);\n"
"	color:rgb(255, 255, 255);\n"
"}\n"
""));
        one = new QPushButton(centralwidget);
        one->setObjectName(QString::fromUtf8("one"));
        one->setGeometry(QRect(20, 340, 50, 50));
        one->setMinimumSize(QSize(45, 45));
        one->setFont(font3);
        one->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"border-radius:25px;\n"
"background-color: rgb(176, 209, 216);\n"
"color:rgb(2, 72, 115)\n"
"}\n"
"QPushButton:hover{\n"
"	\n"
"	background-color: rgb(4, 191, 173);\n"
"	color:rgb(255, 255, 255);\n"
"}\n"
""));
        three = new QPushButton(centralwidget);
        three->setObjectName(QString::fromUtf8("three"));
        three->setGeometry(QRect(180, 340, 50, 50));
        three->setMinimumSize(QSize(45, 45));
        three->setFont(font3);
        three->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"border-radius:25px;\n"
"background-color: rgb(176, 209, 216);\n"
"color:rgb(2, 72, 115)\n"
"}\n"
"QPushButton:hover{\n"
"	\n"
"	background-color: rgb(4, 191, 173);\n"
"	color:rgb(255, 255, 255);\n"
"}\n"
""));
        add = new QPushButton(centralwidget);
        add->setObjectName(QString::fromUtf8("add"));
        add->setGeometry(QRect(260, 340, 50, 50));
        add->setMinimumSize(QSize(45, 45));
        add->setFont(font3);
        add->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:25px;\n"
"background-color: rgb(8, 137, 166);\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:rgb(247, 228, 37);\n"
"}\n"
""));
        two = new QPushButton(centralwidget);
        two->setObjectName(QString::fromUtf8("two"));
        two->setGeometry(QRect(100, 340, 50, 50));
        two->setMinimumSize(QSize(45, 45));
        two->setFont(font3);
        two->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"border-radius:25px;\n"
"background-color: rgb(176, 209, 216);\n"
"color:rgb(2, 72, 115)\n"
"}\n"
"QPushButton:hover{\n"
"	\n"
"	background-color: rgb(4, 191, 173);\n"
"	color:rgb(255, 255, 255);\n"
"}\n"
""));
        zero = new QPushButton(centralwidget);
        zero->setObjectName(QString::fromUtf8("zero"));
        zero->setGeometry(QRect(100, 410, 50, 50));
        zero->setMinimumSize(QSize(45, 45));
        zero->setFont(font3);
        zero->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"border-radius:25px;\n"
"background-color: rgb(176, 209, 216);\n"
"color:rgb(2, 72, 115)\n"
"}\n"
"QPushButton:hover{\n"
"	\n"
"	background-color: rgb(4, 191, 173);\n"
"	color:rgb(255, 255, 255);\n"
"}\n"
""));
        point = new QPushButton(centralwidget);
        point->setObjectName(QString::fromUtf8("point"));
        point->setGeometry(QRect(180, 410, 50, 50));
        point->setMinimumSize(QSize(45, 45));
        point->setFont(font3);
        point->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"border-radius:25px;\n"
"background-color: rgb(176, 209, 216);\n"
"color:rgb(2, 72, 115)\n"
"}\n"
"QPushButton:hover{\n"
"	\n"
"	background-color: rgb(4, 191, 173);\n"
"	color:rgb(255, 255, 255);\n"
"}\n"
""));
        equal = new QPushButton(centralwidget);
        equal->setObjectName(QString::fromUtf8("equal"));
        equal->setGeometry(QRect(260, 410, 50, 50));
        equal->setMinimumSize(QSize(45, 45));
        equal->setFont(font3);
        equal->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:25px;\n"
"background-color: rgb(8, 137, 166);\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:rgb(247, 228, 37);\n"
"}\n"
""));
        ExpressionTable = new QLabel(centralwidget);
        ExpressionTable->setObjectName(QString::fromUtf8("ExpressionTable"));
        ExpressionTable->setGeometry(QRect(110, 30, 201, 21));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Sans Serif Collection")});
        font5.setPointSize(10);
        ExpressionTable->setFont(font5);
        ExpressionTable->setStyleSheet(QString::fromUtf8("background-color: rgb(4, 191, 173);\n"
"color:rgb(255, 255, 255);"));
        ExpressionTable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        clear = new QPushButton(centralwidget);
        clear->setObjectName(QString::fromUtf8("clear"));
        clear->setGeometry(QRect(20, 410, 50, 50));
        clear->setMinimumSize(QSize(45, 45));
        clear->setFont(font3);
        clear->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"border-radius:25px;\n"
"background-color: rgb(242, 94, 94);\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:rgb(242, 125, 94);\n"
"}\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        miniExpression_2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        brackets->setText(QCoreApplication::translate("MainWindow", "()", nullptr));
        unary->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        procent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        divide->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        eight->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        seven->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        nine->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        multiply->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        subtract->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        five->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        four->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        six->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        one->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        three->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        two->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        zero->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        point->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        ExpressionTable->setText(QString());
        clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
