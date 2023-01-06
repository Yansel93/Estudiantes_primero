#include "frm_mostar_grupo.h"
#include "ui_frm_mostar_grupo.h"
#include <QMessageBox>
#include <global.h>
#include <QTableWidgetItem>

frm_mostar_grupo::frm_mostar_grupo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frm_mostar_grupo)
{
    ui->setupUi(this);

    QTableWidgetItem *newItem;

    for (int i = 0; i <uni->getContdeGrupo(); i++)
    {
        int g = ui->TW_mostar_grupo->rowCount();
        ui->TW_mostar_grupo->setRowCount(g+1);

        newItem = new QTableWidgetItem(uni->getGrupos(i)->getNombre());
        ui->TW_mostar_grupo->setItem(i,0,newItem);

        newItem = new QTableWidgetItem(QString::number(uni->getGrupos(i)->getAnio()));
        ui->TW_mostar_grupo->setItem(i,1,newItem);

        newItem = new QTableWidgetItem(QString::number(uni->getGrupos(i)->getCantdeEstudiantes()));
        ui->TW_mostar_grupo->setItem(i,2,newItem);
    }



}

frm_mostar_grupo::~frm_mostar_grupo()
{
    delete ui;
}
