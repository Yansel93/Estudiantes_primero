/********************************************************************************
** Form generated from reading UI file 'frm_mostrarestudiantemasausencia.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRM_MOSTRARESTUDIANTEMASAUSENCIA_H
#define UI_FRM_MOSTRARESTUDIANTEMASAUSENCIA_H

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

class Ui_frm_MostrarEstudianteMasAusencia
{
public:
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCommandLinkButton *commandLinkButton;

    void setupUi(QDialog *frm_MostrarEstudianteMasAusencia)
    {
        if (frm_MostrarEstudianteMasAusencia->objectName().isEmpty())
            frm_MostrarEstudianteMasAusencia->setObjectName(QStringLiteral("frm_MostrarEstudianteMasAusencia"));
        frm_MostrarEstudianteMasAusencia->resize(414, 331);
        gridLayout = new QGridLayout(frm_MostrarEstudianteMasAusencia);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableWidget = new QTableWidget(frm_MostrarEstudianteMasAusencia);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout->addWidget(tableWidget, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(228, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        commandLinkButton = new QCommandLinkButton(frm_MostrarEstudianteMasAusencia);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/iconos de menu/Sin t\303\255tulo-1.png"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButton->setIcon(icon);

        horizontalLayout->addWidget(commandLinkButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(frm_MostrarEstudianteMasAusencia);
        QObject::connect(commandLinkButton, SIGNAL(clicked()), frm_MostrarEstudianteMasAusencia, SLOT(close()));

        QMetaObject::connectSlotsByName(frm_MostrarEstudianteMasAusencia);
    } // setupUi

    void retranslateUi(QDialog *frm_MostrarEstudianteMasAusencia)
    {
        frm_MostrarEstudianteMasAusencia->setWindowTitle(QApplication::translate("frm_MostrarEstudianteMasAusencia", "Dialog", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("frm_MostrarEstudianteMasAusencia", "Nombre", 0));
        commandLinkButton->setText(QApplication::translate("frm_MostrarEstudianteMasAusencia", "Cerrar", 0));
    } // retranslateUi

};

namespace Ui {
    class frm_MostrarEstudianteMasAusencia: public Ui_frm_MostrarEstudianteMasAusencia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRM_MOSTRARESTUDIANTEMASAUSENCIA_H
