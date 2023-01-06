#include "frm_horas_clases.h"
#include "ui_frm_horas_clases.h"
#include <global.h>
#include <QMessageBox>

frm_horas_clases::frm_horas_clases(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frm_horas_clases)
{
    ui->setupUi(this);

    ui->CB_frmHoras_grupo->clear();

    for (int i = 0; i <uni->getContdeGrupo(); i++)
    {
        ui->CB_frmHoras_grupo->addItem(uni->getGrupos(i)->getNombre());
    }

        QValidator *vnum;

       QRegExp rxnum("\\d+");
       vnum = new QRegExpValidator(rxnum,this);

       ui->LE_frmHoras_calculo->setValidator(vnum);
       ui->LE_frmHoras_EF->setValidator(vnum);
       ui->LE_frmHoras_EP->setValidator(vnum);
       ui->LE_frmHoras_Fisica->setValidator(vnum);
       ui->LE_frmHoras_Historia->setValidator(vnum);

}

frm_horas_clases::~frm_horas_clases()
{
    delete ui;
}

void frm_horas_clases::on_commandLinkButton_clicked()
{
    QMessageBox *msg = new QMessageBox(this);

       if (ui->LE_frmHoras_calculo->text().isEmpty() || ui->LE_frmHoras_EF->text().isEmpty() || ui->LE_frmHoras_EP->text().isEmpty() || ui->LE_frmHoras_Fisica->text().isEmpty()
                   || ui->LE_frmHoras_Historia->text().isEmpty())

           {
               msg->setText("Faltan Algunos campos por Rellenar por favor Rellenelos");
               msg->show();
           }
           else
           {
           Asignatura asig;

                   int hora1 = ui->LE_frmHoras_calculo->text().toInt();
                   asig.setHorasClase(0,hora1);

                   int hora2 = ui->LE_frmHoras_EF->text().toInt();
                   asig.setHorasClase(1,hora2);

                   int hora3 = ui->LE_frmHoras_Fisica->text().toInt();
                   asig.setHorasClase(2,hora3);

                   int hora4 = ui->LE_frmHoras_Historia->text().toInt();
                   asig.setHorasClase(3,hora4);

                   int hora5 = ui->LE_frmHoras_EP->text().toInt();
                   asig.setHorasClase(4,hora5);

                   uni->insertarAs(asig);


           msg->setText("Sus datos fueron Insertados correctamente");
           msg->show();

           ui->LE_frmHoras_calculo->clear();
           ui->LE_frmHoras_EF->clear();
           ui->LE_frmHoras_EP->clear();
           ui->LE_frmHoras_Fisica->clear();
           ui->LE_frmHoras_Historia->clear();


           }

}
