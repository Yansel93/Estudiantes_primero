#ifndef INICIO_H
#define INICIO_H

#include <QMainWindow>

namespace Ui {
class Inicio;
}

class Inicio : public QMainWindow
{
    Q_OBJECT

public:
    explicit Inicio(QWidget *parent = 0);
    ~Inicio();

private slots:
    void on_actionEstudiantes_2_triggered();

    void on_commandLinkButton_clicked();

    void on_actionGrupo_triggered();

    void on_actionHoras_Clases_triggered();

    void on_actionEstudiantes_triggered();

    void on_actionGrupo_2_triggered();

    void on_actionHoras_Clases_2_triggered();

    void on_actionLista_de_Grupos_Limpios_triggered();

    void on_actionEstudiante_con_mas_ausencias_triggered();

    void on_actionPromedio_de_ausencias_y_notas_por_asignatura_triggered();

    void on_actionAsignatura_con_mas_estudiantes_suspensos_por_m_s_de_20_de_ausencias_triggered();

    void on_actionMejor_estudiante_acad_micamente_triggered();

    void on_actionPeor_estudiante_acad_micamente_triggered();



    void on_actionListado_total_de_estudiantes_ordenado_por_notas_triggered();

    void on_actionNotas_triggered();

private:
    Ui::Inicio *ui;
};

#endif // INICIO_H
