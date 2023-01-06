#ifndef FRM_GRUPOS_LIMPIOS_H
#define FRM_GRUPOS_LIMPIOS_H

#include <QDialog>

namespace Ui {
class frm_Grupos_Limpios;
}

class frm_Grupos_Limpios : public QDialog
{
    Q_OBJECT

public:
    explicit frm_Grupos_Limpios(QWidget *parent = 0);
    ~frm_Grupos_Limpios();

private:
    Ui::frm_Grupos_Limpios *ui;
};

#endif // FRM_GRUPOS_LIMPIOS_H
