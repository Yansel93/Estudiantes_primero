#ifndef FRM_MOSTAR_GRUPO_H
#define FRM_MOSTAR_GRUPO_H

#include <QDialog>

namespace Ui {
class frm_mostar_grupo;
}

class frm_mostar_grupo : public QDialog
{
    Q_OBJECT

public:
    explicit frm_mostar_grupo(QWidget *parent = 0);
    ~frm_mostar_grupo();

private:
    Ui::frm_mostar_grupo *ui;
};

#endif // FRM_MOSTAR_GRUPO_H
