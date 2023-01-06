/********************************************************************************
** Form generated from reading UI file 'inicio.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INICIO_H
#define UI_INICIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Inicio
{
public:
    QAction *actionSalir;
    QAction *actionGrupo;
    QAction *actionHoras_Clases;
    QAction *actionEstudiantes;
    QAction *actionGrupo_2;
    QAction *actionHoras_Clases_2;
    QAction *actionEstudiantes_2;
    QAction *actionLista_de_Grupos_Limpios;
    QAction *actionEstudiante_con_mas_ausencias;
    QAction *actionPromedio_de_ausencias_y_notas_por_asignatura;
    QAction *actionAsignatura_con_mas_estudiantes_suspensos_por_m_s_de_20_de_ausencias;
    QAction *actionMejor_estudiante_acad_micamente;
    QAction *actionPeor_estudiante_acad_micamente;
    QAction *actionListado_total_de_estudiantes_ordenado_por_notas;
    QAction *actionNotas;
    QWidget *centralWidget;
    QLabel *label;
    QCommandLinkButton *commandLinkButton;
    QCommandLinkButton *commandLinkButton_2;
    QMenuBar *menuBar;
    QMenu *menuArchivo;
    QMenu *menuInsertar;
    QMenu *menuMostrar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Inicio)
    {
        if (Inicio->objectName().isEmpty())
            Inicio->setObjectName(QStringLiteral("Inicio"));
        Inicio->resize(500, 400);
        Inicio->setMinimumSize(QSize(500, 400));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/13.png"), QSize(), QIcon::Normal, QIcon::Off);
        Inicio->setWindowIcon(icon);
        actionSalir = new QAction(Inicio);
        actionSalir->setObjectName(QStringLiteral("actionSalir"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/iconos de menu/\303\255ndice.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSalir->setIcon(icon1);
        actionGrupo = new QAction(Inicio);
        actionGrupo->setObjectName(QStringLiteral("actionGrupo"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/iconos de menu/asd.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionGrupo->setIcon(icon2);
        actionHoras_Clases = new QAction(Inicio);
        actionHoras_Clases->setObjectName(QStringLiteral("actionHoras_Clases"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/iconos de menu/Alpha Dista Icon 18.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionHoras_Clases->setIcon(icon3);
        actionEstudiantes = new QAction(Inicio);
        actionEstudiantes->setObjectName(QStringLiteral("actionEstudiantes"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/iconos de menu/Male Portrait.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionEstudiantes->setIcon(icon4);
        actionGrupo_2 = new QAction(Inicio);
        actionGrupo_2->setObjectName(QStringLiteral("actionGrupo_2"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix1/iconos de menu/hombre-de-negocios_318-72886.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionGrupo_2->setIcon(icon5);
        actionHoras_Clases_2 = new QAction(Inicio);
        actionHoras_Clases_2->setObjectName(QStringLiteral("actionHoras_Clases_2"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/new/prefix1/iconos de menu/asdf.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionHoras_Clases_2->setIcon(icon6);
        actionEstudiantes_2 = new QAction(Inicio);
        actionEstudiantes_2->setObjectName(QStringLiteral("actionEstudiantes_2"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/new/prefix1/iconos de menu/78.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEstudiantes_2->setIcon(icon7);
        actionLista_de_Grupos_Limpios = new QAction(Inicio);
        actionLista_de_Grupos_Limpios->setObjectName(QStringLiteral("actionLista_de_Grupos_Limpios"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/new/prefix1/iconos de menu/1.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionLista_de_Grupos_Limpios->setIcon(icon8);
        actionEstudiante_con_mas_ausencias = new QAction(Inicio);
        actionEstudiante_con_mas_ausencias->setObjectName(QStringLiteral("actionEstudiante_con_mas_ausencias"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/new/prefix1/iconos de menu/Msn.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionEstudiante_con_mas_ausencias->setIcon(icon9);
        actionPromedio_de_ausencias_y_notas_por_asignatura = new QAction(Inicio);
        actionPromedio_de_ausencias_y_notas_por_asignatura->setObjectName(QStringLiteral("actionPromedio_de_ausencias_y_notas_por_asignatura"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/new/prefix1/iconos de menu/paypal.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPromedio_de_ausencias_y_notas_por_asignatura->setIcon(icon10);
        actionAsignatura_con_mas_estudiantes_suspensos_por_m_s_de_20_de_ausencias = new QAction(Inicio);
        actionAsignatura_con_mas_estudiantes_suspensos_por_m_s_de_20_de_ausencias->setObjectName(QStringLiteral("actionAsignatura_con_mas_estudiantes_suspensos_por_m_s_de_20_de_ausencias"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/new/prefix1/iconos de menu/Sin t\303\255tulo-1.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAsignatura_con_mas_estudiantes_suspensos_por_m_s_de_20_de_ausencias->setIcon(icon11);
        actionMejor_estudiante_acad_micamente = new QAction(Inicio);
        actionMejor_estudiante_acad_micamente->setObjectName(QStringLiteral("actionMejor_estudiante_acad_micamente"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/new/prefix1/iconos de menu/\303\255ndiceqwe.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionMejor_estudiante_acad_micamente->setIcon(icon12);
        actionPeor_estudiante_acad_micamente = new QAction(Inicio);
        actionPeor_estudiante_acad_micamente->setObjectName(QStringLiteral("actionPeor_estudiante_acad_micamente"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/new/prefix1/iconos de menu/estud.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionPeor_estudiante_acad_micamente->setIcon(icon13);
        actionListado_total_de_estudiantes_ordenado_por_notas = new QAction(Inicio);
        actionListado_total_de_estudiantes_ordenado_por_notas->setObjectName(QStringLiteral("actionListado_total_de_estudiantes_ordenado_por_notas"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/new/prefix1/iconos de menu/slideshare.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionListado_total_de_estudiantes_ordenado_por_notas->setIcon(icon14);
        actionNotas = new QAction(Inicio);
        actionNotas->setObjectName(QStringLiteral("actionNotas"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/new/prefix1/iconos de menu/2.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionNotas->setIcon(icon15);
        centralWidget = new QWidget(Inicio);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 500, 400));
        label->setMinimumSize(QSize(500, 400));
        label->setAutoFillBackground(true);
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Sin t\303\255tulo-1.jpg")));
        label->setScaledContents(true);
        commandLinkButton = new QCommandLinkButton(centralWidget);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(190, 190, 201, 51));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/new/prefix1/789.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButton->setIcon(icon16);
        commandLinkButton->setIconSize(QSize(40, 40));
        commandLinkButton_2 = new QCommandLinkButton(centralWidget);
        commandLinkButton_2->setObjectName(QStringLiteral("commandLinkButton_2"));
        commandLinkButton_2->setGeometry(QRect(170, 260, 201, 51));
        commandLinkButton_2->setIcon(icon1);
        commandLinkButton_2->setIconSize(QSize(40, 40));
        Inicio->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Inicio);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 500, 20));
        menuArchivo = new QMenu(menuBar);
        menuArchivo->setObjectName(QStringLiteral("menuArchivo"));
        menuInsertar = new QMenu(menuBar);
        menuInsertar->setObjectName(QStringLiteral("menuInsertar"));
        menuMostrar = new QMenu(menuBar);
        menuMostrar->setObjectName(QStringLiteral("menuMostrar"));
        Inicio->setMenuBar(menuBar);
        statusBar = new QStatusBar(Inicio);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Inicio->setStatusBar(statusBar);

        menuBar->addAction(menuArchivo->menuAction());
        menuBar->addAction(menuInsertar->menuAction());
        menuBar->addAction(menuMostrar->menuAction());
        menuArchivo->addAction(actionSalir);
        menuInsertar->addAction(actionGrupo_2);
        menuInsertar->addSeparator();
        menuInsertar->addAction(actionHoras_Clases_2);
        menuInsertar->addAction(actionEstudiantes_2);
        menuInsertar->addSeparator();
        menuMostrar->addAction(actionGrupo);
        menuMostrar->addAction(actionEstudiantes);
        menuMostrar->addSeparator();
        menuMostrar->addAction(actionHoras_Clases);
        menuMostrar->addAction(actionNotas);
        menuMostrar->addSeparator();
        menuMostrar->addAction(actionLista_de_Grupos_Limpios);
        menuMostrar->addAction(actionAsignatura_con_mas_estudiantes_suspensos_por_m_s_de_20_de_ausencias);
        menuMostrar->addSeparator();
        menuMostrar->addAction(actionEstudiante_con_mas_ausencias);
        menuMostrar->addAction(actionPromedio_de_ausencias_y_notas_por_asignatura);
        menuMostrar->addSeparator();
        menuMostrar->addAction(actionListado_total_de_estudiantes_ordenado_por_notas);
        menuMostrar->addSeparator();
        menuMostrar->addAction(actionPeor_estudiante_acad_micamente);
        menuMostrar->addAction(actionMejor_estudiante_acad_micamente);

        retranslateUi(Inicio);
        QObject::connect(actionSalir, SIGNAL(triggered()), Inicio, SLOT(close()));
        QObject::connect(commandLinkButton_2, SIGNAL(clicked()), Inicio, SLOT(close()));

        QMetaObject::connectSlotsByName(Inicio);
    } // setupUi

    void retranslateUi(QMainWindow *Inicio)
    {
        Inicio->setWindowTitle(QApplication::translate("Inicio", "Inicio", 0));
        actionSalir->setText(QApplication::translate("Inicio", "Salir", 0));
        actionGrupo->setText(QApplication::translate("Inicio", "Grupo", 0));
        actionHoras_Clases->setText(QApplication::translate("Inicio", "Horas Clases", 0));
        actionEstudiantes->setText(QApplication::translate("Inicio", "Estudiantes", 0));
        actionGrupo_2->setText(QApplication::translate("Inicio", "Grupo", 0));
        actionHoras_Clases_2->setText(QApplication::translate("Inicio", "Horas Clases", 0));
        actionEstudiantes_2->setText(QApplication::translate("Inicio", "Estudiantes", 0));
        actionLista_de_Grupos_Limpios->setText(QApplication::translate("Inicio", "Lista de Grupos Limpios", 0));
        actionEstudiante_con_mas_ausencias->setText(QApplication::translate("Inicio", "Estudiante con mas ausencias", 0));
        actionPromedio_de_ausencias_y_notas_por_asignatura->setText(QApplication::translate("Inicio", "Promedio de ausencias y notas por asignatura", 0));
        actionAsignatura_con_mas_estudiantes_suspensos_por_m_s_de_20_de_ausencias->setText(QApplication::translate("Inicio", "Asignatura con mas estudiantes suspensos por m\303\241s de 20% de ausencias", 0));
        actionMejor_estudiante_acad_micamente->setText(QApplication::translate("Inicio", "Mejor estudiante acad\303\251micamente", 0));
        actionPeor_estudiante_acad_micamente->setText(QApplication::translate("Inicio", "Peor estudiante acad\303\251micamente", 0));
        actionListado_total_de_estudiantes_ordenado_por_notas->setText(QApplication::translate("Inicio", "Listado total de estudiantes ordenado por notas", 0));
        actionNotas->setText(QApplication::translate("Inicio", "Notas", 0));
        label->setText(QString());
        commandLinkButton->setText(QApplication::translate("Inicio", "Creditos", 0));
        commandLinkButton_2->setText(QApplication::translate("Inicio", "Salir", 0));
        menuArchivo->setTitle(QApplication::translate("Inicio", "Archivo", 0));
        menuInsertar->setTitle(QApplication::translate("Inicio", "Insertar", 0));
        menuMostrar->setTitle(QApplication::translate("Inicio", "Mostrar", 0));
    } // retranslateUi

};

namespace Ui {
    class Inicio: public Ui_Inicio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INICIO_H
