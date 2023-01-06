#ifndef FRM_MOSTAR_HORAS_H
#define FRM_MOSTAR_HORAS_H

#include <QDialog>

namespace Ui {
class frm_mostar_horas;
}

class frm_mostar_horas : public QDialog
{
    Q_OBJECT

public:
    explicit frm_mostar_horas(QWidget *parent = 0);
    ~frm_mostar_horas();

private:
    Ui::frm_mostar_horas *ui;
};

#endif // FRM_MOSTAR_HORAS_H
