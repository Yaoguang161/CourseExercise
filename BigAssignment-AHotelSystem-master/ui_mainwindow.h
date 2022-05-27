/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableWidget *table;
    QPushButton *btnSearch;
    QLineEdit *lineSearchCity;
    QLabel *label;
    QRadioButton *rbtnDefault;
    QRadioButton *rbtnComment;
    QRadioButton *rbtnPrice;
    QPushButton *btnExit;
    QCalendarWidget *calendarWidget;
    QLineEdit *lineDays;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *btnDetail;
    QLineEdit *lineSearchDis;
    QComboBox *comboBox;
    QWidget *tab_2;
    QTableWidget *table2;
    QLabel *label_7;
    QPushButton *btnPay;
    QPushButton *btnRefund;
    QPushButton *btnComment;
    QPushButton *btnRefresh;
    QWidget *tab_3;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QPushButton *btnChangePass;
    QLineEdit *lineOldPassword;
    QLineEdit *lineNewPasss;
    QPushButton *pushButton_2;
    QLabel *label_4;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1008, 707);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1011, 711));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setBold(true);
        tabWidget->setFont(font);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setIconSize(QSize(30, 30));
        tabWidget->setElideMode(Qt::ElideMiddle);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        table = new QTableWidget(tab);
        table->setObjectName(QString::fromUtf8("table"));
        table->setGeometry(QRect(0, 300, 741, 331));
        table->setRowCount(0);
        btnSearch = new QPushButton(tab);
        btnSearch->setObjectName(QString::fromUtf8("btnSearch"));
        btnSearch->setGeometry(QRect(770, 300, 221, 91));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font1.setPointSize(28);
        font1.setBold(true);
        btnSearch->setFont(font1);
        lineSearchCity = new QLineEdit(tab);
        lineSearchCity->setObjectName(QString::fromUtf8("lineSearchCity"));
        lineSearchCity->setGeometry(QRect(20, 100, 181, 41));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 411, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font2.setPointSize(24);
        font2.setBold(true);
        label->setFont(font2);
        label->setTextFormat(Qt::AutoText);
        rbtnDefault = new QRadioButton(tab);
        rbtnDefault->setObjectName(QString::fromUtf8("rbtnDefault"));
        rbtnDefault->setGeometry(QRect(230, 110, 161, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font3.setPointSize(12);
        font3.setBold(true);
        rbtnDefault->setFont(font3);
        rbtnDefault->setChecked(true);
        rbtnComment = new QRadioButton(tab);
        rbtnComment->setObjectName(QString::fromUtf8("rbtnComment"));
        rbtnComment->setGeometry(QRect(230, 220, 171, 41));
        rbtnComment->setFont(font3);
        rbtnPrice = new QRadioButton(tab);
        rbtnPrice->setObjectName(QString::fromUtf8("rbtnPrice"));
        rbtnPrice->setGeometry(QRect(230, 170, 171, 31));
        rbtnPrice->setFont(font3);
        btnExit = new QPushButton(tab);
        btnExit->setObjectName(QString::fromUtf8("btnExit"));
        btnExit->setGeometry(QRect(770, 500, 221, 91));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font4.setPointSize(16);
        font4.setBold(true);
        btnExit->setFont(font4);
        calendarWidget = new QCalendarWidget(tab);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(430, 50, 311, 231));
        lineDays = new QLineEdit(tab);
        lineDays->setObjectName(QString::fromUtf8("lineDays"));
        lineDays->setGeometry(QRect(780, 180, 181, 41));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(770, 100, 201, 41));
        label_2->setFont(font4);
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(500, 10, 131, 31));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font5.setPointSize(11);
        font5.setBold(true);
        label_3->setFont(font5);
        btnDetail = new QPushButton(tab);
        btnDetail->setObjectName(QString::fromUtf8("btnDetail"));
        btnDetail->setGeometry(QRect(770, 400, 221, 91));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font6.setPointSize(20);
        font6.setBold(true);
        btnDetail->setFont(font6);
        lineSearchDis = new QLineEdit(tab);
        lineSearchDis->setObjectName(QString::fromUtf8("lineSearchDis"));
        lineSearchDis->setGeometry(QRect(20, 160, 181, 41));
        comboBox = new QComboBox(tab);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(20, 220, 181, 31));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        table2 = new QTableWidget(tab_2);
        table2->setObjectName(QString::fromUtf8("table2"));
        table2->setGeometry(QRect(0, 90, 791, 501));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(270, 10, 241, 71));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font7.setPointSize(36);
        font7.setBold(false);
        label_7->setFont(font7);
        btnPay = new QPushButton(tab_2);
        btnPay->setObjectName(QString::fromUtf8("btnPay"));
        btnPay->setGeometry(QRect(810, 210, 181, 111));
        btnPay->setFont(font2);
        btnRefund = new QPushButton(tab_2);
        btnRefund->setObjectName(QString::fromUtf8("btnRefund"));
        btnRefund->setGeometry(QRect(810, 330, 181, 111));
        btnRefund->setFont(font2);
        btnComment = new QPushButton(tab_2);
        btnComment->setObjectName(QString::fromUtf8("btnComment"));
        btnComment->setGeometry(QRect(810, 450, 181, 111));
        btnComment->setFont(font2);
        btnRefresh = new QPushButton(tab_2);
        btnRefresh->setObjectName(QString::fromUtf8("btnRefresh"));
        btnRefresh->setGeometry(QRect(810, 90, 181, 111));
        btnRefresh->setFont(font2);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 30, 941, 111));
        label_5->setFont(font7);
        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(220, 150, 571, 101));
        label_6->setFont(font7);
        lineEdit = new QLineEdit(tab_3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(120, 350, 191, 31));
        btnChangePass = new QPushButton(tab_3);
        btnChangePass->setObjectName(QString::fromUtf8("btnChangePass"));
        btnChangePass->setGeometry(QRect(120, 500, 191, 41));
        lineOldPassword = new QLineEdit(tab_3);
        lineOldPassword->setObjectName(QString::fromUtf8("lineOldPassword"));
        lineOldPassword->setGeometry(QRect(120, 400, 191, 31));
        lineNewPasss = new QLineEdit(tab_3);
        lineNewPasss->setObjectName(QString::fromUtf8("lineNewPasss"));
        lineNewPasss->setGeometry(QRect(120, 450, 191, 31));
        pushButton_2 = new QPushButton(tab_3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(340, 350, 121, 31));
        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(120, 300, 81, 31));
        label_4->setFont(font3);
        tabWidget->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1008, 22));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnSearch->setText(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242", nullptr));
        lineSearchCity->setPlaceholderText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242\345\237\216\345\270\202", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242\346\202\250\344\270\255\346\204\217\347\232\204\344\270\200\346\240\226\344\271\213\345\234\260", nullptr));
        rbtnDefault->setText(QCoreApplication::translate("MainWindow", "\351\273\230\350\256\244\346\216\222\345\272\217", nullptr));
        rbtnComment->setText(QCoreApplication::translate("MainWindow", "\346\214\211\350\257\204\344\273\267\345\245\275\345\235\217\346\216\222\345\272\217", nullptr));
        rbtnPrice->setText(QCoreApplication::translate("MainWindow", "\346\214\211\344\273\267\346\240\274\351\253\230\344\275\216\346\216\222\345\272\217", nullptr));
        btnExit->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\345\271\266\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\345\205\245\344\275\217\345\244\251\346\225\260", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\350\257\267\351\200\211\346\213\251\345\205\245\344\275\217\346\227\245\346\234\237", nullptr));
        btnDetail->setText(QCoreApplication::translate("MainWindow", "\346\237\245\347\234\213\350\257\246\347\273\206\344\277\241\346\201\257", nullptr));
        lineSearchDis->setPlaceholderText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242\345\234\260\345\214\272\357\274\210\345\217\257\344\270\215\345\241\253\357\274\211", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "\346\211\200\346\234\211\346\210\277\345\236\213", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "\351\222\237\347\202\271\346\210\277", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "\345\217\214\344\272\272\346\210\277", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "\345\244\247\345\272\212\346\210\277", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "\345\245\242\345\215\216\346\210\277", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("MainWindow", "\346\200\273\347\273\237\345\245\227\346\210\277", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242\351\205\222\345\272\227", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\350\256\242\345\215\225\345\210\227\350\241\250", nullptr));
        btnPay->setText(QCoreApplication::translate("MainWindow", "\347\241\256\350\256\244\344\273\230\346\254\276", nullptr));
        btnRefund->setText(QCoreApplication::translate("MainWindow", "\347\224\263\350\257\267\351\200\200\346\254\276", nullptr));
        btnComment->setText(QCoreApplication::translate("MainWindow", "\350\257\204\344\273\267\350\256\242\345\215\225", nullptr));
        btnRefresh->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260\345\210\227\350\241\250", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\350\256\242\345\215\225\345\210\227\350\241\250", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\344\270\200\346\240\226\344\271\213\345\234\260\342\200\224\342\200\224\351\205\222\345\272\227\351\242\204\350\256\242\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "C++\347\250\213\345\272\217\350\256\276\350\256\241\344\270\216\350\256\255\347\273\203", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\346\211\213\346\234\272\351\252\214\350\257\201\347\240\201", nullptr));
        btnChangePass->setText(QCoreApplication::translate("MainWindow", "\347\241\256\350\256\244\346\233\264\346\224\271", nullptr));
        lineOldPassword->setPlaceholderText(QCoreApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\346\227\247\345\257\206\347\240\201", nullptr));
        lineNewPasss->setPlaceholderText(QCoreApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\346\226\260\345\257\206\347\240\201", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\350\216\267\345\217\226\346\211\213\346\234\272\351\252\214\350\257\201\347\240\201", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\346\233\264\346\224\271\345\257\206\347\240\201", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "\344\277\241\346\201\257\347\273\264\346\212\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
