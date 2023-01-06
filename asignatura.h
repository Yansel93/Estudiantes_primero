#ifndef ASIGNATURA_H
#define ASIGNATURA_H
#include <QString>

class Asignatura
{
private:
    //varibles
    int aHorasClases[5];

public:
    Asignatura();
    //set
    void setHorasClase(int pos, int hora);

    //get
    int getHorasClases(int pos);

};

#endif // ASIGNATURAS_H
