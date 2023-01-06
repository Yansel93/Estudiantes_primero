/********************************************************************************
** Form generated from reading UI file 'frm_ordenxnotas.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRM_ORDENXNOTAS_H
#define UI_FRM_ORDENXNOTAS_H

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

class Ui_Frm_ordenXNotas
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QCommandLinkButton *commandLinkButton;

    void setupUi(QDialog *Frm_ordenXNotas)
    {
        if (Frm_ordenXNotas->objectName().isEmpty())
            Frm_ordenXNotas->setObjectName(QStringLiteral("Frm_ordenXNotas"));
        Frm_ordenXNotas->resize(452, 332);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/13.png"), QSize(), QIcon::Normal, QIcon::Off);
        Frm_ordenXNotas->setWindowIcon(icon);
        gridLayout = new QGridLayout(Frm_ordenXNotas);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(Frm_ordenXNotas);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(Frm_ordenXNotas);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout->addWidget(comboBox);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        tableWidget = new QTableWidget(Frm_ordenXNotas);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout->addWidget(tableWidget, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        commandLinkButton = new QCommandLinkButton(Frm_ordenXNotas);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/iconos de menu/Sin t\303\255tulo-1.png"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButton->setIcon(icon1);

        horizontalLayout_2->addWidget(commandLinkButton);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);


        retranslateUi(Frm_ordenXNotas);
        QObject::connect(commandLinkButton, SIGNAL(clicked()), Frm_ordenXNotas, SLOT(close()));

        QMetaObject::connectSlotsByName(Frm_ordenXNotas);
    } // setupUi

    void retranslateUi(QDialog *Frm_ordenXNotas)
    {
        Frm_ordenXNotas->setWindowTitle(QApplication::translate("Frm_ordenXNotas", "Listado total de estudiante ordenado por notas", 0));
        label->setText(QApplication::translate("Frm_ordenXNotas", "Nombre del Grupo :", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Frm_ordenXNotas", "Nombre ", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Frm_ordenXNotas", "Promedio", 0));
        commandLinkButton->setText(QApplication::translate("Frm_ordenXNotas", "Cerrar", 0));
    } // retranslateUi

};

namespace Ui {
    class Frm_ordenXNotas: public Ui_Frm_ordenXNotas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRM_ORDENXNOTAS_H
