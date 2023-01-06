#ifndef FRM_MOSTRAR_ESTUDIANTE_H
#define FRM_MOSTRAR_ESTUDIANTE_H

#include <QDialog>

namespace Ui {
class frm_mostrar_estudiante;
}

class frm_mostrar_estudiante : public QDialog
{
    Q_OBJECT

public:
    explicit frm_mostrar_estudiante(QWidget *parent = 0);
    ~frm_mostrar_estudiante();

private:
    Ui::frm_mostrar_estudiante *ui;
};

#endif // FRM_MOSTRAR_ESTUDIANTE_H
