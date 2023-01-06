#include "estudiante.h"

Estudiante::Estudiante()
{
}

void Estudiante::setNombre(QString pNombre)
{
    aNombre = pNombre;
}

void Estudiante::setCI(QString pCI)
{
    aCI = pCI;
}

void Estudiante::setEdad(int pEdad)
{
        aEdad = pEdad;
}

void Estudiante::setSexo(QString pSexo)
{
    aSexo = pSexo;
}



void Estudiante::setNota(int pos, int pNota)
{
    Nota[pos] = pNota;
}

void Estudiante::setAusencia(int pos, int ausencia)
{
    Ausencia[pos]= ausencia;
}

float Estudiante::promedio()
{

    float promedio = 0;
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
       sum +=getNota(i);
    }
    return promedio = sum/5;

}

QString Estudiante::getNombre()
{
    return aNombre;
}

QString Estudiante::getCI()
{
    return aCI;
}

int Estudiante::getEdad()
{
    return aEdad;
}

QString Estudiante::getSexo()
{
    return aSexo;
}


int Estudiante::getNota(int pos)
{
    return Nota[pos];
}

int Estudiante::getAusencias(int pos)
{
    return Ausencia[pos];
}
