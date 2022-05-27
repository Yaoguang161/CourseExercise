/********************************************************************************
** Form generated from reading UI file 'chooseroom.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEROOM_H
#define UI_CHOOSEROOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ChooseRoom
{
public:
    QLabel *label;
    QTableWidget *tableWidget;
    QPushButton *btnOrder;
    QPushButton *btnBack;
    QRadioButton *rbtndefault;
    QRadioButton *rbtnPrice;
    QRadioButton *rbtnComment;
    QPushButton *btnRefresh;

    void setupUi(QDialog *ChooseRoom)
    {
        if (ChooseRoom->objectName().isEmpty())
            ChooseRoom->setObjectName(QString::fromUtf8("ChooseRoom"));
        ChooseRoom->resize(946, 634);
        label = new QLabel(ChooseRoom);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 50, 261, 91));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(22);
        font.setBold(true);
        label->setFont(font);
        tableWidget = new QTableWidget(ChooseRoom);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(0, 200, 951, 441));
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setDefaultSectionSize(100);
        btnOrder = new QPushButton(ChooseRoom);
        btnOrder->setObjectName(QString::fromUtf8("btnOrder"));
        btnOrder->setGeometry(QRect(590, 40, 161, 111));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font1.setPointSize(18);
        font1.setBold(true);
        btnOrder->setFont(font1);
        btnBack = new QPushButton(ChooseRoom);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(760, 40, 161, 111));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font2.setPointSize(20);
        font2.setBold(true);
        btnBack->setFont(font2);
        rbtndefault = new QRadioButton(ChooseRoom);
        rbtndefault->setObjectName(QString::fromUtf8("rbtndefault"));
        rbtndefault->setGeometry(QRect(290, 50, 117, 21));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font3.setBold(true);
        rbtndefault->setFont(font3);
        rbtndefault->setChecked(true);
        rbtnPrice = new QRadioButton(ChooseRoom);
        rbtnPrice->setObjectName(QString::fromUtf8("rbtnPrice"));
        rbtnPrice->setGeometry(QRect(290, 90, 151, 21));
        rbtnPrice->setFont(font3);
        rbtnComment = new QRadioButton(ChooseRoom);
        rbtnComment->setObjectName(QString::fromUtf8("rbtnComment"));
        rbtnComment->setGeometry(QRect(290, 130, 161, 31));
        rbtnComment->setFont(font3);
        btnRefresh = new QPushButton(ChooseRoom);
        btnRefresh->setObjectName(QString::fromUtf8("btnRefresh"));
        btnRefresh->setGeometry(QRect(430, 40, 151, 111));
        btnRefresh->setFont(font1);

        retranslateUi(ChooseRoom);

        QMetaObject::connectSlotsByName(ChooseRoom);
    } // setupUi

    void retranslateUi(QDialog *ChooseRoom)
    {
        ChooseRoom->setWindowTitle(QCoreApplication::translate("ChooseRoom", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ChooseRoom", "\345\217\257\347\224\250\347\232\204\346\210\277\351\227\264\345\210\227\350\241\250", nullptr));
        btnOrder->setText(QCoreApplication::translate("ChooseRoom", "\347\216\260\345\234\250\350\256\242\350\264\255", nullptr));
        btnBack->setText(QCoreApplication::translate("ChooseRoom", "\345\220\216\351\200\200", nullptr));
        rbtndefault->setText(QCoreApplication::translate("ChooseRoom", "\351\273\230\350\256\244\346\216\222\345\272\217", nullptr));
        rbtnPrice->setText(QCoreApplication::translate("ChooseRoom", "\346\214\211\344\273\267\346\240\274\351\253\230\344\275\216\346\216\222\345\272\217", nullptr));
        rbtnComment->setText(QCoreApplication::translate("ChooseRoom", "\346\214\211\350\257\204\344\273\267\345\245\275\345\235\217\346\216\222\345\272\217", nullptr));
        btnRefresh->setText(QCoreApplication::translate("ChooseRoom", "\345\210\267\346\226\260\345\210\227\350\241\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChooseRoom: public Ui_ChooseRoom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEROOM_H
