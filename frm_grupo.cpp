#include "frm_grupo.h"
#include "ui_frm_grupo.h"
#include <global.h>
#include<QMessageBox>

frm_grupo::frm_grupo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frm_grupo)
{
    ui->setupUi(this);
    QValidator *vtextos;
        QRegExp rxtext("([A-Z])([a-z]+)");
        vtextos = new QRegExpValidator(rxtext,this);
        ui->LE_frmGrupo_Nombre->setValidator(vtextos);

}

frm_grupo::~frm_grupo()
{
    delete ui;
}

void frm_grupo::on_commandLinkButton_clicked()
{
    QMessageBox *msg = new QMessageBox();
        if(ui->LE_frmGrupo_Nombre->text().isEmpty())
        {
            msg->setText("Algunos de los campos estan vacios por favor rellene los los campos");
            msg->show();
        }
        else
        {
            Grupo grupos;
            grupos.setNombre(ui->LE_frmGrupo_Nombre->text());
            grupos.setAnio(ui->SB_frmgupo_Anio->value());
            grupos.setCantdeEstudiantes(ui->SB_frmGrupo_CantEstud->value());


            uni->InsertarG(grupos);//insertar grupos

            msg->setText("Sus datos fueron Insertados correctamente");
            msg->show();
            ui->LE_frmGrupo_Nombre->clear();
            ui->SB_frmgupo_Anio->setValue(1);
            ui->SB_frmGrupo_CantEstud->setValue(1);

}
}
