#ifndef FRM_ORDENXNOTAS_H
#define FRM_ORDENXNOTAS_H

#include <QDialog>

namespace Ui {
class Frm_ordenXNotas;
}

class Frm_ordenXNotas : public QDialog
{
    Q_OBJECT

public:
    explicit Frm_ordenXNotas(QWidget *parent = 0);
    ~Frm_ordenXNotas();

private slots:
    void on_comboBox_activated(int);

private:
    Ui::Frm_ordenXNotas *ui;
};

#endif // FRM_ORDENXNOTAS_H
