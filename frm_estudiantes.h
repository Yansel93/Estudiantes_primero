#ifndef FRM_ESTUDIANTES_H
#define FRM_ESTUDIANTES_H

#include <QDialog>

namespace Ui {
class Frm_Estudiantes;
}

class Frm_Estudiantes : public QDialog
{
    Q_OBJECT

public:
    explicit Frm_Estudiantes(QWidget *parent = 0);
    ~Frm_Estudiantes();

private slots:
    void on_commandLinkButton_clicked();

private:
    Ui::Frm_Estudiantes *ui;
};

#endif // FRM_ESTUDIANTES_H
