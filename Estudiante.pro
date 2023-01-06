#-------------------------------------------------
#
# Project created by QtCreator 2015-04-24T02:57:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Estudiante
TEMPLATE = app


SOURCES += main.cpp\
        inicio.cpp \
    grupo.cpp \
    estudiante.cpp \
    asignatura.cpp \
    global.cpp \
    universidad.cpp \
    frm_estudiantes.cpp \
    frm_grupo.cpp \
    frm_horas_clases.cpp \
    frm_mostrar_estudiante.cpp \
    frm_mostar_grupo.cpp \
    frm_mostar_horas.cpp \
    frm_grupos_limpios.cpp \
    frm_promedio_de_ausencias_y_notas_por_asignatura.cpp \
    frm_asignatura_con_mas_estudiantes_suspensos_por_mas_del_20_de_ausencias.cpp \
    frm_mostrarestudiantemasausencia.cpp \
    fm_listadodeestordenadoxnota.cpp \
    frm_ordenxnotas.cpp \
    frm_mostrarnotas.cpp

HEADERS  += inicio.h \
    grupo.h \
    estudiante.h \
    asignatura.h \
    global.h \
    universidad.h \
    frm_estudiantes.h \
    frm_grupo.h \
    frm_horas_clases.h \
    frm_mostrar_estudiante.h \
    frm_mostar_grupo.h \
    frm_mostar_horas.h \
    frm_grupos_limpios.h \
    frm_promedio_de_ausencias_y_notas_por_asignatura.h \
    frm_asignatura_con_mas_estudiantes_suspensos_por_mas_del_20_de_ausencias.h \
    frm_mostrarestudiantemasausencia.h \
    fm_listadodeestordenadoxnota.h \
    frm_ordenxnotas.h \
    fm_listadodeestordenadoxnota.h \
    frm_mostrarnotas.h

FORMS    += inicio.ui \
    frm_estudiantes.ui \
    frm_grupo.ui \
    frm_horas_clases.ui \
    frm_mostrar_estudiante.ui \
    frm_mostar_grupo.ui \
    frm_mostar_horas.ui \
    frm_grupos_limpios.ui \
    frm_promedio_de_ausencias_y_notas_por_asignatura.ui \
    frm_asignatura_con_mas_estudiantes_suspensos_por_mas_del_20_de_ausencias.ui \
    frm_mostrarestudiantemasausencia.ui \
    fm_listadodeestordenadoxnota.ui \
    frm_ordenxnotas.ui \
    frm_mostrarnotas.ui

RESOURCES += \
    img.qrc
