#include "frm_grupos_limpios.h"
#include "ui_frm_grupos_limpios.h"
#include <global.h>
#include <QTableWidget>
#include <QMessageBox>

frm_Grupos_Limpios::frm_Grupos_Limpios(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frm_Grupos_Limpios)
{
    ui->setupUi(this);

    QTableWidgetItem *newItem;
    QMessageBox *msg = new QMessageBox(this);

    int cont = 0;
    int inc = 0;

    for(int i = 0;i<uni->getContdeGrupo();i++)
    {

        for(int j = 0;j<uni->getGrupos(i)->getCantdeEstudiantes();j++)
        {
            if(uni->EstSuspenso(i,j))
            {
                cont++;
            }
        }
        if(cont == 0)
        {
            ui->TW_fm_gruposLimpios->setRowCount(ui->TW_fm_gruposLimpios->rowCount()+1);

            newItem = new QTableWidgetItem(uni->getGrupos(i)->getNombre());
            ui->TW_fm_gruposLimpios->setItem(inc,0,newItem);
            inc++;
        }
        cont = 0;
    }

    if(inc == 0)
    {
        msg->setText("No hay grupos limpios");
        msg->show();
    }

}

frm_Grupos_Limpios::~frm_Grupos_Limpios()
{
    delete ui;
}
