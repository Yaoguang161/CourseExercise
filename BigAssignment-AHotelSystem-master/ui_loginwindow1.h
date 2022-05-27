/********************************************************************************
** Form generated from reading UI file 'loginwindow1.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW1_H
#define UI_LOGINWINDOW1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginwindow1
{
public:
    QLabel *label;
    QLabel *label_2;
    QRadioButton *btnCustomer;
    QRadioButton *btnHotelM;
    QRadioButton *btnPlatformM;
    QPushButton *btnEnter;
    QPushButton *btnRegister;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLineEdit *lineAccount;
    QLabel *label_4;
    QLineEdit *linePassword;

    void setupUi(QWidget *loginwindow1)
    {
        if (loginwindow1->objectName().isEmpty())
            loginwindow1->setObjectName(QString::fromUtf8("loginwindow1"));
        loginwindow1->resize(952, 566);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(loginwindow1->sizePolicy().hasHeightForWidth());
        loginwindow1->setSizePolicy(sizePolicy);
        loginwindow1->setMinimumSize(QSize(0, 0));
        loginwindow1->setMaximumSize(QSize(10000, 10000));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setBold(true);
        loginwindow1->setFont(font);
        loginwindow1->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(loginwindow1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 531, 151));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font1.setPointSize(72);
        font1.setBold(false);
        label->setFont(font1);
        label_2 = new QLabel(loginwindow1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(250, 180, 681, 51));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font2.setPointSize(20);
        font2.setBold(false);
        label_2->setFont(font2);
        btnCustomer = new QRadioButton(loginwindow1);
        btnCustomer->setObjectName(QString::fromUtf8("btnCustomer"));
        btnCustomer->setEnabled(true);
        btnCustomer->setGeometry(QRect(100, 290, 251, 61));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font3.setPointSize(28);
        font3.setBold(false);
        btnCustomer->setFont(font3);
        btnCustomer->setAutoFillBackground(false);
        btnCustomer->setChecked(true);
        btnHotelM = new QRadioButton(loginwindow1);
        btnHotelM->setObjectName(QString::fromUtf8("btnHotelM"));
        btnHotelM->setEnabled(true);
        btnHotelM->setGeometry(QRect(100, 360, 261, 61));
        btnHotelM->setFont(font3);
        btnPlatformM = new QRadioButton(loginwindow1);
        btnPlatformM->setObjectName(QString::fromUtf8("btnPlatformM"));
        btnPlatformM->setEnabled(true);
        btnPlatformM->setGeometry(QRect(100, 440, 261, 51));
        btnPlatformM->setFont(font3);
        btnEnter = new QPushButton(loginwindow1);
        btnEnter->setObjectName(QString::fromUtf8("btnEnter"));
        btnEnter->setGeometry(QRect(730, 370, 171, 121));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font4.setPointSize(36);
        font4.setBold(false);
        btnEnter->setFont(font4);
        btnRegister = new QPushButton(loginwindow1);
        btnRegister->setObjectName(QString::fromUtf8("btnRegister"));
        btnRegister->setGeometry(QRect(730, 290, 171, 61));
        btnRegister->setFont(font2);
        layoutWidget = new QWidget(loginwindow1);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(420, 290, 271, 191));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font5.setPointSize(18);
        font5.setBold(false);
        label_3->setFont(font5);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        lineAccount = new QLineEdit(layoutWidget);
        lineAccount->setObjectName(QString::fromUtf8("lineAccount"));
        lineAccount->setEnabled(true);

        gridLayout->addWidget(lineAccount, 0, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setEnabled(true);
        label_4->setFont(font5);

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        linePassword = new QLineEdit(layoutWidget);
        linePassword->setObjectName(QString::fromUtf8("linePassword"));
        linePassword->setEnabled(true);

        gridLayout->addWidget(linePassword, 1, 1, 1, 1);


        retranslateUi(loginwindow1);

        QMetaObject::connectSlotsByName(loginwindow1);
    } // setupUi

    void retranslateUi(QWidget *loginwindow1)
    {
        loginwindow1->setWindowTitle(QCoreApplication::translate("loginwindow1", "Form", nullptr));
        label->setText(QCoreApplication::translate("loginwindow1", "\344\270\200\346\240\226\344\271\213\345\234\260", nullptr));
        label_2->setText(QCoreApplication::translate("loginwindow1", "\342\200\224\342\200\224\346\210\221\344\273\254\347\224\250\345\277\203\346\234\215\345\212\241\357\274\214\344\270\272\346\202\250\346\211\276\345\210\260\346\234\200\351\200\202\345\220\210\346\202\250\347\232\204\351\205\222\345\272\227", nullptr));
        btnCustomer->setText(QCoreApplication::translate("loginwindow1", "\347\224\250\346\210\267", nullptr));
        btnHotelM->setText(QCoreApplication::translate("loginwindow1", "\351\205\222\345\272\227\347\256\241\347\220\206\345\221\230", nullptr));
        btnPlatformM->setText(QCoreApplication::translate("loginwindow1", "\345\271\263\345\217\260\347\256\241\347\220\206\345\221\230", nullptr));
        btnEnter->setText(QCoreApplication::translate("loginwindow1", "\347\231\273\345\275\225", nullptr));
        btnRegister->setText(QCoreApplication::translate("loginwindow1", "\347\216\260\345\234\250\346\263\250\345\206\214", nullptr));
        label_3->setText(QCoreApplication::translate("loginwindow1", "\350\264\246\346\210\267", nullptr));
        label_4->setText(QCoreApplication::translate("loginwindow1", "\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginwindow1: public Ui_loginwindow1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW1_H
