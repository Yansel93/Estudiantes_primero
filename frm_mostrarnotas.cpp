#include "frm_mostrarnotas.h"
#include "ui_frm_mostrarnotas.h"
#include <QTableWidget>
#include <global.h>


frm_mostrarNotas::frm_mostrarNotas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frm_mostrarNotas)
{
    ui->setupUi(this);

    QTableWidgetItem *newItem;
    int cont = 0;
    for (int i = 0; i <uni->getContdeGrupo(); i++)
    {
        for (int j = 0; j < uni->getGrupos(i)->getContDeEstud(); j++)
        {
            int n = ui->TW_notas->rowCount();
            ui->TW_notas->setRowCount(n+1);

            newItem = new QTableWidgetItem (QString::number(uni->getGrupos(i)->getEst(j)->getNota(0)));
            ui->TW_notas->setItem(cont,0,newItem);

            newItem = new QTableWidgetItem (QString::number(uni->getGrupos(i)->getEst(j)->getNota(1)));
            ui->TW_notas->setItem(cont,1,newItem);

            newItem = new QTableWidgetItem (QString::number(uni->getGrupos(i)->getEst(j)->getNota(2)));
            ui->TW_notas->setItem(cont,2,newItem);

            newItem = new QTableWidgetItem (QString::number(uni->getGrupos(i)->getEst(j)->getNota(3)));
            ui->TW_notas->setItem(cont,3,newItem);

            newItem = new QTableWidgetItem (QString::number(uni->getGrupos(i)->getEst(j)->getNota(4)));
            ui->TW_notas->setItem(cont,4,newItem);

            cont++;
        }
    }
}

frm_mostrarNotas::~frm_mostrarNotas()
{
    delete ui;
}
