#include "frm_mostrarestudiantemasausencia.h"
#include "ui_frm_mostrarestudiantemasausencia.h"
#include <global.h>
#include <QTableWidget>

frm_MostrarEstudianteMasAusencia::frm_MostrarEstudianteMasAusencia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frm_MostrarEstudianteMasAusencia)
{
    ui->setupUi(this);
   QTableWidgetItem *newItem;
    int inc = 0;
    ui->tableWidget->clear();
           for(int i = 0;i<uni->getContdeGrupo();i++)
            {
            for(int j = 0;j < uni->getGrupos(i)->getContDeEstud();j++)
            {
               if(1)
               {
                     ui->tableWidget->setRowCount(ui->tableWidget->rowCount()+1);
                     newItem = new QTableWidgetItem(uni->EstudianteMasAusencia());
                     ui->tableWidget->setItem(inc,0,newItem);
                     inc++;
                     inc=0;
               }
             }
             }

}

frm_MostrarEstudianteMasAusencia::~frm_MostrarEstudianteMasAusencia()
{
    delete ui;
}
