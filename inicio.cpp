#include "inicio.h"
#include "ui_inicio.h"
#include <frm_estudiantes.h>
#include <QMessageBox>
#include <frm_estudiantes.h>
#include <frm_grupo.h>
#include <frm_horas_clases.h>
#include <frm_mostar_grupo.h>
#include <frm_mostar_horas.h>
#include <frm_mostrar_estudiante.h>
#include <frm_asignatura_con_mas_estudiantes_suspensos_por_mas_del_20_de_ausencias.h>
#include <frm_grupos_limpios.h>
#include <frm_promedio_de_ausencias_y_notas_por_asignatura.h>
#include <frm_MostrarEstudianteMasAusencia.h>
#include <frm_ordenxnotas.h>
#include <frm_mostrarnotas.h>
#include <global.h>

Inicio::Inicio(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Inicio)
{
    ui->setupUi(this);
}

Inicio::~Inicio()
{
    delete ui;
}

void Inicio::on_actionEstudiantes_2_triggered()
{
    Frm_Estudiantes *est = new Frm_Estudiantes(this);
    est->show();
}

void Inicio::on_commandLinkButton_clicked()
{
    QMessageBox *msg  = new QMessageBox(this);
    msg->setText("Creado por : Yansel Hernández Marzo \n""Profesor: Ronny Reyes\n""Agradecimientos a todos los que me ayudaron");
    msg->show();
}

void Inicio::on_actionGrupo_triggered()
{
    frm_mostar_grupo *msg = new frm_mostar_grupo(this);
    msg->show();
}

void Inicio::on_actionHoras_Clases_triggered()
{
    frm_mostar_horas *hc = new frm_mostar_horas(this);
    hc->show();
}

void Inicio::on_actionEstudiantes_triggered()
{
    frm_mostrar_estudiante *msg = new frm_mostrar_estudiante(this);
    msg->show();
}

void Inicio::on_actionGrupo_2_triggered()
{
    frm_grupo *msg = new frm_grupo(this);
    msg->show();
}

void Inicio::on_actionHoras_Clases_2_triggered()
{
    frm_horas_clases *hc = new frm_horas_clases(this);
    hc->show();
}

void Inicio::on_actionLista_de_Grupos_Limpios_triggered()
{
    frm_Grupos_Limpios *gl = new frm_Grupos_Limpios(this);
    gl->show();
}

void Inicio::on_actionEstudiante_con_mas_ausencias_triggered()
{
    frm_MostrarEstudianteMasAusencia *msg = new frm_MostrarEstudianteMasAusencia(this);
    msg->show();
}

void Inicio::on_actionPromedio_de_ausencias_y_notas_por_asignatura_triggered()
{
    frm_Promedio_de_ausencias_y_notas_por_asignatura *msg = new frm_Promedio_de_ausencias_y_notas_por_asignatura(this);
    msg->show();
}

void Inicio::on_actionAsignatura_con_mas_estudiantes_suspensos_por_m_s_de_20_de_ausencias_triggered()
{
    frm_Asignatura_con_mas_estudiantes_suspensos_por_mas_del_20_de_ausencias *msg = new frm_Asignatura_con_mas_estudiantes_suspensos_por_mas_del_20_de_ausencias(this);
    msg->show();
}

void Inicio::on_actionMejor_estudiante_acad_micamente_triggered()
{
    float MAX=0;//maximo
        float tmp=0;//temporal
        QString estud="";
        QMessageBox * msg = new QMessageBox(this);
        for (int i = 0; i < uni->getContdeGrupo(); i++)
        {
            uni->getGrupos(i)->OrdenarNota_Estud();
            tmp = uni->getGrupos(i)->getEst(0)->promedio();
            if(tmp>MAX)
            {
                MAX = tmp;
                estud = uni->getGrupos(i)->getEst(0)->getNombre();
            }

        }
        msg->setText("El mejor estudiante academicamente es: "+estud);
        msg->show();

}

void Inicio::on_actionPeor_estudiante_acad_micamente_triggered()
{
    float menor=0;//maximo
    float tmp=0;//temporal
    QString estud="";
    QMessageBox * msg = new QMessageBox(this);
    for (int i = 0; i < uni->getContdeGrupo(); i++)
    {
        uni->getGrupos(i)->OrdenarMenor_estud();
        tmp = uni->getGrupos(i)->getEst(0)->promedio();
        if(tmp>menor)
        {
            menor = tmp;
            estud = uni->getGrupos(i)->getEst(0)->getNombre();
        }

    }
    msg->setText("El peor estudiante academicamente es: "+estud);
    msg->show();

}

void Inicio::on_actionListado_total_de_estudiantes_ordenado_por_notas_triggered()
{
    Frm_ordenXNotas *msg = new Frm_ordenXNotas(this);
    msg->show();
}

void Inicio::on_actionNotas_triggered()
{
    frm_mostrarNotas *mos = new frm_mostrarNotas(this);
    mos->show();
}
