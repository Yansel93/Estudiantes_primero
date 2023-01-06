/********************************************************************************
** Form generated from reading UI file 'frm_asignatura_con_mas_estudiantes_suspensos_por_mas_del_20_de_ausencias.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRM_ASIGNATURA_CON_MAS_ESTUDIANTES_SUSPENSOS_POR_MAS_DEL_20_DE_AUSENCIAS_H
#define UI_FRM_ASIGNATURA_CON_MAS_ESTUDIANTES_SUSPENSOS_POR_MAS_DEL_20_DE_AUSENCIAS_H

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

class Ui_frm_Asignatura_con_mas_estudiantes_suspensos_por_mas_del_20_de_ausencias
{
public:
    QGridLayout *gridLayout;
    QTableWidget *TW_suspenso;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCommandLinkButton *commandLinkButton;

    void setupUi(QDialog *frm_Asignatura_con_mas_estudiantes_suspensos_por_mas_del_20_de_ausencias)
    {
        if (frm_Asignatura_con_mas_estudiantes_suspensos_por_mas_del_20_de_ausencias->objectName().isEmpty())
            frm_Asignatura_con_mas_estudiantes_suspensos_por_mas_del_20_de_ausencias->setObjectName(QStringLiteral("frm_Asignatura_con_mas_estudiantes_suspensos_por_mas_del_20_de_ausencias"));
        frm_Asignatura_con_mas_estudiantes_suspensos_por_mas_del_20_de_ausencias->resize(452, 320);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/13.png"), QSize(), QIcon::Normal, QIcon::Off);
        frm_Asignatura_con_mas_estudiantes_suspensos_por_mas_del_20_de_ausencias->setWindowIcon(icon);
        gridLayout = new QGridLayout(frm_Asignatura_con_mas_estudiantes_suspensos_por_mas_del_20_de_ausencias);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        TW_suspenso = new QTableWidget(frm_Asignatura_con_mas_estudiantes_suspensos_por_mas_del_20_de_ausencias);
        if (TW_suspenso->columnCount() < 1)
            TW_suspenso->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        TW_suspenso->setHorizontalHeaderItem(0, __qtablewidgetitem);
        TW_suspenso->setObjectName(QStringLiteral("TW_suspenso"));

        gridLayout->addWidget(TW_suspenso, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(218, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        commandLinkButton = new QCommandLinkButton(frm_Asignatura_con_mas_estudiantes_suspensos_por_mas_del_20_de_ausencias);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/iconos de menu/Sin t\303\255tulo-1.png"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButton->setIcon(icon1);

        horizontalLayout->addWidget(commandLinkButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(frm_Asignatura_con_mas_estudiantes_suspensos_por_mas_del_20_de_ausencias);
        QObject::connect(commandLinkButton, SIGNAL(clicked()), frm_Asignatura_con_mas_estudiantes_suspensos_por_mas_del_20_de_ausencias, SLOT(close()));

        QMetaObject::connectSlotsByName(frm_Asignatura_con_mas_estudiantes_suspensos_por_mas_del_20_de_ausencias);
    } // setupUi

    void retranslateUi(QDialog *frm_Asignatura_con_mas_estudiantes_suspensos_por_mas_del_20_de_ausencias)
    {
        frm_Asignatura_con_mas_estudiantes_suspensos_por_mas_del_20_de_ausencias->setWindowTitle(QApplication::translate("frm_Asignatura_con_mas_estudiantes_suspensos_por_mas_del_20_de_ausencias", "Asignatura con mas estudiantes suspensos", 0));
        QTableWidgetItem *___qtablewidgetitem = TW_suspenso->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("frm_Asignatura_con_mas_estudiantes_suspensos_por_mas_del_20_de_ausencias", "Nombre del Est", 0));
        commandLinkButton->setText(QApplication::translate("frm_Asignatura_con_mas_estudiantes_suspensos_por_mas_del_20_de_ausencias", "Cerrrar", 0));
    } // retranslateUi

};

namespace Ui {
    class frm_Asignatura_con_mas_estudiantes_suspensos_por_mas_del_20_de_ausencias: public Ui_frm_Asignatura_con_mas_estudiantes_suspensos_por_mas_del_20_de_ausencias {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRM_ASIGNATURA_CON_MAS_ESTUDIANTES_SUSPENSOS_POR_MAS_DEL_20_DE_AUSENCIAS_H
