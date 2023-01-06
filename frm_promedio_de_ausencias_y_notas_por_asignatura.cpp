#include "frm_promedio_de_ausencias_y_notas_por_asignatura.h"
#include "ui_frm_promedio_de_ausencias_y_notas_por_asignatura.h"
#include <global.h>
#include <QTableWidget>

frm_Promedio_de_ausencias_y_notas_por_asignatura::frm_Promedio_de_ausencias_y_notas_por_asignatura(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frm_Promedio_de_ausencias_y_notas_por_asignatura)
{
    ui->setupUi(this);
    ui->CB_promedio_estudiante->clear();
    ui->CB_promedio_grupo->clear();
    for (int i = 0; i < uni->getContdeGrupo(); i++)
    {
        ui->CB_promedio_grupo->addItem(uni->getGrupos(i)->getNombre());
    }
}

frm_Promedio_de_ausencias_y_notas_por_asignatura::~frm_Promedio_de_ausencias_y_notas_por_asignatura()
{
    delete ui;
}

void frm_Promedio_de_ausencias_y_notas_por_asignatura::on_CB_promedio_grupo_activated(const QString &arg1)
{
    int h  = ui->CB_promedio_grupo->currentIndex();
    for (int i = 0; i < uni->getGrupos(h)->getContDeEstud(); i++)
    {
        ui->CB_promedio_estudiante->addItem(uni->getGrupos(h)->getEst(i)->getNombre());
    }
}

void frm_Promedio_de_ausencias_y_notas_por_asignatura::on_CB_promedio_estudiante_activated(const QString &arg1)
{
    QTableWidgetItem *newItem;
    // variables de ausencia         //variables de notas
    float totalest = 0;             float Ncalc = 0;
    float calc = 0;                 float Nhis = 0;
    float his = 0;                  float Nef = 0;
    float ef = 0;                   float Nep = 0;
    float ep = 0;                   float Nfisic = 0;
    float fisic = 0;

    for(int i = 0;i<uni->getContdeGrupo();i++)
      {
          for(int j = 0;j < uni->getGrupos(i)->getContDeEstud();j++)
          {
              //insertar ausencias
              calc += uni->getGrupos(i)->getEst(j)->getAusencias(0);
              his += uni->getGrupos(i)->getEst(j)->getAusencias(1);
              ef += uni->getGrupos(i)->getEst(j)->getAusencias(2);
              ep += uni->getGrupos(i)->getEst(j)->getAusencias(3);
              fisic += uni->getGrupos(i)->getEst(j)->getAusencias(4);

              //insertar notas
              Ncalc += uni->getGrupos(i)->getEst(j)->getNota(0);
              Nhis += uni->getGrupos(i)->getEst(j)->getNota(1);
              Nef += uni->getGrupos(i)->getEst(j)->getNota(2);
              Nep += uni->getGrupos(i)->getEst(j)->getNota(3);
              Nfisic += uni->getGrupos(i)->getEst(j)->getNota(4);
           }
          totalest += uni->getGrupos(i)->getContDeEstud();
      }

      calc = calc /totalest;
      his = his / totalest;
      ef = ef / totalest;
      ep = ep / totalest;
      fisic = fisic/ totalest;

      Ncalc = Ncalc /totalest;
      Nhis = Nhis / totalest;
      Nef = Nef / totalest;
      Nep = Nep / totalest;
      Nfisic = Nfisic/ totalest;


      //primera fila
      newItem = new QTableWidgetItem(QString::number(calc));
      ui->TW_promedio->setItem(0,0,newItem);

      newItem = new QTableWidgetItem(QString::number(his));
      ui->TW_promedio->setItem(0,1,newItem);

      newItem = new QTableWidgetItem(QString::number(ef));
      ui->TW_promedio->setItem(0,2,newItem);

      newItem = new QTableWidgetItem(QString::number(ep));
      ui->TW_promedio->setItem(0,3,newItem);

      newItem = new QTableWidgetItem(QString::number(fisic));
      ui->TW_promedio->setItem(0,4,newItem);

      //segunda fila

      newItem = new QTableWidgetItem(QString::number(Ncalc));
      ui->TW_promedio->setItem(1,0,newItem);

      newItem = new QTableWidgetItem(QString::number(Nhis));
      ui->TW_promedio->setItem(1,1,newItem);

      newItem = new QTableWidgetItem(QString::number(Nef));
      ui->TW_promedio->setItem(1,2,newItem);

      newItem = new QTableWidgetItem(QString::number(Nep));
      ui->TW_promedio->setItem(1,3,newItem);

      newItem = new QTableWidgetItem(QString::number(Nfisic));
      ui->TW_promedio->setItem(1,4,newItem);

}
