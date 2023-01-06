/********************************************************************************
** Form generated from reading UI file 'frm_horas_clases.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRM_HORAS_CLASES_H
#define UI_FRM_HORAS_CLASES_H

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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_frm_horas_clases
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QCommandLinkButton *commandLinkButton;
    QCommandLinkButton *commandLinkButton_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QVBoxLayout *verticalLayout;
    QLineEdit *LE_frmHoras_calculo;
    QLineEdit *LE_frmHoras_EF;
    QLineEdit *LE_frmHoras_Fisica;
    QLineEdit *LE_frmHoras_Historia;
    QLineEdit *LE_frmHoras_EP;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *CB_frmHoras_grupo;
    QLabel *label_7;

    void setupUi(QDialog *frm_horas_clases)
    {
        if (frm_horas_clases->objectName().isEmpty())
            frm_horas_clases->setObjectName(QStringLiteral("frm_horas_clases"));
        frm_horas_clases->resize(582, 222);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/13.png"), QSize(), QIcon::Normal, QIcon::Off);
        frm_horas_clases->setWindowIcon(icon);
        gridLayout = new QGridLayout(frm_horas_clases);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        commandLinkButton = new QCommandLinkButton(frm_horas_clases);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/iconos de menu/Sin t\303\255tulo-2.png"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButton->setIcon(icon1);

        horizontalLayout_3->addWidget(commandLinkButton);

        commandLinkButton_2 = new QCommandLinkButton(frm_horas_clases);
        commandLinkButton_2->setObjectName(QStringLiteral("commandLinkButton_2"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/iconos de menu/Sin t\303\255tulo-1.png"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButton_2->setIcon(icon2);

        horizontalLayout_3->addWidget(commandLinkButton_2);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(frm_horas_clases);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(frm_horas_clases);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(frm_horas_clases);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(frm_horas_clases);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(frm_horas_clases);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_2->addWidget(label_6);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        LE_frmHoras_calculo = new QLineEdit(frm_horas_clases);
        LE_frmHoras_calculo->setObjectName(QStringLiteral("LE_frmHoras_calculo"));

        verticalLayout->addWidget(LE_frmHoras_calculo);

        LE_frmHoras_EF = new QLineEdit(frm_horas_clases);
        LE_frmHoras_EF->setObjectName(QStringLiteral("LE_frmHoras_EF"));

        verticalLayout->addWidget(LE_frmHoras_EF);

        LE_frmHoras_Fisica = new QLineEdit(frm_horas_clases);
        LE_frmHoras_Fisica->setObjectName(QStringLiteral("LE_frmHoras_Fisica"));

        verticalLayout->addWidget(LE_frmHoras_Fisica);

        LE_frmHoras_Historia = new QLineEdit(frm_horas_clases);
        LE_frmHoras_Historia->setObjectName(QStringLiteral("LE_frmHoras_Historia"));

        verticalLayout->addWidget(LE_frmHoras_Historia);

        LE_frmHoras_EP = new QLineEdit(frm_horas_clases);
        LE_frmHoras_EP->setObjectName(QStringLiteral("LE_frmHoras_EP"));

        verticalLayout->addWidget(LE_frmHoras_EP);


        horizontalLayout_2->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(frm_horas_clases);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        CB_frmHoras_grupo = new QComboBox(frm_horas_clases);
        CB_frmHoras_grupo->setObjectName(QStringLiteral("CB_frmHoras_grupo"));

        horizontalLayout->addWidget(CB_frmHoras_grupo);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        label_7 = new QLabel(frm_horas_clases);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/\303\255ndice.png")));
        label_7->setScaledContents(true);

        gridLayout->addWidget(label_7, 0, 1, 3, 1);


        retranslateUi(frm_horas_clases);
        QObject::connect(commandLinkButton_2, SIGNAL(clicked()), frm_horas_clases, SLOT(close()));

        QMetaObject::connectSlotsByName(frm_horas_clases);
    } // setupUi

    void retranslateUi(QDialog *frm_horas_clases)
    {
        frm_horas_clases->setWindowTitle(QApplication::translate("frm_horas_clases", "Insertar Horas Clases", 0));
        commandLinkButton->setText(QApplication::translate("frm_horas_clases", "Aceptar", 0));
        commandLinkButton_2->setText(QApplication::translate("frm_horas_clases", "Cerrar", 0));
        label_2->setText(QApplication::translate("frm_horas_clases", "Calculo :", 0));
        label_3->setText(QApplication::translate("frm_horas_clases", "EF :", 0));
        label_4->setText(QApplication::translate("frm_horas_clases", "Fisica :", 0));
        label_5->setText(QApplication::translate("frm_horas_clases", "Historia :", 0));
        label_6->setText(QApplication::translate("frm_horas_clases", "EP :", 0));
        label->setText(QApplication::translate("frm_horas_clases", "Nombre del Gupo :", 0));
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class frm_horas_clases: public Ui_frm_horas_clases {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRM_HORAS_CLASES_H
