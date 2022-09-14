/********************************************************************************
** Form generated from reading UI file 'clientwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTWIDGET_H
#define UI_CLIENTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEditPort;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEditIP;
    QPushButton *buttonconnect;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QTextEdit *textEditRead;
    QTextEdit *textEditWrite;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *buttonsend;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *buttonclose;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *ClientWidget)
    {
        if (ClientWidget->objectName().isEmpty())
            ClientWidget->setObjectName(QString::fromUtf8("ClientWidget"));
        ClientWidget->resize(800, 600);
        verticalLayout_2 = new QVBoxLayout(ClientWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget = new QWidget(ClientWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        lineEditPort = new QLineEdit(widget);
        lineEditPort->setObjectName(QString::fromUtf8("lineEditPort"));

        gridLayout->addWidget(lineEditPort, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        lineEditIP = new QLineEdit(widget);
        lineEditIP->setObjectName(QString::fromUtf8("lineEditIP"));

        gridLayout->addWidget(lineEditIP, 0, 2, 1, 1);

        buttonconnect = new QPushButton(widget);
        buttonconnect->setObjectName(QString::fromUtf8("buttonconnect"));

        gridLayout->addWidget(buttonconnect, 1, 3, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 4, 1, 1);


        verticalLayout->addLayout(gridLayout);


        verticalLayout_2->addWidget(widget);

        textEditRead = new QTextEdit(ClientWidget);
        textEditRead->setObjectName(QString::fromUtf8("textEditRead"));
        textEditRead->setReadOnly(true);

        verticalLayout_2->addWidget(textEditRead);

        textEditWrite = new QTextEdit(ClientWidget);
        textEditWrite->setObjectName(QString::fromUtf8("textEditWrite"));

        verticalLayout_2->addWidget(textEditWrite);

        widget_2 = new QWidget(ClientWidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        buttonsend = new QPushButton(widget_2);
        buttonsend->setObjectName(QString::fromUtf8("buttonsend"));

        horizontalLayout->addWidget(buttonsend);

        horizontalSpacer_5 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        buttonclose = new QPushButton(widget_2);
        buttonclose->setObjectName(QString::fromUtf8("buttonclose"));

        horizontalLayout->addWidget(buttonclose);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout_2->addWidget(widget_2);


        retranslateUi(ClientWidget);

        QMetaObject::connectSlotsByName(ClientWidget);
    } // setupUi

    void retranslateUi(QWidget *ClientWidget)
    {
        ClientWidget->setWindowTitle(QCoreApplication::translate("ClientWidget", "ClientWidget", nullptr));
        label->setText(QCoreApplication::translate("ClientWidget", "\346\234\215\345\212\241\345\231\250IP\345\234\260\345\235\200\357\274\232", nullptr));
        buttonconnect->setText(QCoreApplication::translate("ClientWidget", "Connect", nullptr));
        label_2->setText(QCoreApplication::translate("ClientWidget", "\347\253\257\345\217\243\345\217\267\357\274\232", nullptr));
        buttonsend->setText(QCoreApplication::translate("ClientWidget", "\345\217\221\351\200\201", nullptr));
        buttonclose->setText(QCoreApplication::translate("ClientWidget", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientWidget: public Ui_ClientWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWIDGET_H
