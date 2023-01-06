#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <asignatura.h>
class Estudiante
{
private:
    QString aNombre;
    QString aCI;
    int aEdad;
    QString aSexo;
    int Nota[5];
    int Ausencia[5];

public:
    Estudiante();

    void setNombre(QString pNombre);
    void setCI(QString pCI);
    void setEdad(int pEdad);
    void setSexo(QString pSexo);
    void setNota(int pos,int pNota);
    void setAusencia(int pos , int ausencia);
    float promedio();



    QString getNombre();
    QString getCI();
    int getEdad();
    QString getSexo();
    int getNota(int pos);
    int getAusencias(int pos);


};

#endif // ESTUDIANTE_H
