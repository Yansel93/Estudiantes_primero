#include "fm_listadodeestordenadoxnota.h"
#include "ui_fm_listadodeestordenadoxnota.h"

fm_listadodeestordenadoxnota::fm_listadodeestordenadoxnota(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_listadodeestordenadoxnota)
{
    ui->setupUi(this);
}

fm_listadodeestordenadoxnota::~fm_listadodeestordenadoxnota()
{
    delete ui;
}
