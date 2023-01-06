#include "frm_ordenxnotas.h"
#include "ui_frm_ordenxnotas.h"
#include <global.h>
#include <QTableWidget>

Frm_ordenXNotas::Frm_ordenXNotas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Frm_ordenXNotas)
{
    ui->setupUi(this);

    ui->comboBox->clear();
    for (int i = 0; i < uni->getContdeGrupo(); i++)
    {
      ui->comboBox->addItem(uni->getGrupos(i)->getNombre());
    }
    QTableWidgetItem *newItem;

    int cont=0;
    uni->getGrupos(ui->comboBox->currentIndex())->OrdenarNota_Estud();
    for (int j = 0; j < uni->getGrupos(ui->comboBox->currentIndex())->getContDeEstud(); j++)
    {
        ui->tableWidget->setRowCount(ui->tableWidget->rowCount()+1);
        newItem = new QTableWidgetItem(uni->getGrupos(ui->comboBox->currentIndex())->getEst(j)->getNombre());
        ui->tableWidget->setItem(cont,0,newItem);
        newItem = new QTableWidgetItem(QString::number(uni->getGrupos(ui->comboBox->currentIndex())->getEst(j)->promedio()));
        ui->tableWidget->setItem(cont,1,newItem);
  cont++;
    }
}

Frm_ordenXNotas::~Frm_ordenXNotas()
{
    delete ui;
}

void Frm_ordenXNotas::on_comboBox_activated(int)
{
    QTableWidgetItem *newItem;
    int inc = 0;
    uni->getGrupos(ui->comboBox->currentIndex())->OrdenarNota_Estud();
    ui->tableWidget->setRowCount(0);
    for (int j = 0; j < uni->getGrupos(ui->comboBox->currentIndex())->getContDeEstud(); j++)
    {
        ui->tableWidget->setRowCount(ui->tableWidget->rowCount()+1);
        newItem = new QTableWidgetItem(uni->getGrupos(ui->comboBox->currentIndex())->getEst(j)->getNombre());
        ui->tableWidget->setItem(inc,0,newItem);
        newItem = new QTableWidgetItem(QString::number(uni->getGrupos(ui->comboBox->currentIndex())->getEst(j)->promedio()));
        ui->tableWidget->setItem(inc,1,newItem);
        inc++;
    }
}
