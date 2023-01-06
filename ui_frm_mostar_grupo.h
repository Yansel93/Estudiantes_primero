/********************************************************************************
** Form generated from reading UI file 'frm_mostar_grupo.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRM_MOSTAR_GRUPO_H
#define UI_FRM_MOSTAR_GRUPO_H

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

class Ui_frm_mostar_grupo
{
public:
    QGridLayout *gridLayout;
    QTableWidget *TW_mostar_grupo;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCommandLinkButton *commandLinkButton;

    void setupUi(QDialog *frm_mostar_grupo)
    {
        if (frm_mostar_grupo->objectName().isEmpty())
            frm_mostar_grupo->setObjectName(QStringLiteral("frm_mostar_grupo"));
        frm_mostar_grupo->resize(400, 300);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/13.png"), QSize(), QIcon::Normal, QIcon::Off);
        frm_mostar_grupo->setWindowIcon(icon);
        gridLayout = new QGridLayout(frm_mostar_grupo);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        TW_mostar_grupo = new QTableWidget(frm_mostar_grupo);
        if (TW_mostar_grupo->columnCount() < 3)
            TW_mostar_grupo->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        TW_mostar_grupo->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        TW_mostar_grupo->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        TW_mostar_grupo->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        TW_mostar_grupo->setObjectName(QStringLiteral("TW_mostar_grupo"));

        gridLayout->addWidget(TW_mostar_grupo, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        commandLinkButton = new QCommandLinkButton(frm_mostar_grupo);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/iconos de menu/Sin t\303\255tulo-1.png"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButton->setIcon(icon1);

        horizontalLayout->addWidget(commandLinkButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(frm_mostar_grupo);
        QObject::connect(commandLinkButton, SIGNAL(clicked()), frm_mostar_grupo, SLOT(close()));

        QMetaObject::connectSlotsByName(frm_mostar_grupo);
    } // setupUi

    void retranslateUi(QDialog *frm_mostar_grupo)
    {
        frm_mostar_grupo->setWindowTitle(QApplication::translate("frm_mostar_grupo", "Mostrar datos de Grupo", 0));
        QTableWidgetItem *___qtablewidgetitem = TW_mostar_grupo->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("frm_mostar_grupo", "Nombre", 0));
        QTableWidgetItem *___qtablewidgetitem1 = TW_mostar_grupo->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("frm_mostar_grupo", "A\303\261o", 0));
        QTableWidgetItem *___qtablewidgetitem2 = TW_mostar_grupo->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("frm_mostar_grupo", "Cant Estudiantes", 0));
        commandLinkButton->setText(QApplication::translate("frm_mostar_grupo", "Cerrar", 0));
    } // retranslateUi

};

namespace Ui {
    class frm_mostar_grupo: public Ui_frm_mostar_grupo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRM_MOSTAR_GRUPO_H
