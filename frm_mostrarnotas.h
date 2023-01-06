#ifndef FRM_MOSTRARNOTAS_H
#define FRM_MOSTRARNOTAS_H

#include <QDialog>

namespace Ui {
class frm_mostrarNotas;
}

class frm_mostrarNotas : public QDialog
{
    Q_OBJECT

public:
    explicit frm_mostrarNotas(QWidget *parent = 0);
    ~frm_mostrarNotas();

private:
    Ui::frm_mostrarNotas *ui;
};

#endif // FRM_MOSTRARNOTAS_H
