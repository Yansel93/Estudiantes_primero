#include "asignatura.h"

Asignatura::Asignatura()
{
}

void Asignatura::setHorasClase(int pos, int hora)
{
    aHorasClases[pos] = hora;
}

int Asignatura::getHorasClases(int pos)
{
    return aHorasClases[pos];
}
