#ifndef FRM_PROMEDIO_DE_AUSENCIAS_Y_NOTAS_POR_ASIGNATURA_H
#define FRM_PROMEDIO_DE_AUSENCIAS_Y_NOTAS_POR_ASIGNATURA_H

#include <QDialog>

namespace Ui {
class frm_Promedio_de_ausencias_y_notas_por_asignatura;
}

class frm_Promedio_de_ausencias_y_notas_por_asignatura : public QDialog
{
    Q_OBJECT

public:
    explicit frm_Promedio_de_ausencias_y_notas_por_asignatura(QWidget *parent = 0);
    ~frm_Promedio_de_ausencias_y_notas_por_asignatura();

private slots:
    void on_CB_promedio_grupo_activated(const QString &arg1);

    void on_CB_promedio_estudiante_activated(const QString &arg1);

    void on_CB_promedio_estudiante_activated(int index);

private:
    Ui::frm_Promedio_de_ausencias_y_notas_por_asignatura *ui;
};

#endif // FRM_PROMEDIO_DE_AUSENCIAS_Y_NOTAS_POR_ASIGNATURA_H
