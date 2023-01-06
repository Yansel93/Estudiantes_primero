#ifndef FRM_MOSTRARESTUDIANTEMASAUSENCIA_H
#define FRM_MOSTRARESTUDIANTEMASAUSENCIA_H

#include <QDialog>

namespace Ui {
class frm_MostrarEstudianteMasAusencia;
}

class frm_MostrarEstudianteMasAusencia : public QDialog
{
    Q_OBJECT

public:
    explicit frm_MostrarEstudianteMasAusencia(QWidget *parent = 0);
    ~frm_MostrarEstudianteMasAusencia();

private:
    Ui::frm_MostrarEstudianteMasAusencia *ui;
};

#endif // FRM_MOSTRARESTUDIANTEMASAUSENCIA_H
