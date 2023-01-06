#ifndef FRM_ASIGNATURA_CON_MAS_ESTUDIANTES_SUSPENSOS_POR_MAS_DEL_20_DE_AUSENCIAS_H
#define FRM_ASIGNATURA_CON_MAS_ESTUDIANTES_SUSPENSOS_POR_MAS_DEL_20_DE_AUSENCIAS_H

#include <QDialog>

namespace Ui {
class frm_Asignatura_con_mas_estudiantes_suspensos_por_mas_del_20_de_ausencias;
}

class frm_Asignatura_con_mas_estudiantes_suspensos_por_mas_del_20_de_ausencias : public QDialog
{
    Q_OBJECT

public:
    explicit frm_Asignatura_con_mas_estudiantes_suspensos_por_mas_del_20_de_ausencias(QWidget *parent = 0);
    ~frm_Asignatura_con_mas_estudiantes_suspensos_por_mas_del_20_de_ausencias();

private:
    Ui::frm_Asignatura_con_mas_estudiantes_suspensos_por_mas_del_20_de_ausencias *ui;
};

#endif // FRM_ASIGNATURA_CON_MAS_ESTUDIANTES_SUSPENSOS_POR_MAS_DEL_20_DE_AUSENCIAS_H
