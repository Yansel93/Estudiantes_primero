/********************************************************************************
** Form generated from reading UI file 'frm_mostrarnotas.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRM_MOSTRARNOTAS_H
#define UI_FRM_MOSTRARNOTAS_H

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

class Ui_frm_mostrarNotas
{
public:
    QGridLayout *gridLayout;
    QTableWidget *TW_notas;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCommandLinkButton *commandLinkButton;

    void setupUi(QDialog *frm_mostrarNotas)
    {
        if (frm_mostrarNotas->objectName().isEmpty())
            frm_mostrarNotas->setObjectName(QStringLiteral("frm_mostrarNotas"));
        frm_mostrarNotas->resize(521, 297);
        gridLayout = new QGridLayout(frm_mostrarNotas);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        TW_notas = new QTableWidget(frm_mostrarNotas);
        if (TW_notas->columnCount() < 5)
            TW_notas->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        TW_notas->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        TW_notas->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        TW_notas->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        TW_notas->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        TW_notas->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        TW_notas->setObjectName(QStringLiteral("TW_notas"));

        gridLayout->addWidget(TW_notas, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        commandLinkButton = new QCommandLinkButton(frm_mostrarNotas);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/iconos de menu/Sin t\303\255tulo-1.png"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButton->setIcon(icon);

        horizontalLayout->addWidget(commandLinkButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(frm_mostrarNotas);
        QObject::connect(commandLinkButton, SIGNAL(clicked()), frm_mostrarNotas, SLOT(close()));

        QMetaObject::connectSlotsByName(frm_mostrarNotas);
    } // setupUi

    void retranslateUi(QDialog *frm_mostrarNotas)
    {
        frm_mostrarNotas->setWindowTitle(QApplication::translate("frm_mostrarNotas", "Dialog", 0));
        QTableWidgetItem *___qtablewidgetitem = TW_notas->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("frm_mostrarNotas", "Calculo", 0));
        QTableWidgetItem *___qtablewidgetitem1 = TW_notas->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("frm_mostrarNotas", "EP", 0));
        QTableWidgetItem *___qtablewidgetitem2 = TW_notas->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("frm_mostrarNotas", "Fisica", 0));
        QTableWidgetItem *___qtablewidgetitem3 = TW_notas->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("frm_mostrarNotas", "Historia", 0));
        QTableWidgetItem *___qtablewidgetitem4 = TW_notas->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("frm_mostrarNotas", "EP", 0));
        commandLinkButton->setText(QApplication::translate("frm_mostrarNotas", "Cerrar", 0));
    } // retranslateUi

};

namespace Ui {
    class frm_mostrarNotas: public Ui_frm_mostrarNotas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRM_MOSTRARNOTAS_H
