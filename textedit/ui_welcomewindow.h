/********************************************************************************
** Form generated from reading UI file 'welcomewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEWINDOW_H
#define UI_WELCOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WelcomeWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page_home;
    QGroupBox *groupBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_usr;
    QLineEdit *lineEdit_usr;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_psw;
    QLineEdit *lineEdit_psw;
    QPushButton *pushButton_login;
    QPushButton *pushButton_register;
    QLabel *label_or;
    QLabel *label_logo;
    QLabel *label;
    QFrame *line;
    QWidget *page_register;
    QGroupBox *groupBox_3;
    QLabel *label_3;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_regName;
    QLineEdit *lineEdit_regName;
    QLabel *label_regSurname;
    QLineEdit *lineEdit_regSurname;
    QLabel *label_regUsr;
    QLineEdit *lineEdit_regUsr;
    QLabel *label_regPsw;
    QLineEdit *lineEdit_regPsw;
    QLabel *label_regPswConf;
    QLineEdit *lineEdit_regPswConf;
    QLabel *label_UsrIcon;
    QLabel *label_4;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit_UsrIconPath;
    QPushButton *pushButton_browse;
    QPushButton *pushButton_regConf;
    QWidget *page_open;
    QPushButton *pushButton_new;
    QGroupBox *groupBox_2;
    QListWidget *listWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_openuri;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *WelcomeWindow)
    {
        if (WelcomeWindow->objectName().isEmpty())
            WelcomeWindow->setObjectName(QString::fromUtf8("WelcomeWindow"));
        WelcomeWindow->resize(650, 430);
        WelcomeWindow->setMinimumSize(QSize(650, 430));
        WelcomeWindow->setMaximumSize(QSize(650, 430));
        QFont font;
        font.setPointSize(10);
        font.setKerning(true);
        WelcomeWindow->setFont(font);
        centralWidget = new QWidget(WelcomeWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setFont(font);
        page_home = new QWidget();
        page_home->setObjectName(QString::fromUtf8("page_home"));
        groupBox = new QGroupBox(page_home);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(330, 50, 261, 171));
        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 20, 241, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_usr = new QLabel(horizontalLayoutWidget);
        label_usr->setObjectName(QString::fromUtf8("label_usr"));

        horizontalLayout->addWidget(label_usr);

        lineEdit_usr = new QLineEdit(horizontalLayoutWidget);
        lineEdit_usr->setObjectName(QString::fromUtf8("lineEdit_usr"));
        lineEdit_usr->setFont(font);

        horizontalLayout->addWidget(lineEdit_usr);

        horizontalLayoutWidget_2 = new QWidget(groupBox);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 70, 241, 51));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_psw = new QLabel(horizontalLayoutWidget_2);
        label_psw->setObjectName(QString::fromUtf8("label_psw"));

        horizontalLayout_2->addWidget(label_psw);

        lineEdit_psw = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit_psw->setObjectName(QString::fromUtf8("lineEdit_psw"));
        lineEdit_psw->setFont(font);
        lineEdit_psw->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_psw);

        pushButton_login = new QPushButton(groupBox);
        pushButton_login->setObjectName(QString::fromUtf8("pushButton_login"));
        pushButton_login->setGeometry(QRect(10, 130, 241, 31));
        pushButton_register = new QPushButton(page_home);
        pushButton_register->setObjectName(QString::fromUtf8("pushButton_register"));
        pushButton_register->setGeometry(QRect(340, 310, 241, 31));
        label_or = new QLabel(page_home);
        label_or->setObjectName(QString::fromUtf8("label_or"));
        label_or->setGeometry(QRect(340, 280, 241, 21));
        label_or->setAlignment(Qt::AlignCenter);
        label_logo = new QLabel(page_home);
        label_logo->setObjectName(QString::fromUtf8("label_logo"));
        label_logo->setGeometry(QRect(60, 50, 171, 171));
        label = new QLabel(page_home);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 260, 171, 61));
        label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        line = new QFrame(page_home);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(270, 0, 16, 401));
        QFont font1;
        font1.setPointSize(8);
        font1.setKerning(true);
        line->setFont(font1);
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        stackedWidget->addWidget(page_home);
        page_register = new QWidget();
        page_register->setObjectName(QString::fromUtf8("page_register"));
        groupBox_3 = new QGroupBox(page_register);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 0, 611, 381));
        QFont font2;
        font2.setPointSize(11);
        font2.setKerning(true);
        groupBox_3->setFont(font2);
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 30, 591, 31));
        QFont font3;
        font3.setPointSize(14);
        label_3->setFont(font3);
        label_3->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        formLayoutWidget = new QWidget(groupBox_3);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(20, 80, 291, 301));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout->setVerticalSpacing(35);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_regName = new QLabel(formLayoutWidget);
        label_regName->setObjectName(QString::fromUtf8("label_regName"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_regName);

        lineEdit_regName = new QLineEdit(formLayoutWidget);
        lineEdit_regName->setObjectName(QString::fromUtf8("lineEdit_regName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_regName);

        label_regSurname = new QLabel(formLayoutWidget);
        label_regSurname->setObjectName(QString::fromUtf8("label_regSurname"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_regSurname);

        lineEdit_regSurname = new QLineEdit(formLayoutWidget);
        lineEdit_regSurname->setObjectName(QString::fromUtf8("lineEdit_regSurname"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_regSurname);

        label_regUsr = new QLabel(formLayoutWidget);
        label_regUsr->setObjectName(QString::fromUtf8("label_regUsr"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_regUsr);

        lineEdit_regUsr = new QLineEdit(formLayoutWidget);
        lineEdit_regUsr->setObjectName(QString::fromUtf8("lineEdit_regUsr"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_regUsr);

        label_regPsw = new QLabel(formLayoutWidget);
        label_regPsw->setObjectName(QString::fromUtf8("label_regPsw"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_regPsw);

        lineEdit_regPsw = new QLineEdit(formLayoutWidget);
        lineEdit_regPsw->setObjectName(QString::fromUtf8("lineEdit_regPsw"));
        lineEdit_regPsw->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_regPsw);

        label_regPswConf = new QLabel(formLayoutWidget);
        label_regPswConf->setObjectName(QString::fromUtf8("label_regPswConf"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_regPswConf);

        lineEdit_regPswConf = new QLineEdit(formLayoutWidget);
        lineEdit_regPswConf->setObjectName(QString::fromUtf8("lineEdit_regPswConf"));
        lineEdit_regPswConf->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_regPswConf);

        label_UsrIcon = new QLabel(groupBox_3);
        label_UsrIcon->setObjectName(QString::fromUtf8("label_UsrIcon"));
        label_UsrIcon->setGeometry(QRect(400, 80, 140, 140));
        QFont font4;
        font4.setStrikeOut(false);
        label_UsrIcon->setFont(font4);
        label_UsrIcon->setFrameShape(QFrame::StyledPanel);
        label_UsrIcon->setFrameShadow(QFrame::Plain);
        label_UsrIcon->setLineWidth(1);
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(360, 240, 231, 21));
        label_4->setAlignment(Qt::AlignCenter);
        horizontalLayoutWidget_3 = new QWidget(groupBox_3);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(360, 270, 231, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        lineEdit_UsrIconPath = new QLineEdit(horizontalLayoutWidget_3);
        lineEdit_UsrIconPath->setObjectName(QString::fromUtf8("lineEdit_UsrIconPath"));

        horizontalLayout_3->addWidget(lineEdit_UsrIconPath);

        pushButton_browse = new QPushButton(horizontalLayoutWidget_3);
        pushButton_browse->setObjectName(QString::fromUtf8("pushButton_browse"));

        horizontalLayout_3->addWidget(pushButton_browse);

        pushButton_regConf = new QPushButton(groupBox_3);
        pushButton_regConf->setObjectName(QString::fromUtf8("pushButton_regConf"));
        pushButton_regConf->setGeometry(QRect(360, 320, 231, 41));
        stackedWidget->addWidget(page_register);
        page_open = new QWidget();
        page_open->setObjectName(QString::fromUtf8("page_open"));
        pushButton_new = new QPushButton(page_open);
        pushButton_new->setObjectName(QString::fromUtf8("pushButton_new"));
        pushButton_new->setGeometry(QRect(390, 70, 211, 91));
        groupBox_2 = new QGroupBox(page_open);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(50, 20, 301, 271));
        listWidget = new QListWidget(groupBox_2);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 20, 291, 231));
        pushButton = new QPushButton(page_open);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 300, 291, 31));
        pushButton_openuri = new QPushButton(page_open);
        pushButton_openuri->setObjectName(QString::fromUtf8("pushButton_openuri"));
        pushButton_openuri->setGeometry(QRect(390, 180, 211, 91));
        stackedWidget->addWidget(page_open);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

        WelcomeWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(WelcomeWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setSizeGripEnabled(false);
        WelcomeWindow->setStatusBar(statusBar);

        retranslateUi(WelcomeWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(WelcomeWindow);
    } // setupUi

    void retranslateUi(QMainWindow *WelcomeWindow)
    {
        WelcomeWindow->setWindowTitle(QApplication::translate("WelcomeWindow", "LiveText", nullptr));
        groupBox->setTitle(QApplication::translate("WelcomeWindow", "Sign in", nullptr));
        label_usr->setText(QApplication::translate("WelcomeWindow", "Username", nullptr));
        label_psw->setText(QApplication::translate("WelcomeWindow", "Password ", nullptr));
        pushButton_login->setText(QApplication::translate("WelcomeWindow", "Login", nullptr));
        pushButton_register->setText(QApplication::translate("WelcomeWindow", "Register", nullptr));
        label_or->setText(QApplication::translate("WelcomeWindow", "If you don't have an account", nullptr));
        label_logo->setText(QString());
        label->setText(QApplication::translate("WelcomeWindow", "Politecnico di Torino\n"
"a.a 2018/2019", nullptr));
        groupBox_3->setTitle(QApplication::translate("WelcomeWindow", "Registration form", nullptr));
        label_3->setText(QApplication::translate("WelcomeWindow", "Please fill the form with required information to create your account", nullptr));
        label_regName->setText(QApplication::translate("WelcomeWindow", "Name", nullptr));
        label_regSurname->setText(QApplication::translate("WelcomeWindow", "Surname", nullptr));
        label_regUsr->setText(QApplication::translate("WelcomeWindow", "Username", nullptr));
        label_regPsw->setText(QApplication::translate("WelcomeWindow", "Password", nullptr));
        label_regPswConf->setText(QApplication::translate("WelcomeWindow", "Confirm\n"
"password", nullptr));
        label_UsrIcon->setText(QString());
        label_4->setText(QApplication::translate("WelcomeWindow", "Choose your profile icon (optional)", nullptr));
        pushButton_browse->setText(QApplication::translate("WelcomeWindow", "Browse...", nullptr));
        pushButton_regConf->setText(QApplication::translate("WelcomeWindow", "Register", nullptr));
        pushButton_new->setText(QString());
        groupBox_2->setTitle(QApplication::translate("WelcomeWindow", "Open existing file", nullptr));
        pushButton->setText(QApplication::translate("WelcomeWindow", "Open selected file", nullptr));
        pushButton_openuri->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WelcomeWindow: public Ui_WelcomeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWINDOW_H
