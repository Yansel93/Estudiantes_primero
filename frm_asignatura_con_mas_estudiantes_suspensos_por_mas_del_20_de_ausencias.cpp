#include "frm_asignatura_con_mas_estudiantes_suspensos_por_mas_del_20_de_ausencias.h"
#include "ui_frm_asignatura_con_mas_estudiantes_suspensos_por_mas_del_20_de_ausencias.h"
#include<global.h>
#include<QTableWidget>

frm_Asignatura_con_mas_estudiantes_suspensos_por_mas_del_20_de_ausencias::frm_Asignatura_con_mas_estudiantes_suspensos_por_mas_del_20_de_ausencias(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frm_Asignatura_con_mas_estudiantes_suspensos_por_mas_del_20_de_ausencias)
{
    ui->setupUi(this);
    int cont = 0;
        QTableWidgetItem *newItem;

        for (int i = 0;i < uni->getContdeGrupo() ;i++ )
        {
            for (int  j= 0;  j< uni->getGrupos(i)->getContDeEstud(); j++)
            {

                for (int k = 0; k < 1; k++)
                {
                    for (int h = 0; h < 1; h++)
                    {
                        {
                            int ausencias = uni->getGrupos(i)->getEst(j)->getAusencias(k);
                            int total = uni->getAsig(k)->getHorasClases(h);
                            if(uni->Porciento(total,ausencias) == 20 || uni->Porciento(total,ausencias) > 20)
                            {
                                ui->TW_suspenso->setRowCount(ui->TW_suspenso->rowCount()+1);

                                newItem = new QTableWidgetItem(uni->getGrupos(i)->getEst(j)->getNombre());
                                ui->TW_suspenso->setItem(cont,0,newItem);
                                cont++;

                            }
                        }
                    }
                }
            }
        }

}

frm_Asignatura_con_mas_estudiantes_suspensos_por_mas_del_20_de_ausencias::~frm_Asignatura_con_mas_estudiantes_suspensos_por_mas_del_20_de_ausencias()
{
    delete ui;
}
