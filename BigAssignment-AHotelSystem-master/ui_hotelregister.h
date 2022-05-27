/********************************************************************************
** Form generated from reading UI file 'hotelregister.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOTELREGISTER_H
#define UI_HOTELREGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hotelregister
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineAccount;
    QLabel *label_4;
    QLineEdit *lineLisence;
    QLineEdit *linePassword;
    QLineEdit *lineHotelName;
    QLineEdit *linePassword2;
    QLabel *label_7;
    QLineEdit *linePhone;
    QLineEdit *lineAddress;
    QLineEdit *lineConsolePhone;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_10;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *lineDistrict;
    QPushButton *btnEnter;
    QPushButton *btnCancle;

    void setupUi(QWidget *hotelregister)
    {
        if (hotelregister->objectName().isEmpty())
            hotelregister->setObjectName(QString::fromUtf8("hotelregister"));
        hotelregister->resize(558, 761);
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setBold(true);
        hotelregister->setFont(font);
        label = new QLabel(hotelregister);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 30, 431, 71));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font1.setPointSize(36);
        font1.setBold(false);
        label->setFont(font1);
        layoutWidget = new QWidget(hotelregister);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 140, 481, 471));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineAccount = new QLineEdit(layoutWidget);
        lineAccount->setObjectName(QString::fromUtf8("lineAccount"));

        gridLayout->addWidget(lineAccount, 0, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font2.setPointSize(18);
        font2.setBold(false);
        label_4->setFont(font2);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        lineLisence = new QLineEdit(layoutWidget);
        lineLisence->setObjectName(QString::fromUtf8("lineLisence"));

        gridLayout->addWidget(lineLisence, 4, 1, 1, 1);

        linePassword = new QLineEdit(layoutWidget);
        linePassword->setObjectName(QString::fromUtf8("linePassword"));
        linePassword->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(linePassword, 1, 1, 1, 1);

        lineHotelName = new QLineEdit(layoutWidget);
        lineHotelName->setObjectName(QString::fromUtf8("lineHotelName"));

        gridLayout->addWidget(lineHotelName, 5, 1, 1, 1);

        linePassword2 = new QLineEdit(layoutWidget);
        linePassword2->setObjectName(QString::fromUtf8("linePassword2"));
        linePassword2->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(linePassword2, 2, 1, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font2);

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        linePhone = new QLineEdit(layoutWidget);
        linePhone->setObjectName(QString::fromUtf8("linePhone"));

        gridLayout->addWidget(linePhone, 3, 1, 1, 1);

        lineAddress = new QLineEdit(layoutWidget);
        lineAddress->setObjectName(QString::fromUtf8("lineAddress"));

        gridLayout->addWidget(lineAddress, 6, 1, 1, 1);

        lineConsolePhone = new QLineEdit(layoutWidget);
        lineConsolePhone->setObjectName(QString::fromUtf8("lineConsolePhone"));

        gridLayout->addWidget(lineConsolePhone, 8, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font2);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font2);

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font2);

        gridLayout->addWidget(label_10, 4, 0, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font2);

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font2);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font3.setPointSize(16);
        font3.setBold(false);
        label_8->setFont(font3);

        gridLayout->addWidget(label_8, 8, 0, 1, 1);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font2);

        gridLayout->addWidget(label_9, 7, 0, 1, 1);

        lineDistrict = new QLineEdit(layoutWidget);
        lineDistrict->setObjectName(QString::fromUtf8("lineDistrict"));

        gridLayout->addWidget(lineDistrict, 7, 1, 1, 1);

        btnEnter = new QPushButton(hotelregister);
        btnEnter->setObjectName(QString::fromUtf8("btnEnter"));
        btnEnter->setGeometry(QRect(70, 630, 191, 101));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font4.setPointSize(24);
        font4.setBold(false);
        btnEnter->setFont(font4);
        btnCancle = new QPushButton(hotelregister);
        btnCancle->setObjectName(QString::fromUtf8("btnCancle"));
        btnCancle->setGeometry(QRect(280, 630, 181, 101));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font5.setPointSize(26);
        font5.setBold(false);
        btnCancle->setFont(font5);

        retranslateUi(hotelregister);

        QMetaObject::connectSlotsByName(hotelregister);
    } // setupUi

    void retranslateUi(QWidget *hotelregister)
    {
        hotelregister->setWindowTitle(QCoreApplication::translate("hotelregister", "Form", nullptr));
        label->setText(QCoreApplication::translate("hotelregister", "\351\205\222\345\272\227\347\256\241\347\220\206\345\221\230\346\263\250\345\206\214", nullptr));
        lineAccount->setPlaceholderText(QCoreApplication::translate("hotelregister", "\350\257\267\345\241\253\345\206\231\347\234\237\345\220\215", nullptr));
        label_4->setText(QCoreApplication::translate("hotelregister", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        lineLisence->setPlaceholderText(QCoreApplication::translate("hotelregister", "\347\224\250\344\272\216\345\271\263\345\217\260\345\256\241\346\240\270", nullptr));
        linePassword->setPlaceholderText(QCoreApplication::translate("hotelregister", "\345\257\206\347\240\201\344\270\2726~11\344\275\215", nullptr));
        lineHotelName->setPlaceholderText(QCoreApplication::translate("hotelregister", "\351\205\222\345\272\227\345\220\215\347\247\260\345\234\25011\344\270\252\345\255\227\347\254\246\344\273\245\344\270\213", nullptr));
        linePassword2->setPlaceholderText(QCoreApplication::translate("hotelregister", "\350\257\267\344\270\244\346\254\241\350\276\223\345\205\245\344\277\235\346\214\201\344\270\200\350\207\264", nullptr));
        label_7->setText(QCoreApplication::translate("hotelregister", "\345\237\216\345\270\202", nullptr));
        linePhone->setPlaceholderText(QCoreApplication::translate("hotelregister", "\344\273\205\347\224\250\344\272\216\345\271\263\345\217\260\350\201\224\347\263\273\347\232\204\346\266\210\346\201\257\346\216\245\346\224\266", nullptr));
        lineAddress->setPlaceholderText(QCoreApplication::translate("hotelregister", "\350\257\267\350\276\223\345\205\245\345\237\216\345\270\202", nullptr));
        lineConsolePhone->setPlaceholderText(QCoreApplication::translate("hotelregister", "\347\224\250\344\272\216\351\205\222\345\272\227\350\201\224\347\263\273\357\274\214\344\270\215\345\241\253\345\210\231\351\273\230\350\256\244\344\270\216\344\270\252\344\272\272\346\211\213\346\234\272\347\233\270\345\220\214", nullptr));
        label_3->setText(QCoreApplication::translate("hotelregister", "\345\257\206\347\240\201", nullptr));
        label_6->setText(QCoreApplication::translate("hotelregister", "\351\205\222\345\272\227\345\220\215\347\247\260", nullptr));
        label_10->setText(QCoreApplication::translate("hotelregister", "\350\220\245\344\270\232\346\211\247\347\205\247\345\217\267", nullptr));
        label_5->setText(QCoreApplication::translate("hotelregister", "\344\270\252\344\272\272\346\211\213\346\234\272", nullptr));
        label_2->setText(QCoreApplication::translate("hotelregister", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_8->setText(QCoreApplication::translate("hotelregister", "\351\205\222\345\272\227\350\201\224\347\263\273\347\224\265\350\257\235", nullptr));
        label_9->setText(QCoreApplication::translate("hotelregister", "\345\234\260\345\214\272", nullptr));
        lineDistrict->setPlaceholderText(QCoreApplication::translate("hotelregister", "\350\257\267\350\276\223\345\205\245\347\233\270\345\272\224\345\234\260\345\214\272", nullptr));
        btnEnter->setText(QCoreApplication::translate("hotelregister", "\347\241\256\350\256\244\346\263\250\345\206\214", nullptr));
        btnCancle->setText(QCoreApplication::translate("hotelregister", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class hotelregister: public Ui_hotelregister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOTELREGISTER_H
