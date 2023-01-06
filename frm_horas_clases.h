#ifndef FRM_HORAS_CLASES_H
#define FRM_HORAS_CLASES_H

#include <QDialog>

namespace Ui {
class frm_horas_clases;
}

class frm_horas_clases : public QDialog
{
    Q_OBJECT

public:
    explicit frm_horas_clases(QWidget *parent = 0);
    ~frm_horas_clases();

private slots:
    void on_commandLinkButton_clicked();

private:
    Ui::frm_horas_clases *ui;
};

#endif // FRM_HORAS_CLASES_H
