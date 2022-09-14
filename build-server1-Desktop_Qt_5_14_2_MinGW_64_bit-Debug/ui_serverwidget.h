/********************************************************************************
** Form generated from reading UI file 'serverwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERWIDGET_H
#define UI_SERVERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServerWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEditRead;
    QTextEdit *textEditWrite;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonsend;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *buttonclose;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *ServerWidget)
    {
        if (ServerWidget->objectName().isEmpty())
            ServerWidget->setObjectName(QString::fromUtf8("ServerWidget"));
        ServerWidget->resize(800, 600);
        verticalLayout_2 = new QVBoxLayout(ServerWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(ServerWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe \351\273\221\344\275\223 Std R"));
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        widget_2 = new QWidget(ServerWidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEditRead = new QTextEdit(widget_2);
        textEditRead->setObjectName(QString::fromUtf8("textEditRead"));
        textEditRead->setReadOnly(true);

        verticalLayout->addWidget(textEditRead);

        textEditWrite = new QTextEdit(widget_2);
        textEditWrite->setObjectName(QString::fromUtf8("textEditWrite"));

        verticalLayout->addWidget(textEditWrite);


        verticalLayout_2->addWidget(widget_2);

        widget = new QWidget(ServerWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonsend = new QPushButton(widget);
        buttonsend->setObjectName(QString::fromUtf8("buttonsend"));

        horizontalLayout->addWidget(buttonsend);

        horizontalSpacer_3 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        buttonclose = new QPushButton(widget);
        buttonclose->setObjectName(QString::fromUtf8("buttonclose"));

        horizontalLayout->addWidget(buttonclose);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addWidget(widget);


        retranslateUi(ServerWidget);

        QMetaObject::connectSlotsByName(ServerWidget);
    } // setupUi

    void retranslateUi(QWidget *ServerWidget)
    {
        ServerWidget->setWindowTitle(QCoreApplication::translate("ServerWidget", "ServerWidget", nullptr));
        label->setText(QCoreApplication::translate("ServerWidget", "\346\234\215\345\212\241\345\231\250", nullptr));
        buttonsend->setText(QCoreApplication::translate("ServerWidget", "\345\217\221\351\200\201", nullptr));
        buttonclose->setText(QCoreApplication::translate("ServerWidget", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServerWidget: public Ui_ServerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERWIDGET_H
