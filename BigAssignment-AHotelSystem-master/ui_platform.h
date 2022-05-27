/********************************************************************************
** Form generated from reading UI file 'platform.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLATFORM_H
#define UI_PLATFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Platform
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableWidget *table1;
    QLabel *label;
    QLabel *labelHotelNum;
    QPushButton *btnApproveHotel;
    QPushButton *btnSaveAndExit;
    QPushButton *btnRefreshtable1;
    QPushButton *btnSTOP;
    QWidget *tab_3;
    QTableWidget *table2;
    QPushButton *btnApproveRoom;
    QLabel *label_2;
    QLabel *labelNum2;
    QPushButton *btnRefreshtable2;
    QWidget *tab_2;
    QTableWidget *table3;
    QLabel *label_4;
    QLabel *labelRefundNum;
    QPushButton *btnApproveOrder;
    QPushButton *btnRefreshtable3;
    QWidget *tab_4;
    QTableWidget *table4;
    QLabel *label_3;
    QPushButton *btnDisable;
    QPushButton *btnRefreshTable4;

    void setupUi(QWidget *Platform)
    {
        if (Platform->objectName().isEmpty())
            Platform->setObjectName(QString::fromUtf8("Platform"));
        Platform->resize(1006, 649);
        tabWidget = new QTabWidget(Platform);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1021, 651));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setBold(true);
        tabWidget->setFont(font);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        table1 = new QTableWidget(tab);
        table1->setObjectName(QString::fromUtf8("table1"));
        table1->setGeometry(QRect(0, 170, 1011, 451));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 40, 221, 81));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font1.setPointSize(24);
        font1.setBold(true);
        label->setFont(font1);
        labelHotelNum = new QLabel(tab);
        labelHotelNum->setObjectName(QString::fromUtf8("labelHotelNum"));
        labelHotelNum->setGeometry(QRect(250, 60, 101, 51));
        QFont font2;
        font2.setPointSize(12);
        labelHotelNum->setFont(font2);
        btnApproveHotel = new QPushButton(tab);
        btnApproveHotel->setObjectName(QString::fromUtf8("btnApproveHotel"));
        btnApproveHotel->setGeometry(QRect(510, 30, 131, 91));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font3.setPointSize(18);
        font3.setBold(true);
        btnApproveHotel->setFont(font3);
        btnSaveAndExit = new QPushButton(tab);
        btnSaveAndExit->setObjectName(QString::fromUtf8("btnSaveAndExit"));
        btnSaveAndExit->setGeometry(QRect(810, 30, 141, 91));
        QFont font4;
        font4.setPointSize(18);
        btnSaveAndExit->setFont(font4);
        btnRefreshtable1 = new QPushButton(tab);
        btnRefreshtable1->setObjectName(QString::fromUtf8("btnRefreshtable1"));
        btnRefreshtable1->setGeometry(QRect(660, 30, 131, 91));
        btnRefreshtable1->setFont(font4);
        btnSTOP = new QPushButton(tab);
        btnSTOP->setObjectName(QString::fromUtf8("btnSTOP"));
        btnSTOP->setGeometry(QRect(370, 30, 121, 91));
        QFont font5;
        font5.setPointSize(16);
        font5.setBold(true);
        btnSTOP->setFont(font5);
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        table2 = new QTableWidget(tab_3);
        table2->setObjectName(QString::fromUtf8("table2"));
        table2->setGeometry(QRect(0, 150, 1001, 471));
        table2->verticalHeader()->setDefaultSectionSize(100);
        btnApproveRoom = new QPushButton(tab_3);
        btnApproveRoom->setObjectName(QString::fromUtf8("btnApproveRoom"));
        btnApproveRoom->setGeometry(QRect(580, 30, 181, 101));
        QFont font6;
        font6.setPointSize(24);
        font6.setBold(true);
        btnApproveRoom->setFont(font6);
        label_2 = new QLabel(tab_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 30, 241, 81));
        QFont font7;
        font7.setPointSize(28);
        font7.setBold(true);
        label_2->setFont(font7);
        labelNum2 = new QLabel(tab_3);
        labelNum2->setObjectName(QString::fromUtf8("labelNum2"));
        labelNum2->setGeometry(QRect(350, 40, 131, 61));
        labelNum2->setFont(font4);
        btnRefreshtable2 = new QPushButton(tab_3);
        btnRefreshtable2->setObjectName(QString::fromUtf8("btnRefreshtable2"));
        btnRefreshtable2->setGeometry(QRect(790, 30, 181, 101));
        QFont font8;
        font8.setPointSize(24);
        btnRefreshtable2->setFont(font8);
        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        table3 = new QTableWidget(tab_2);
        table3->setObjectName(QString::fromUtf8("table3"));
        table3->setGeometry(QRect(0, 140, 1011, 481));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 40, 241, 61));
        QFont font9;
        font9.setPointSize(28);
        label_4->setFont(font9);
        labelRefundNum = new QLabel(tab_2);
        labelRefundNum->setObjectName(QString::fromUtf8("labelRefundNum"));
        labelRefundNum->setGeometry(QRect(340, 50, 121, 51));
        labelRefundNum->setFont(font4);
        btnApproveOrder = new QPushButton(tab_2);
        btnApproveOrder->setObjectName(QString::fromUtf8("btnApproveOrder"));
        btnApproveOrder->setGeometry(QRect(600, 20, 171, 101));
        QFont font10;
        font10.setPointSize(22);
        font10.setBold(true);
        btnApproveOrder->setFont(font10);
        btnRefreshtable3 = new QPushButton(tab_2);
        btnRefreshtable3->setObjectName(QString::fromUtf8("btnRefreshtable3"));
        btnRefreshtable3->setGeometry(QRect(790, 20, 171, 101));
        QFont font11;
        font11.setPointSize(22);
        btnRefreshtable3->setFont(font11);
        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        table4 = new QTableWidget(tab_4);
        table4->setObjectName(QString::fromUtf8("table4"));
        table4->setGeometry(QRect(0, 150, 1011, 471));
        label_3 = new QLabel(tab_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 30, 201, 81));
        label_3->setFont(font9);
        btnDisable = new QPushButton(tab_4);
        btnDisable->setObjectName(QString::fromUtf8("btnDisable"));
        btnDisable->setGeometry(QRect(780, 30, 171, 91));
        QFont font12;
        font12.setPointSize(20);
        font12.setBold(true);
        btnDisable->setFont(font12);
        btnRefreshTable4 = new QPushButton(tab_4);
        btnRefreshTable4->setObjectName(QString::fromUtf8("btnRefreshTable4"));
        btnRefreshTable4->setGeometry(QRect(560, 30, 151, 91));
        QFont font13;
        font13.setPointSize(18);
        font13.setBold(true);
        btnRefreshTable4->setFont(font13);
        tabWidget->addTab(tab_4, QString());

        retranslateUi(Platform);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Platform);
    } // setupUi

    void retranslateUi(QWidget *Platform)
    {
        Platform->setWindowTitle(QCoreApplication::translate("Platform", "Form", nullptr));
        label->setText(QCoreApplication::translate("Platform", "\345\276\205\345\256\241\346\240\270\351\205\222\345\272\227", nullptr));
        labelHotelNum->setText(QString());
        btnApproveHotel->setText(QCoreApplication::translate("Platform", "\351\200\232\350\277\207\345\256\241\346\240\270", nullptr));
        btnSaveAndExit->setText(QCoreApplication::translate("Platform", "\344\277\235\345\255\230\351\200\200\345\207\272", nullptr));
        btnRefreshtable1->setText(QCoreApplication::translate("Platform", "\345\210\267\346\226\260\345\210\227\350\241\250", nullptr));
        btnSTOP->setText(QCoreApplication::translate("Platform", "\345\201\234\344\270\232\346\225\264\346\224\271", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Platform", "\351\205\222\345\272\227\345\210\227\350\241\250", nullptr));
        btnApproveRoom->setText(QCoreApplication::translate("Platform", "\351\200\232\350\277\207\345\256\241\346\240\270", nullptr));
        label_2->setText(QCoreApplication::translate("Platform", "\345\276\205\345\256\241\346\240\270\346\210\277\351\227\264", nullptr));
        labelNum2->setText(QString());
        btnRefreshtable2->setText(QCoreApplication::translate("Platform", "\345\210\267\346\226\260\345\210\227\350\241\250", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("Platform", "\346\210\277\351\227\264\345\210\227\350\241\250", nullptr));
        label_4->setText(QCoreApplication::translate("Platform", "\345\276\205\345\256\241\346\240\270\351\200\200\346\254\276", nullptr));
        labelRefundNum->setText(QString());
        btnApproveOrder->setText(QCoreApplication::translate("Platform", "\351\200\232\350\277\207\345\256\241\346\240\270", nullptr));
        btnRefreshtable3->setText(QCoreApplication::translate("Platform", "\345\210\267\346\226\260\345\210\227\350\241\250", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Platform", "\350\256\242\345\215\225\345\210\227\350\241\250", nullptr));
        label_3->setText(QCoreApplication::translate("Platform", "\347\224\250\346\210\267\345\210\227\350\241\250", nullptr));
        btnDisable->setText(QCoreApplication::translate("Platform", "\346\263\250\351\224\200\347\224\250\346\210\267", nullptr));
        btnRefreshTable4->setText(QCoreApplication::translate("Platform", "\345\210\267\346\226\260\345\210\227\350\241\250", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("Platform", "\347\224\250\346\210\267\345\210\227\350\241\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Platform: public Ui_Platform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLATFORM_H
