#include "frm_mostar_horas.h"
#include "ui_frm_mostar_horas.h"
#include <global.h>
#include <QTableWidget>

frm_mostar_horas::frm_mostar_horas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frm_mostar_horas)
{
    ui->setupUi(this);

    QTableWidgetItem *newItem;


    for (int i = 0; i <uni->getContdeGrupo(); i++)
    {
        int g = ui->TW_mostrar_Horas->rowCount();
        ui->TW_mostrar_Horas->setRowCount(g+1);


        newItem = new QTableWidgetItem (QString::number(uni->getAsig(i)->getHorasClases(0)));
        ui->TW_mostrar_Horas->setItem(i,0,newItem);

        newItem = new QTableWidgetItem (QString::number(uni->getAsig(i)->getHorasClases(1)));
        ui->TW_mostrar_Horas->setItem(i,1,newItem);

        newItem = new QTableWidgetItem (QString::number(uni->getAsig(i)->getHorasClases(2)));
        ui->TW_mostrar_Horas->setItem(i,2,newItem);

        newItem = new QTableWidgetItem (QString::number(uni->getAsig(i)->getHorasClases(3)));
        ui->TW_mostrar_Horas->setItem(i,3,newItem);

        newItem = new QTableWidgetItem (QString::number(uni->getAsig(i)->getHorasClases(4)));
        ui->TW_mostrar_Horas->setItem(i,4,newItem);

       }


}

frm_mostar_horas::~frm_mostar_horas()
{
    delete ui;
}
