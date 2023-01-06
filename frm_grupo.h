#ifndef FRM_GRUPO_H
#define FRM_GRUPO_H

#include <QDialog>

namespace Ui {
class frm_grupo;
}

class frm_grupo : public QDialog
{
    Q_OBJECT

public:
    explicit frm_grupo(QWidget *parent = 0);
    ~frm_grupo();

private slots:
    void on_commandLinkButton_clicked();

private:
    Ui::frm_grupo *ui;
};

#endif // FRM_GRUPO_H
