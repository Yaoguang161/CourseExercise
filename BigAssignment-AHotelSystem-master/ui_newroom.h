/********************************************************************************
** Form generated from reading UI file 'newroom.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWROOM_H
#define UI_NEWROOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewRoom
{
public:
    QLabel *lableImage;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *linePrice;
    QLineEdit *lineNum;
    QLineEdit *lineDiscount;
    QLineEdit *lineDiscription;
    QLabel *label_8;
    QPushButton *btnOpen;
    QPushButton *btnSaveImage;
    QPushButton *btnCancel;
    QPushButton *btnEnter;
    QComboBox *comboBox;
    QLineEdit *lineName;

    void setupUi(QWidget *NewRoom)
    {
        if (NewRoom->objectName().isEmpty())
            NewRoom->setObjectName(QString::fromUtf8("NewRoom"));
        NewRoom->resize(555, 591);
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setBold(true);
        NewRoom->setFont(font);
        lableImage = new QLabel(NewRoom);
        lableImage->setObjectName(QString::fromUtf8("lableImage"));
        lableImage->setGeometry(QRect(220, 350, 131, 61));
        label_2 = new QLabel(NewRoom);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 10, 291, 71));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font1.setPointSize(28);
        font1.setBold(false);
        label_2->setFont(font1);
        label_3 = new QLabel(NewRoom);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 100, 111, 31));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        label_3->setFont(font2);
        label_4 = new QLabel(NewRoom);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(90, 150, 141, 31));
        label_4->setFont(font2);
        label_5 = new QLabel(NewRoom);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(90, 190, 131, 41));
        label_5->setFont(font2);
        label_6 = new QLabel(NewRoom);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(90, 250, 101, 31));
        label_6->setFont(font2);
        label_7 = new QLabel(NewRoom);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(90, 390, 91, 31));
        QFont font3;
        font3.setPointSize(12);
        label_7->setFont(font3);
        linePrice = new QLineEdit(NewRoom);
        linePrice->setObjectName(QString::fromUtf8("linePrice"));
        linePrice->setGeometry(QRect(270, 150, 151, 31));
        lineNum = new QLineEdit(NewRoom);
        lineNum->setObjectName(QString::fromUtf8("lineNum"));
        lineNum->setGeometry(QRect(270, 200, 151, 31));
        lineDiscount = new QLineEdit(NewRoom);
        lineDiscount->setObjectName(QString::fromUtf8("lineDiscount"));
        lineDiscount->setGeometry(QRect(270, 250, 151, 31));
        lineDiscription = new QLineEdit(NewRoom);
        lineDiscription->setObjectName(QString::fromUtf8("lineDiscription"));
        lineDiscription->setGeometry(QRect(270, 300, 151, 31));
        label_8 = new QLabel(NewRoom);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(90, 300, 91, 31));
        label_8->setFont(font2);
        btnOpen = new QPushButton(NewRoom);
        btnOpen->setObjectName(QString::fromUtf8("btnOpen"));
        btnOpen->setGeometry(QRect(420, 360, 101, 41));
        btnSaveImage = new QPushButton(NewRoom);
        btnSaveImage->setObjectName(QString::fromUtf8("btnSaveImage"));
        btnSaveImage->setGeometry(QRect(420, 420, 101, 41));
        btnCancel = new QPushButton(NewRoom);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setGeometry(QRect(120, 480, 141, 91));
        QFont font4;
        font4.setPointSize(22);
        font4.setBold(true);
        btnCancel->setFont(font4);
        btnEnter = new QPushButton(NewRoom);
        btnEnter->setObjectName(QString::fromUtf8("btnEnter"));
        btnEnter->setGeometry(QRect(330, 480, 141, 91));
        QFont font5;
        font5.setPointSize(22);
        btnEnter->setFont(font5);
        comboBox = new QComboBox(NewRoom);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(270, 100, 151, 31));
        lineName = new QLineEdit(NewRoom);
        lineName->setObjectName(QString::fromUtf8("lineName"));
        lineName->setGeometry(QRect(240, 430, 121, 31));

        retranslateUi(NewRoom);

        QMetaObject::connectSlotsByName(NewRoom);
    } // setupUi

    void retranslateUi(QWidget *NewRoom)
    {
        NewRoom->setWindowTitle(QCoreApplication::translate("NewRoom", "Form", nullptr));
        lableImage->setText(QString());
        label_2->setText(QCoreApplication::translate("NewRoom", "\345\210\233\345\273\272\346\210\277\351\227\264\344\277\241\346\201\257", nullptr));
        label_3->setText(QCoreApplication::translate("NewRoom", "\346\210\277\351\227\264\347\261\273\345\236\213", nullptr));
        label_4->setText(QCoreApplication::translate("NewRoom", "\346\210\277\351\227\264\344\273\267\346\240\274(/\346\231\232)", nullptr));
        label_5->setText(QCoreApplication::translate("NewRoom", "\346\210\277\351\227\264\346\225\260\351\207\217", nullptr));
        label_6->setText(QCoreApplication::translate("NewRoom", "\346\210\277\351\227\264\346\212\230\346\211\243", nullptr));
        label_7->setText(QCoreApplication::translate("NewRoom", "\346\210\277\351\227\264\345\233\276\347\211\207", nullptr));
        lineDiscount->setPlaceholderText(QCoreApplication::translate("NewRoom", "\351\200\211\345\241\253", nullptr));
        lineDiscription->setPlaceholderText(QCoreApplication::translate("NewRoom", "\351\200\211\345\241\253", nullptr));
        label_8->setText(QCoreApplication::translate("NewRoom", "\346\210\277\351\227\264\346\217\217\350\277\260", nullptr));
        btnOpen->setText(QCoreApplication::translate("NewRoom", "\346\211\223\345\274\200\345\233\276\347\211\207", nullptr));
        btnSaveImage->setText(QCoreApplication::translate("NewRoom", "\344\277\235\345\255\230\345\233\276\347\211\207", nullptr));
        btnCancel->setText(QCoreApplication::translate("NewRoom", "\350\277\224\345\233\236", nullptr));
        btnEnter->setText(QCoreApplication::translate("NewRoom", "\347\241\256\345\256\232", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("NewRoom", "\351\222\237\347\202\271\346\210\277", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("NewRoom", "\345\244\247\345\272\212\346\210\277", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("NewRoom", "\345\217\214\344\272\272\346\210\277", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("NewRoom", "\345\245\242\345\215\216\346\210\277", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("NewRoom", "\346\200\273\347\273\237\345\245\227\346\210\277", nullptr));

        lineName->setPlaceholderText(QCoreApplication::translate("NewRoom", "\345\233\276\347\211\207\345\220\215\347\247\260\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewRoom: public Ui_NewRoom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWROOM_H
