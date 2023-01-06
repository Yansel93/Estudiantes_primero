#include "frm_estudiante_con_mas_ausencias.h"
#include "ui_frm_estudiante_con_mas_ausencias.h"
#include <global.h>
#include <QTableWidget>

frm_Estudiante_con_mas_ausencias::frm_Estudiante_con_mas_ausencias(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frm_Estudiante_con_mas_ausencias)
{
    ui->setupUi(this);
    QTableWidgetItem *newItem;

    ui->setupUi(this);

    int inc = 0;
    ui->TW_frmEstudAusencia->clear();
    for(int i = 0;i<uni->getContdeGrupo();i++)
    {
        for(int j = 0;j < uni->getGrupos(i)->getContDeEstud();j++)
        {
            if(1)
            {
                ui->TW_frmEstudAusencia->setRowCount(ui->TW_frmEstudAusencia->rowCount()+1);
                newItem = new QTableWidgetItem(uni->EstudianteMasAusencia());
                ui->TW_frmEstudAusencia->setItem(inc,0,newItem);
                inc++;
                inc=0;
            }
        }
    }


}

frm_Estudiante_con_mas_ausencias::~frm_Estudiante_con_mas_ausencias()
{
    delete ui;
}
