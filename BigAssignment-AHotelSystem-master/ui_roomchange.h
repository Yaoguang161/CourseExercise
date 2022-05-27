/********************************************************************************
** Form generated from reading UI file 'roomchange.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOMCHANGE_H
#define UI_ROOMCHANGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RoomChange
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineNum;
    QLineEdit *linePrice;
    QLineEdit *lineDiscount;
    QLineEdit *lineDiscription;
    QLabel *labelimag;
    QPushButton *btnOpen;
    QPushButton *btnSaveImag;
    QPushButton *btnSave;
    QPushButton *btnCancel;
    QLineEdit *lineName;

    void setupUi(QWidget *RoomChange)
    {
        if (RoomChange->objectName().isEmpty())
            RoomChange->setObjectName(QString::fromUtf8("RoomChange"));
        RoomChange->resize(603, 638);
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setBold(true);
        RoomChange->setFont(font);
        label = new QLabel(RoomChange);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 20, 401, 81));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font1.setPointSize(36);
        font1.setBold(false);
        label->setFont(font1);
        label_2 = new QLabel(RoomChange);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 120, 131, 41));
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(true);
        label_2->setFont(font2);
        label_3 = new QLabel(RoomChange);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 180, 131, 41));
        label_3->setFont(font2);
        label_4 = new QLabel(RoomChange);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(90, 250, 131, 31));
        label_4->setFont(font2);
        label_5 = new QLabel(RoomChange);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(90, 410, 131, 41));
        label_5->setFont(font2);
        label_6 = new QLabel(RoomChange);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(90, 310, 131, 41));
        label_6->setFont(font2);
        lineNum = new QLineEdit(RoomChange);
        lineNum->setObjectName(QString::fromUtf8("lineNum"));
        lineNum->setGeometry(QRect(300, 130, 161, 41));
        linePrice = new QLineEdit(RoomChange);
        linePrice->setObjectName(QString::fromUtf8("linePrice"));
        linePrice->setGeometry(QRect(300, 190, 161, 41));
        lineDiscount = new QLineEdit(RoomChange);
        lineDiscount->setObjectName(QString::fromUtf8("lineDiscount"));
        lineDiscount->setGeometry(QRect(300, 250, 161, 41));
        lineDiscription = new QLineEdit(RoomChange);
        lineDiscription->setObjectName(QString::fromUtf8("lineDiscription"));
        lineDiscription->setGeometry(QRect(300, 310, 161, 41));
        labelimag = new QLabel(RoomChange);
        labelimag->setObjectName(QString::fromUtf8("labelimag"));
        labelimag->setGeometry(QRect(240, 380, 141, 61));
        btnOpen = new QPushButton(RoomChange);
        btnOpen->setObjectName(QString::fromUtf8("btnOpen"));
        btnOpen->setGeometry(QRect(430, 390, 121, 41));
        QFont font3;
        font3.setPointSize(12);
        btnOpen->setFont(font3);
        btnSaveImag = new QPushButton(RoomChange);
        btnSaveImag->setObjectName(QString::fromUtf8("btnSaveImag"));
        btnSaveImag->setGeometry(QRect(430, 450, 121, 41));
        btnSaveImag->setFont(font3);
        btnSave = new QPushButton(RoomChange);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setGeometry(QRect(330, 520, 161, 101));
        QFont font4;
        font4.setPointSize(22);
        font4.setBold(true);
        btnSave->setFont(font4);
        btnCancel = new QPushButton(RoomChange);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setGeometry(QRect(90, 520, 151, 101));
        QFont font5;
        font5.setPointSize(26);
        btnCancel->setFont(font5);
        lineName = new QLineEdit(RoomChange);
        lineName->setObjectName(QString::fromUtf8("lineName"));
        lineName->setGeometry(QRect(240, 470, 151, 31));

        retranslateUi(RoomChange);

        QMetaObject::connectSlotsByName(RoomChange);
    } // setupUi

    void retranslateUi(QWidget *RoomChange)
    {
        RoomChange->setWindowTitle(QCoreApplication::translate("RoomChange", "Form", nullptr));
        label->setText(QCoreApplication::translate("RoomChange", "\346\233\264\346\224\271\346\210\277\351\227\264\345\261\236\346\200\247", nullptr));
        label_2->setText(QCoreApplication::translate("RoomChange", "\346\210\277\351\227\264\346\225\260\351\207\217", nullptr));
        label_3->setText(QCoreApplication::translate("RoomChange", "\346\210\277\351\227\264\344\273\267\346\240\274", nullptr));
        label_4->setText(QCoreApplication::translate("RoomChange", "\346\210\277\351\227\264\346\212\230\346\211\243", nullptr));
        label_5->setText(QCoreApplication::translate("RoomChange", "\346\210\277\351\227\264\345\233\276\347\211\207", nullptr));
        label_6->setText(QCoreApplication::translate("RoomChange", "\346\210\277\351\227\264\346\217\217\350\277\260", nullptr));
        lineDiscount->setPlaceholderText(QCoreApplication::translate("RoomChange", "\351\200\211\345\241\253", nullptr));
        lineDiscription->setPlaceholderText(QCoreApplication::translate("RoomChange", "\351\200\211\345\241\253", nullptr));
        labelimag->setText(QCoreApplication::translate("RoomChange", "TextLabel", nullptr));
        btnOpen->setText(QCoreApplication::translate("RoomChange", "\346\211\223\345\274\200\345\233\276\347\211\207", nullptr));
        btnSaveImag->setText(QCoreApplication::translate("RoomChange", "\344\277\235\345\255\230\345\233\276\347\211\207", nullptr));
        btnSave->setText(QCoreApplication::translate("RoomChange", "\347\241\256\350\256\244\344\277\235\345\255\230", nullptr));
        btnCancel->setText(QCoreApplication::translate("RoomChange", "\350\277\224\345\233\236", nullptr));
        lineName->setPlaceholderText(QCoreApplication::translate("RoomChange", "\345\233\276\347\211\207\344\277\235\345\255\230\345\220\215\347\247\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RoomChange: public Ui_RoomChange {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOMCHANGE_H
