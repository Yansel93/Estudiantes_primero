/********************************************************************************
** Form generated from reading UI file 'frm_mostar_horas.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRM_MOSTAR_HORAS_H
#define UI_FRM_MOSTAR_HORAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_frm_mostar_horas
{
public:
    QGridLayout *gridLayout;
    QTableWidget *TW_mostrar_Horas;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCommandLinkButton *commandLinkButton;

    void setupUi(QDialog *frm_mostar_horas)
    {
        if (frm_mostar_horas->objectName().isEmpty())
            frm_mostar_horas->setObjectName(QStringLiteral("frm_mostar_horas"));
        frm_mostar_horas->resize(520, 306);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/13.png"), QSize(), QIcon::Normal, QIcon::Off);
        frm_mostar_horas->setWindowIcon(icon);
        gridLayout = new QGridLayout(frm_mostar_horas);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        TW_mostrar_Horas = new QTableWidget(frm_mostar_horas);
        if (TW_mostrar_Horas->columnCount() < 5)
            TW_mostrar_Horas->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        TW_mostrar_Horas->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        TW_mostrar_Horas->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        TW_mostrar_Horas->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        TW_mostrar_Horas->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        TW_mostrar_Horas->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        TW_mostrar_Horas->setObjectName(QStringLiteral("TW_mostrar_Horas"));

        gridLayout->addWidget(TW_mostrar_Horas, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(208, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        commandLinkButton = new QCommandLinkButton(frm_mostar_horas);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/iconos de menu/Sin t\303\255tulo-1.png"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButton->setIcon(icon1);

        horizontalLayout->addWidget(commandLinkButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(frm_mostar_horas);
        QObject::connect(commandLinkButton, SIGNAL(clicked()), frm_mostar_horas, SLOT(close()));

        QMetaObject::connectSlotsByName(frm_mostar_horas);
    } // setupUi

    void retranslateUi(QDialog *frm_mostar_horas)
    {
        frm_mostar_horas->setWindowTitle(QApplication::translate("frm_mostar_horas", "Mostrar Horas Clases", 0));
        QTableWidgetItem *___qtablewidgetitem = TW_mostrar_Horas->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("frm_mostar_horas", "Calculo", 0));
        QTableWidgetItem *___qtablewidgetitem1 = TW_mostrar_Horas->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("frm_mostar_horas", "EF", 0));
        QTableWidgetItem *___qtablewidgetitem2 = TW_mostrar_Horas->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("frm_mostar_horas", "Fisica", 0));
        QTableWidgetItem *___qtablewidgetitem3 = TW_mostrar_Horas->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("frm_mostar_horas", "Historia", 0));
        QTableWidgetItem *___qtablewidgetitem4 = TW_mostrar_Horas->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("frm_mostar_horas", "EP", 0));
        commandLinkButton->setText(QApplication::translate("frm_mostar_horas", "Cerrar", 0));
    } // retranslateUi

};

namespace Ui {
    class frm_mostar_horas: public Ui_frm_mostar_horas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRM_MOSTAR_HORAS_H
