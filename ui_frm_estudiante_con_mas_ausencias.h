/********************************************************************************
** Form generated from reading UI file 'frm_estudiante_con_mas_ausencias.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRM_ESTUDIANTE_CON_MAS_AUSENCIAS_H
#define UI_FRM_ESTUDIANTE_CON_MAS_AUSENCIAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_frm_Estudiante_con_mas_ausencias
{
public:
    QGridLayout *gridLayout;
    QTableWidget *TW_frmEstudAusencia;

    void setupUi(QDialog *frm_Estudiante_con_mas_ausencias)
    {
        if (frm_Estudiante_con_mas_ausencias->objectName().isEmpty())
            frm_Estudiante_con_mas_ausencias->setObjectName(QStringLiteral("frm_Estudiante_con_mas_ausencias"));
        frm_Estudiante_con_mas_ausencias->resize(445, 318);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/13.png"), QSize(), QIcon::Normal, QIcon::Off);
        frm_Estudiante_con_mas_ausencias->setWindowIcon(icon);
        gridLayout = new QGridLayout(frm_Estudiante_con_mas_ausencias);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        TW_frmEstudAusencia = new QTableWidget(frm_Estudiante_con_mas_ausencias);
        if (TW_frmEstudAusencia->columnCount() < 1)
            TW_frmEstudAusencia->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        TW_frmEstudAusencia->setHorizontalHeaderItem(0, __qtablewidgetitem);
        TW_frmEstudAusencia->setObjectName(QStringLiteral("TW_frmEstudAusencia"));

        gridLayout->addWidget(TW_frmEstudAusencia, 0, 0, 1, 1);


        retranslateUi(frm_Estudiante_con_mas_ausencias);

        QMetaObject::connectSlotsByName(frm_Estudiante_con_mas_ausencias);
    } // setupUi

    void retranslateUi(QDialog *frm_Estudiante_con_mas_ausencias)
    {
        frm_Estudiante_con_mas_ausencias->setWindowTitle(QApplication::translate("frm_Estudiante_con_mas_ausencias", "Estudiante con mas ausencia", 0));
        QTableWidgetItem *___qtablewidgetitem = TW_frmEstudAusencia->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("frm_Estudiante_con_mas_ausencias", "Nombre", 0));
    } // retranslateUi

};

namespace Ui {
    class frm_Estudiante_con_mas_ausencias: public Ui_frm_Estudiante_con_mas_ausencias {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRM_ESTUDIANTE_CON_MAS_AUSENCIAS_H
