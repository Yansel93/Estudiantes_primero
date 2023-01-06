/********************************************************************************
** Form generated from reading UI file 'frm_promedio_de_ausencias_y_notas_por_asignatura.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRM_PROMEDIO_DE_AUSENCIAS_Y_NOTAS_POR_ASIGNATURA_H
#define UI_FRM_PROMEDIO_DE_AUSENCIAS_Y_NOTAS_POR_ASIGNATURA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_frm_Promedio_de_ausencias_y_notas_por_asignatura
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *CB_promedio_grupo;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *CB_promedio_estudiante;
    QTableWidget *TW_promedio;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QCommandLinkButton *commandLinkButton;

    void setupUi(QDialog *frm_Promedio_de_ausencias_y_notas_por_asignatura)
    {
        if (frm_Promedio_de_ausencias_y_notas_por_asignatura->objectName().isEmpty())
            frm_Promedio_de_ausencias_y_notas_por_asignatura->setObjectName(QStringLiteral("frm_Promedio_de_ausencias_y_notas_por_asignatura"));
        frm_Promedio_de_ausencias_y_notas_por_asignatura->resize(564, 229);
        gridLayout = new QGridLayout(frm_Promedio_de_ausencias_y_notas_por_asignatura);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(frm_Promedio_de_ausencias_y_notas_por_asignatura);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        CB_promedio_grupo = new QComboBox(frm_Promedio_de_ausencias_y_notas_por_asignatura);
        CB_promedio_grupo->setObjectName(QStringLiteral("CB_promedio_grupo"));

        horizontalLayout->addWidget(CB_promedio_grupo);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(frm_Promedio_de_ausencias_y_notas_por_asignatura);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        CB_promedio_estudiante = new QComboBox(frm_Promedio_de_ausencias_y_notas_por_asignatura);
        CB_promedio_estudiante->setObjectName(QStringLiteral("CB_promedio_estudiante"));

        horizontalLayout_2->addWidget(CB_promedio_estudiante);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        TW_promedio = new QTableWidget(frm_Promedio_de_ausencias_y_notas_por_asignatura);
        if (TW_promedio->columnCount() < 5)
            TW_promedio->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        TW_promedio->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        TW_promedio->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        TW_promedio->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        TW_promedio->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        TW_promedio->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (TW_promedio->rowCount() < 2)
            TW_promedio->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        TW_promedio->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        TW_promedio->setVerticalHeaderItem(1, __qtablewidgetitem6);
        TW_promedio->setObjectName(QStringLiteral("TW_promedio"));

        gridLayout->addWidget(TW_promedio, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(378, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        commandLinkButton = new QCommandLinkButton(frm_Promedio_de_ausencias_y_notas_por_asignatura);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/iconos de menu/Sin t\303\255tulo-1.png"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButton->setIcon(icon);

        horizontalLayout_3->addWidget(commandLinkButton);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 1);


        retranslateUi(frm_Promedio_de_ausencias_y_notas_por_asignatura);
        QObject::connect(commandLinkButton, SIGNAL(clicked()), frm_Promedio_de_ausencias_y_notas_por_asignatura, SLOT(close()));

        QMetaObject::connectSlotsByName(frm_Promedio_de_ausencias_y_notas_por_asignatura);
    } // setupUi

    void retranslateUi(QDialog *frm_Promedio_de_ausencias_y_notas_por_asignatura)
    {
        frm_Promedio_de_ausencias_y_notas_por_asignatura->setWindowTitle(QApplication::translate("frm_Promedio_de_ausencias_y_notas_por_asignatura", "Dialog", 0));
        label->setText(QApplication::translate("frm_Promedio_de_ausencias_y_notas_por_asignatura", "Nombre del Grupo :", 0));
        label_2->setText(QApplication::translate("frm_Promedio_de_ausencias_y_notas_por_asignatura", "Nombre del Estudiante :", 0));
        QTableWidgetItem *___qtablewidgetitem = TW_promedio->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("frm_Promedio_de_ausencias_y_notas_por_asignatura", "Calculo", 0));
        QTableWidgetItem *___qtablewidgetitem1 = TW_promedio->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("frm_Promedio_de_ausencias_y_notas_por_asignatura", "Historia", 0));
        QTableWidgetItem *___qtablewidgetitem2 = TW_promedio->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("frm_Promedio_de_ausencias_y_notas_por_asignatura", "EF", 0));
        QTableWidgetItem *___qtablewidgetitem3 = TW_promedio->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("frm_Promedio_de_ausencias_y_notas_por_asignatura", "EP", 0));
        QTableWidgetItem *___qtablewidgetitem4 = TW_promedio->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("frm_Promedio_de_ausencias_y_notas_por_asignatura", "Fisica", 0));
        QTableWidgetItem *___qtablewidgetitem5 = TW_promedio->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("frm_Promedio_de_ausencias_y_notas_por_asignatura", "Ausencias por asignatura", 0));
        QTableWidgetItem *___qtablewidgetitem6 = TW_promedio->verticalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("frm_Promedio_de_ausencias_y_notas_por_asignatura", "Notas por Asignatua", 0));
        commandLinkButton->setText(QApplication::translate("frm_Promedio_de_ausencias_y_notas_por_asignatura", "Cerrar", 0));
    } // retranslateUi

};

namespace Ui {
    class frm_Promedio_de_ausencias_y_notas_por_asignatura: public Ui_frm_Promedio_de_ausencias_y_notas_por_asignatura {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRM_PROMEDIO_DE_AUSENCIAS_Y_NOTAS_POR_ASIGNATURA_H
