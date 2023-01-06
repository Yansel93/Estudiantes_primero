/********************************************************************************
** Form generated from reading UI file 'frm_grupo.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRM_GRUPO_H
#define UI_FRM_GRUPO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_frm_grupo
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *LE_frmGrupo_Nombre;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *SB_frmgupo_Anio;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *SB_frmGrupo_CantEstud;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QCommandLinkButton *commandLinkButton;
    QCommandLinkButton *commandLinkButton_2;

    void setupUi(QDialog *frm_grupo)
    {
        if (frm_grupo->objectName().isEmpty())
            frm_grupo->setObjectName(QStringLiteral("frm_grupo"));
        frm_grupo->resize(471, 140);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/13.png"), QSize(), QIcon::Normal, QIcon::Off);
        frm_grupo->setWindowIcon(icon);
        gridLayout = new QGridLayout(frm_grupo);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(frm_grupo);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        LE_frmGrupo_Nombre = new QLineEdit(frm_grupo);
        LE_frmGrupo_Nombre->setObjectName(QStringLiteral("LE_frmGrupo_Nombre"));

        horizontalLayout->addWidget(LE_frmGrupo_Nombre);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(frm_grupo);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        SB_frmgupo_Anio = new QSpinBox(frm_grupo);
        SB_frmgupo_Anio->setObjectName(QStringLiteral("SB_frmgupo_Anio"));
        SB_frmgupo_Anio->setMinimum(1);

        horizontalLayout_2->addWidget(SB_frmgupo_Anio);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(frm_grupo);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        SB_frmGrupo_CantEstud = new QSpinBox(frm_grupo);
        SB_frmGrupo_CantEstud->setObjectName(QStringLiteral("SB_frmGrupo_CantEstud"));
        SB_frmGrupo_CantEstud->setMinimum(1);
        SB_frmGrupo_CantEstud->setMaximum(30);

        horizontalLayout_3->addWidget(SB_frmGrupo_CantEstud);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        commandLinkButton = new QCommandLinkButton(frm_grupo);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/iconos de menu/Sin t\303\255tulo-2.png"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButton->setIcon(icon1);

        horizontalLayout_4->addWidget(commandLinkButton);

        commandLinkButton_2 = new QCommandLinkButton(frm_grupo);
        commandLinkButton_2->setObjectName(QStringLiteral("commandLinkButton_2"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/iconos de menu/Sin t\303\255tulo-1.png"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButton_2->setIcon(icon2);

        horizontalLayout_4->addWidget(commandLinkButton_2);


        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 1);


        retranslateUi(frm_grupo);
        QObject::connect(commandLinkButton_2, SIGNAL(clicked()), frm_grupo, SLOT(close()));

        QMetaObject::connectSlotsByName(frm_grupo);
    } // setupUi

    void retranslateUi(QDialog *frm_grupo)
    {
        frm_grupo->setWindowTitle(QApplication::translate("frm_grupo", "Insertar Grupo", 0));
        label->setText(QApplication::translate("frm_grupo", "Nombre :", 0));
        label_2->setText(QApplication::translate("frm_grupo", "A\303\261o :", 0));
        label_3->setText(QApplication::translate("frm_grupo", "Cantidad de Estudiante :", 0));
        commandLinkButton->setText(QApplication::translate("frm_grupo", "Aceptar", 0));
        commandLinkButton_2->setText(QApplication::translate("frm_grupo", "Cerrar", 0));
    } // retranslateUi

};

namespace Ui {
    class frm_grupo: public Ui_frm_grupo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRM_GRUPO_H
