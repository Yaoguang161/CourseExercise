/********************************************************************************
** Form generated from reading UI file 'registerwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWINDOW_H
#define UI_REGISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registerWindow
{
public:
    QLabel *label;
    QPushButton *btnEnter;
    QPushButton *btnCancel;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_6;
    QLineEdit *lineAccount;
    QLineEdit *linePassword2;
    QLineEdit *linePassword;
    QLabel *label_5;
    QLabel *label_3;
    QLineEdit *linePhone;

    void setupUi(QWidget *registerWindow)
    {
        if (registerWindow->objectName().isEmpty())
            registerWindow->setObjectName(QString::fromUtf8("registerWindow"));
        registerWindow->resize(613, 594);
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setBold(true);
        registerWindow->setFont(font);
        label = new QLabel(registerWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 30, 321, 91));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font1.setPointSize(48);
        font1.setBold(false);
        label->setFont(font1);
        btnEnter = new QPushButton(registerWindow);
        btnEnter->setObjectName(QString::fromUtf8("btnEnter"));
        btnEnter->setGeometry(QRect(90, 430, 161, 121));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font2.setPointSize(26);
        btnEnter->setFont(font2);
        btnCancel = new QPushButton(registerWindow);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setGeometry(QRect(340, 430, 161, 121));
        btnCancel->setFont(font2);
        layoutWidget = new QWidget(registerWindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 130, 511, 281));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font3.setPointSize(24);
        font3.setBold(false);
        label_2->setFont(font3);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font3);

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        lineAccount = new QLineEdit(layoutWidget);
        lineAccount->setObjectName(QString::fromUtf8("lineAccount"));

        gridLayout->addWidget(lineAccount, 1, 1, 1, 1);

        linePassword2 = new QLineEdit(layoutWidget);
        linePassword2->setObjectName(QString::fromUtf8("linePassword2"));

        gridLayout->addWidget(linePassword2, 4, 1, 1, 1);

        linePassword = new QLineEdit(layoutWidget);
        linePassword->setObjectName(QString::fromUtf8("linePassword"));

        gridLayout->addWidget(linePassword, 3, 1, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font3);

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font3);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        linePhone = new QLineEdit(layoutWidget);
        linePhone->setObjectName(QString::fromUtf8("linePhone"));

        gridLayout->addWidget(linePhone, 2, 1, 1, 1);


        retranslateUi(registerWindow);

        QMetaObject::connectSlotsByName(registerWindow);
    } // setupUi

    void retranslateUi(QWidget *registerWindow)
    {
        registerWindow->setWindowTitle(QCoreApplication::translate("registerWindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("registerWindow", "\347\224\250\346\210\267\346\263\250\345\206\214", nullptr));
        btnEnter->setText(QCoreApplication::translate("registerWindow", "\347\241\256\345\256\232", nullptr));
        btnCancel->setText(QCoreApplication::translate("registerWindow", "\345\217\226\346\266\210", nullptr));
        label_2->setText(QCoreApplication::translate("registerWindow", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_6->setText(QCoreApplication::translate("registerWindow", "\350\257\267\351\207\215\346\226\260\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
#if QT_CONFIG(whatsthis)
        lineAccount->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        lineAccount->setText(QString());
        linePassword2->setText(QString());
        linePassword2->setPlaceholderText(QCoreApplication::translate("registerWindow", "\350\257\267\344\270\244\346\254\241\350\276\223\345\205\245\347\233\270\345\220\214", nullptr));
        linePassword->setText(QString());
        linePassword->setPlaceholderText(QCoreApplication::translate("registerWindow", "6~11\344\275\215", nullptr));
        label_5->setText(QCoreApplication::translate("registerWindow", "\350\256\276\347\275\256\345\257\206\347\240\201", nullptr));
        label_3->setText(QCoreApplication::translate("registerWindow", "\346\211\213\346\234\272\345\217\267", nullptr));
        linePhone->setPlaceholderText(QCoreApplication::translate("registerWindow", "\344\273\205\347\224\250\344\272\216\345\217\221\351\200\201\346\266\210\346\201\257\345\222\214\346\211\276\345\233\236\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registerWindow: public Ui_registerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
