#include "frm_mostrar_estudiante.h"
#include "ui_frm_mostrar_estudiante.h"
#include <global.h>
#include <QTableWidget>

frm_mostrar_estudiante::frm_mostrar_estudiante(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frm_mostrar_estudiante)
{
    ui->setupUi(this);

    QTableWidgetItem *newItem;
        int cont = 0;
        for (int i = 0; i <uni->getContdeGrupo(); i++)
        {
            for (int j = 0; j < uni->getGrupos(i)->getContDeEstud(); j++)
            {
                int E = ui->TW_mostar_estudiante->rowCount();
                ui->TW_mostar_estudiante->setRowCount(E+1);

                newItem = new QTableWidgetItem(uni->getGrupos(i)->getEst(j)->getNombre());
                ui->TW_mostar_estudiante->setItem(cont,0,newItem);

                newItem = new QTableWidgetItem(uni->getGrupos(i)->getEst(j)->getCI());
                ui->TW_mostar_estudiante->setItem(cont,1,newItem);

                newItem = new QTableWidgetItem(QString::number(uni->getGrupos(i)->getEst(j)->getEdad()));
                ui->TW_mostar_estudiante->setItem(cont,2,newItem);

                newItem = new QTableWidgetItem(uni->getGrupos(i)->getEst(j)->getSexo());
                ui->TW_mostar_estudiante->setItem(cont,3,newItem);

                cont++;
            }

        }

}

frm_mostrar_estudiante::~frm_mostrar_estudiante()
{
    delete ui;
}
