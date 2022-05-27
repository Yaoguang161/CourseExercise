/********************************************************************************
** Form generated from reading UI file 'whotel.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WHOTEL_H
#define UI_WHOTEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_whotel
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableWidget *table;
    QPushButton *btnChange;
    QPushButton *btnExit;
    QPushButton *btnRefresh;
    QPushButton *btnNew;
    QWidget *tab_2;
    QPushButton *btnCheckIn;
    QPushButton *btnCheckOut;
    QTableWidget *table2;
    QPushButton *btnRefresh_2;

    void setupUi(QWidget *whotel)
    {
        if (whotel->objectName().isEmpty())
            whotel->setObjectName(QString::fromUtf8("whotel"));
        whotel->resize(1053, 624);
        tabWidget = new QTabWidget(whotel);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1061, 631));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setBold(true);
        tabWidget->setFont(font);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        table = new QTableWidget(tab);
        table->setObjectName(QString::fromUtf8("table"));
        table->setGeometry(QRect(0, 170, 1051, 421));
        table->verticalHeader()->setDefaultSectionSize(100);
        btnChange = new QPushButton(tab);
        btnChange->setObjectName(QString::fromUtf8("btnChange"));
        btnChange->setGeometry(QRect(300, 40, 161, 101));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        btnChange->setFont(font1);
        btnExit = new QPushButton(tab);
        btnExit->setObjectName(QString::fromUtf8("btnExit"));
        btnExit->setGeometry(QRect(790, 40, 161, 101));
        btnExit->setFont(font1);
        btnRefresh = new QPushButton(tab);
        btnRefresh->setObjectName(QString::fromUtf8("btnRefresh"));
        btnRefresh->setGeometry(QRect(550, 40, 161, 101));
        btnRefresh->setFont(font1);
        btnNew = new QPushButton(tab);
        btnNew->setObjectName(QString::fromUtf8("btnNew"));
        btnNew->setGeometry(QRect(70, 40, 151, 101));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font2.setPointSize(20);
        font2.setBold(true);
        btnNew->setFont(font2);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        btnCheckIn = new QPushButton(tab_2);
        btnCheckIn->setObjectName(QString::fromUtf8("btnCheckIn"));
        btnCheckIn->setGeometry(QRect(420, 40, 171, 111));
        QFont font3;
        font3.setPointSize(20);
        btnCheckIn->setFont(font3);
        btnCheckOut = new QPushButton(tab_2);
        btnCheckOut->setObjectName(QString::fromUtf8("btnCheckOut"));
        btnCheckOut->setGeometry(QRect(710, 40, 171, 111));
        btnCheckOut->setFont(font3);
        table2 = new QTableWidget(tab_2);
        table2->setObjectName(QString::fromUtf8("table2"));
        table2->setGeometry(QRect(0, 190, 1051, 401));
        btnRefresh_2 = new QPushButton(tab_2);
        btnRefresh_2->setObjectName(QString::fromUtf8("btnRefresh_2"));
        btnRefresh_2->setGeometry(QRect(120, 40, 171, 111));
        btnRefresh_2->setFont(font3);
        tabWidget->addTab(tab_2, QString());

        retranslateUi(whotel);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(whotel);
    } // setupUi

    void retranslateUi(QWidget *whotel)
    {
        whotel->setWindowTitle(QCoreApplication::translate("whotel", "Form", nullptr));
        btnChange->setText(QCoreApplication::translate("whotel", "\346\233\264\346\224\271\344\277\241\346\201\257", nullptr));
        btnExit->setText(QCoreApplication::translate("whotel", "\344\277\235\345\255\230\351\200\200\345\207\272", nullptr));
        btnRefresh->setText(QCoreApplication::translate("whotel", "\345\210\267\346\226\260\345\210\227\350\241\250", nullptr));
        btnNew->setText(QCoreApplication::translate("whotel", "\346\226\260\345\273\272\346\210\277\351\227\264", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("whotel", "\346\210\277\351\227\264\345\210\227\350\241\250", nullptr));
        btnCheckIn->setText(QCoreApplication::translate("whotel", "\347\241\256\350\256\244\345\205\245\344\275\217", nullptr));
        btnCheckOut->setText(QCoreApplication::translate("whotel", "\347\241\256\350\256\244\351\200\200\346\210\277", nullptr));
        btnRefresh_2->setText(QCoreApplication::translate("whotel", "\345\210\267\346\226\260\345\210\227\350\241\250", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("whotel", "\350\256\242\345\215\225\345\210\227\350\241\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class whotel: public Ui_whotel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WHOTEL_H
