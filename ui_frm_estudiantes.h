/********************************************************************************
** Form generated from reading UI file 'frm_estudiantes.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRM_ESTUDIANTES_H
#define UI_FRM_ESTUDIANTES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Frm_Estudiantes
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QComboBox *CB_frmEstudiate_NomGup;
    QHBoxLayout *horizontalLayout_4;
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout;
    QLineEdit *LE_frmEstudiante_Nombre;
    QLineEdit *LE_frmEstudiante_CI;
    QSpinBox *SB_frmEstudiante_Edad;
    QComboBox *CB_frmEstudiante_Sexo;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_13;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QLineEdit *Nota_Calculo;
    QLineEdit *Nota_EF;
    QLineEdit *Nota_Fisica;
    QLineEdit *Nota_Historia;
    QLineEdit *Nota_EP;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_7;
    QLineEdit *Ausencia_Calculo;
    QLineEdit *Ausencia_EF;
    QLineEdit *Ausencia_Fisica;
    QLineEdit *Ausencia_Historia;
    QLineEdit *Ausencia_EP;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_14;
    QCommandLinkButton *commandLinkButton;
    QCommandLinkButton *commandLinkButton_2;

    void setupUi(QDialog *Frm_Estudiantes)
    {
        if (Frm_Estudiantes->objectName().isEmpty())
            Frm_Estudiantes->setObjectName(QStringLiteral("Frm_Estudiantes"));
        Frm_Estudiantes->resize(510, 239);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/13.png"), QSize(), QIcon::Normal, QIcon::Off);
        Frm_Estudiantes->setWindowIcon(icon);
        gridLayout = new QGridLayout(Frm_Estudiantes);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_5 = new QLabel(Frm_Estudiantes);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);

        CB_frmEstudiate_NomGup = new QComboBox(Frm_Estudiantes);
        CB_frmEstudiate_NomGup->setObjectName(QStringLiteral("CB_frmEstudiate_NomGup"));

        horizontalLayout_3->addWidget(CB_frmEstudiate_NomGup);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(Frm_Estudiantes);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(Frm_Estudiantes);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(Frm_Estudiantes);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(Frm_Estudiantes);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);


        formLayout->setLayout(1, QFormLayout::LabelRole, verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        LE_frmEstudiante_Nombre = new QLineEdit(Frm_Estudiantes);
        LE_frmEstudiante_Nombre->setObjectName(QStringLiteral("LE_frmEstudiante_Nombre"));

        verticalLayout->addWidget(LE_frmEstudiante_Nombre);

        LE_frmEstudiante_CI = new QLineEdit(Frm_Estudiantes);
        LE_frmEstudiante_CI->setObjectName(QStringLiteral("LE_frmEstudiante_CI"));
        LE_frmEstudiante_CI->setMaxLength(11);

        verticalLayout->addWidget(LE_frmEstudiante_CI);

        SB_frmEstudiante_Edad = new QSpinBox(Frm_Estudiantes);
        SB_frmEstudiante_Edad->setObjectName(QStringLiteral("SB_frmEstudiante_Edad"));
        SB_frmEstudiante_Edad->setMinimum(1);

        verticalLayout->addWidget(SB_frmEstudiante_Edad);

        CB_frmEstudiante_Sexo = new QComboBox(Frm_Estudiantes);
        CB_frmEstudiante_Sexo->setObjectName(QStringLiteral("CB_frmEstudiante_Sexo"));

        verticalLayout->addWidget(CB_frmEstudiante_Sexo);


        formLayout->setLayout(1, QFormLayout::FieldRole, verticalLayout);

        label_15 = new QLabel(Frm_Estudiantes);
        label_15->setObjectName(QStringLiteral("label_15"));

        formLayout->setWidget(0, QFormLayout::FieldRole, label_15);


        horizontalLayout_4->addLayout(formLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_13 = new QLabel(Frm_Estudiantes);
        label_13->setObjectName(QStringLiteral("label_13"));

        verticalLayout_5->addWidget(label_13);

        label_8 = new QLabel(Frm_Estudiantes);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_5->addWidget(label_8);

        label_9 = new QLabel(Frm_Estudiantes);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_5->addWidget(label_9);

        label_10 = new QLabel(Frm_Estudiantes);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_5->addWidget(label_10);

        label_11 = new QLabel(Frm_Estudiantes);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_5->addWidget(label_11);

        label_12 = new QLabel(Frm_Estudiantes);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout_5->addWidget(label_12);


        horizontalLayout_2->addLayout(verticalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_6 = new QLabel(Frm_Estudiantes);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_3->addWidget(label_6);

        Nota_Calculo = new QLineEdit(Frm_Estudiantes);
        Nota_Calculo->setObjectName(QStringLiteral("Nota_Calculo"));

        verticalLayout_3->addWidget(Nota_Calculo);

        Nota_EF = new QLineEdit(Frm_Estudiantes);
        Nota_EF->setObjectName(QStringLiteral("Nota_EF"));

        verticalLayout_3->addWidget(Nota_EF);

        Nota_Fisica = new QLineEdit(Frm_Estudiantes);
        Nota_Fisica->setObjectName(QStringLiteral("Nota_Fisica"));

        verticalLayout_3->addWidget(Nota_Fisica);

        Nota_Historia = new QLineEdit(Frm_Estudiantes);
        Nota_Historia->setObjectName(QStringLiteral("Nota_Historia"));

        verticalLayout_3->addWidget(Nota_Historia);

        Nota_EP = new QLineEdit(Frm_Estudiantes);
        Nota_EP->setObjectName(QStringLiteral("Nota_EP"));

        verticalLayout_3->addWidget(Nota_EP);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_7 = new QLabel(Frm_Estudiantes);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_4->addWidget(label_7);

        Ausencia_Calculo = new QLineEdit(Frm_Estudiantes);
        Ausencia_Calculo->setObjectName(QStringLiteral("Ausencia_Calculo"));

        verticalLayout_4->addWidget(Ausencia_Calculo);

        Ausencia_EF = new QLineEdit(Frm_Estudiantes);
        Ausencia_EF->setObjectName(QStringLiteral("Ausencia_EF"));

        verticalLayout_4->addWidget(Ausencia_EF);

        Ausencia_Fisica = new QLineEdit(Frm_Estudiantes);
        Ausencia_Fisica->setObjectName(QStringLiteral("Ausencia_Fisica"));

        verticalLayout_4->addWidget(Ausencia_Fisica);

        Ausencia_Historia = new QLineEdit(Frm_Estudiantes);
        Ausencia_Historia->setObjectName(QStringLiteral("Ausencia_Historia"));

        verticalLayout_4->addWidget(Ausencia_Historia);

        Ausencia_EP = new QLineEdit(Frm_Estudiantes);
        Ausencia_EP->setObjectName(QStringLiteral("Ausencia_EP"));

        verticalLayout_4->addWidget(Ausencia_EP);


        horizontalLayout->addLayout(verticalLayout_4);


        horizontalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_4->addLayout(horizontalLayout_2);


        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_14 = new QLabel(Frm_Estudiantes);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setAutoFillBackground(true);
        label_14->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/f.png")));
        label_14->setScaledContents(true);

        horizontalLayout_5->addWidget(label_14);

        commandLinkButton = new QCommandLinkButton(Frm_Estudiantes);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/iconos de menu/Sin t\303\255tulo-2.png"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButton->setIcon(icon1);
        commandLinkButton->setIconSize(QSize(20, 20));

        horizontalLayout_5->addWidget(commandLinkButton);

        commandLinkButton_2 = new QCommandLinkButton(Frm_Estudiantes);
        commandLinkButton_2->setObjectName(QStringLiteral("commandLinkButton_2"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/iconos de menu/Sin t\303\255tulo-1.png"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButton_2->setIcon(icon2);

        horizontalLayout_5->addWidget(commandLinkButton_2);


        gridLayout->addLayout(horizontalLayout_5, 2, 0, 1, 1);


        retranslateUi(Frm_Estudiantes);
        QObject::connect(commandLinkButton_2, SIGNAL(clicked()), Frm_Estudiantes, SLOT(close()));

        QMetaObject::connectSlotsByName(Frm_Estudiantes);
    } // setupUi

    void retranslateUi(QDialog *Frm_Estudiantes)
    {
        Frm_Estudiantes->setWindowTitle(QApplication::translate("Frm_Estudiantes", "Insertar Estudiantes", 0));
        label_5->setText(QApplication::translate("Frm_Estudiantes", "Nombre del Grupo :", 0));
        label->setText(QApplication::translate("Frm_Estudiantes", "Nombre :", 0));
        label_2->setText(QApplication::translate("Frm_Estudiantes", "CI :", 0));
        label_3->setText(QApplication::translate("Frm_Estudiantes", "Edad :", 0));
        label_4->setText(QApplication::translate("Frm_Estudiantes", "Sexo :", 0));
        CB_frmEstudiante_Sexo->clear();
        CB_frmEstudiante_Sexo->insertItems(0, QStringList()
         << QApplication::translate("Frm_Estudiantes", "Masculino", 0)
         << QApplication::translate("Frm_Estudiantes", "Femenino", 0)
        );
        label_15->setText(QString());
        label_13->setText(QString());
        label_8->setText(QApplication::translate("Frm_Estudiantes", "Calculo :", 0));
        label_9->setText(QApplication::translate("Frm_Estudiantes", "EF :", 0));
        label_10->setText(QApplication::translate("Frm_Estudiantes", "Fisica :", 0));
        label_11->setText(QApplication::translate("Frm_Estudiantes", "Historia :", 0));
        label_12->setText(QApplication::translate("Frm_Estudiantes", "EP :", 0));
        label_6->setText(QApplication::translate("Frm_Estudiantes", "Notas :", 0));
        label_7->setText(QApplication::translate("Frm_Estudiantes", "Ausencias :", 0));
        label_14->setText(QString());
        commandLinkButton->setText(QApplication::translate("Frm_Estudiantes", "Aceptar", 0));
        commandLinkButton_2->setText(QApplication::translate("Frm_Estudiantes", "Cerrar", 0));
    } // retranslateUi

};

namespace Ui {
    class Frm_Estudiantes: public Ui_Frm_Estudiantes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRM_ESTUDIANTES_H
