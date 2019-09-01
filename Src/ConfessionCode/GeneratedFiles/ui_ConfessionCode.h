/********************************************************************************
** Form generated from reading UI file 'ConfessionCode.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFESSIONCODE_H
#define UI_CONFESSIONCODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfessionCodeClass
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *ConfessionCodeClass)
    {
        if (ConfessionCodeClass->objectName().isEmpty())
            ConfessionCodeClass->setObjectName(QStringLiteral("ConfessionCodeClass"));
        ConfessionCodeClass->resize(515, 538);
        label = new QLabel(ConfessionCodeClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 0, 181, 51));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(12);
        label->setFont(font);
        label->setTextFormat(Qt::AutoText);
        pushButton = new QPushButton(ConfessionCodeClass);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 470, 75, 23));
        pushButton_2 = new QPushButton(ConfessionCodeClass);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(390, 470, 75, 23));
        label_2 = new QLabel(ConfessionCodeClass);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 130, 281, 281));
        label_3 = new QLabel(ConfessionCodeClass);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(140, 50, 251, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(20);
        label_3->setFont(font1);

        retranslateUi(ConfessionCodeClass);

        QMetaObject::connectSlotsByName(ConfessionCodeClass);
    } // setupUi

    void retranslateUi(QWidget *ConfessionCodeClass)
    {
        ConfessionCodeClass->setWindowTitle(QApplication::translate("ConfessionCodeClass", "ConfessionCode", nullptr));
        label->setText(QApplication::translate("ConfessionCodeClass", "\345\260\217\345\247\220\345\247\220\357\274\214\346\210\221\350\247\202\345\257\237\344\275\240\345\276\210\344\271\205\344\272\206", nullptr));
        pushButton->setText(QApplication::translate("ConfessionCodeClass", "\345\245\275\345\221\200", nullptr));
        pushButton_2->setText(QApplication::translate("ConfessionCodeClass", "\347\256\227\344\272\206\345\220\247", nullptr));
        label_2->setText(QString());
        label_3->setText(QApplication::translate("ConfessionCodeClass", "\345\201\232\346\210\221\345\245\263\346\234\213\345\217\213\345\245\275\344\270\215\345\245\275\357\274\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfessionCodeClass: public Ui_ConfessionCodeClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFESSIONCODE_H
