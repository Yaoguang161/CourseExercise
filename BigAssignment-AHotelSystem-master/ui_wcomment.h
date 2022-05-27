/********************************************************************************
** Form generated from reading UI file 'wcomment.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WCOMMENT_H
#define UI_WCOMMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WComment
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QPushButton *btnOk;
    QPushButton *btnCancel;

    void setupUi(QDialog *WComment)
    {
        if (WComment->objectName().isEmpty())
            WComment->setObjectName(QString::fromUtf8("WComment"));
        WComment->resize(499, 419);
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setBold(true);
        WComment->setFont(font);
        label = new QLabel(WComment);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 30, 81, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font1.setPointSize(16);
        font1.setBold(true);
        label->setFont(font1);
        layoutWidget = new QWidget(WComment);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 90, 351, 221));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(layoutWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        gridLayout->addWidget(radioButton, 0, 0, 1, 1);

        radioButton_2 = new QRadioButton(layoutWidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        gridLayout->addWidget(radioButton_2, 1, 0, 1, 1);

        radioButton_3 = new QRadioButton(layoutWidget);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        gridLayout->addWidget(radioButton_3, 2, 0, 1, 1);

        radioButton_4 = new QRadioButton(layoutWidget);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        gridLayout->addWidget(radioButton_4, 3, 0, 1, 1);

        radioButton_5 = new QRadioButton(layoutWidget);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));

        gridLayout->addWidget(radioButton_5, 4, 0, 1, 1);

        btnOk = new QPushButton(WComment);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));
        btnOk->setGeometry(QRect(290, 320, 131, 71));
        QFont font2;
        font2.setPointSize(18);
        btnOk->setFont(font2);
        btnCancel = new QPushButton(WComment);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setGeometry(QRect(80, 320, 141, 71));
        QFont font3;
        font3.setPointSize(18);
        font3.setBold(true);
        btnCancel->setFont(font3);

        retranslateUi(WComment);

        QMetaObject::connectSlotsByName(WComment);
    } // setupUi

    void retranslateUi(QDialog *WComment)
    {
        WComment->setWindowTitle(QCoreApplication::translate("WComment", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("WComment", "\350\257\267\350\257\204\344\273\267", nullptr));
        radioButton->setText(QCoreApplication::translate("WComment", "\346\234\215\345\212\241\345\276\210\347\203\202\357\274\201\345\267\256\350\257\204\346\262\241\345\225\206\351\207\217", nullptr));
        radioButton_2->setText(QCoreApplication::translate("WComment", "\345\213\211\345\274\272\345\217\257\344\273\245\346\216\245\345\217\227", nullptr));
        radioButton_3->setText(QCoreApplication::translate("WComment", "\344\270\215\351\224\231\345\223\246", nullptr));
        radioButton_4->setText(QCoreApplication::translate("WComment", "\345\244\252\350\265\236\344\272\206\357\274\201", nullptr));
        radioButton_5->setText(QCoreApplication::translate("WComment", "\346\210\221\345\207\206\345\244\207\346\220\254\345\256\266\346\235\245\350\277\231\351\207\214\345\225\246", nullptr));
        btnOk->setText(QCoreApplication::translate("WComment", "\347\241\256\345\256\232", nullptr));
        btnCancel->setText(QCoreApplication::translate("WComment", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WComment: public Ui_WComment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WCOMMENT_H
