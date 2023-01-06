/********************************************************************************
** Form generated from reading UI file 'frm_grupos_limpios.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRM_GRUPOS_LIMPIOS_H
#define UI_FRM_GRUPOS_LIMPIOS_H

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

class Ui_frm_Grupos_Limpios
{
public:
    QGridLayout *gridLayout;
    QTableWidget *TW_fm_gruposLimpios;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCommandLinkButton *commandLinkButton;

    void setupUi(QDialog *frm_Grupos_Limpios)
    {
        if (frm_Grupos_Limpios->objectName().isEmpty())
            frm_Grupos_Limpios->setObjectName(QStringLiteral("frm_Grupos_Limpios"));
        frm_Grupos_Limpios->resize(400, 294);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/13.png"), QSize(), QIcon::Normal, QIcon::Off);
        frm_Grupos_Limpios->setWindowIcon(icon);
        gridLayout = new QGridLayout(frm_Grupos_Limpios);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        TW_fm_gruposLimpios = new QTableWidget(frm_Grupos_Limpios);
        if (TW_fm_gruposLimpios->columnCount() < 1)
            TW_fm_gruposLimpios->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        TW_fm_gruposLimpios->setHorizontalHeaderItem(0, __qtablewidgetitem);
        TW_fm_gruposLimpios->setObjectName(QStringLiteral("TW_fm_gruposLimpios"));

        gridLayout->addWidget(TW_fm_gruposLimpios, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        commandLinkButton = new QCommandLinkButton(frm_Grupos_Limpios);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/iconos de menu/Sin t\303\255tulo-1.png"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButton->setIcon(icon1);

        horizontalLayout->addWidget(commandLinkButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(frm_Grupos_Limpios);
        QObject::connect(commandLinkButton, SIGNAL(clicked()), frm_Grupos_Limpios, SLOT(close()));

        QMetaObject::connectSlotsByName(frm_Grupos_Limpios);
    } // setupUi

    void retranslateUi(QDialog *frm_Grupos_Limpios)
    {
        frm_Grupos_Limpios->setWindowTitle(QApplication::translate("frm_Grupos_Limpios", "Grupos Limpios", 0));
        QTableWidgetItem *___qtablewidgetitem = TW_fm_gruposLimpios->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("frm_Grupos_Limpios", "Nombre del Grupo", 0));
        commandLinkButton->setText(QApplication::translate("frm_Grupos_Limpios", "Cerrar", 0));
    } // retranslateUi

};

namespace Ui {
    class frm_Grupos_Limpios: public Ui_frm_Grupos_Limpios {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRM_GRUPOS_LIMPIOS_H
