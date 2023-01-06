#include "frm_estudiantes.h"
#include "ui_frm_estudiantes.h"
#include <QMessageBox>
#include <global.h>


Frm_Estudiantes::Frm_Estudiantes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Frm_Estudiantes)
{
    ui->setupUi(this);

    ui->CB_frmEstudiate_NomGup->clear();
    for (int  i= 0;  i< uni->getContdeGrupo(); i++)//ciclo del combo box
    {
      ui->CB_frmEstudiate_NomGup->addItem(uni->getGrupos(i)->getNombre());
    }

        QValidator *vtextos; //validacion de datos
        QValidator *vNum;

        QRegExp rxtext("([A-Z])([a-z]+)");
        vtextos = new QRegExpValidator(rxtext,this);
        ui->LE_frmEstudiante_Nombre->setValidator(vtextos);

        QRegExp rxNum("\\d+");
        vNum = new QRegExpValidator(rxNum,this);
        ui->LE_frmEstudiante_CI->setValidator(vNum);


}

Frm_Estudiantes::~Frm_Estudiantes()
{
    delete ui;
}

void Frm_Estudiantes::on_commandLinkButton_clicked()
{
    QMessageBox *msg = new QMessageBox();
        if(ui->LE_frmEstudiante_Nombre->text().isEmpty() || ui->Nota_Calculo->text().isEmpty() || ui->Nota_EF->text().isEmpty() ||
          ui->Nota_EP->text().isEmpty() || ui->Nota_Fisica->text().isEmpty() || ui->Nota_Historia->text().isEmpty() || ui->Ausencia_Calculo->text().isEmpty() ||
          ui->Ausencia_EF->text().isEmpty() || ui->Ausencia_EP->text().isEmpty() || ui->Ausencia_Fisica->text().isEmpty() || ui->Ausencia_Historia->text().isEmpty())
        {
            msg->setText("Algunos de los campos estan vacios por favor rellenelos los campos");
            msg->show();
        }
        else
        {
            Estudiante estud; //insertar datos
            estud.setNombre(ui->LE_frmEstudiante_Nombre->text());
            estud.setEdad(ui->SB_frmEstudiante_Edad->value());
            estud.setCI(ui->LE_frmEstudiante_CI->text());
            estud.setSexo(ui->CB_frmEstudiante_Sexo->currentText());

            //PARA INSERTAR NOTAS
            int Cal= ui->Nota_Calculo->text().toInt();
            estud.setNota(0,Cal);
            int EF=ui->Nota_EF->text().toInt();
            estud.setNota(1,EF);
            int Fis=ui->Nota_Fisica->text().toInt();
            estud.setNota(2,Fis);
            int His=ui->Nota_Historia->text().toInt();
            estud.setNota(3,His);
            int EP=ui->Nota_EP->text().toInt();
            estud.setNota(4,EP);

            //INSERTAR AUSENCIAS
            int Calc= ui->Ausencia_Calculo->text().toInt();
            estud.setAusencia(0,Calc);
            int EFi=ui->Ausencia_EF->text().toInt();
            estud.setAusencia(1,EFi);
            int fisi=ui->Ausencia_Fisica->text().toInt();
            estud.setAusencia(2,fisi);
            int Hist=ui->Ausencia_Historia->text().toInt();
            estud.setAusencia(3,Hist);
            int EPo=ui->Ausencia_EP->text().toInt();
            estud.setAusencia(4,EPo);


            int pos = ui->CB_frmEstudiate_NomGup->currentIndex();
            uni->insertarE(pos, estud);

            msg->setText("Sus datos fueron Insertados correctamente");
            msg->show();

            //limpiar los LE del formulario
            ui->LE_frmEstudiante_Nombre->clear();
            ui->LE_frmEstudiante_CI->clear();
            ui->SB_frmEstudiante_Edad->setValue(1);
            ui->CB_frmEstudiante_Sexo->setCurrentIndex(0);

            ui->Nota_Calculo->clear();
            ui->Nota_EF->clear();
            ui->Nota_EP->clear();
            ui->Nota_Fisica->clear();
            ui->Nota_Historia->clear();
            ui->Ausencia_Calculo->clear();
            ui->Ausencia_EF->clear();
            ui->Ausencia_EP->clear();
            ui->Ausencia_Fisica->clear();
            ui->Ausencia_Historia->clear();
        }



}
