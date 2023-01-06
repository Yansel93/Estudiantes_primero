#include "grupo.h"

Grupo::Grupo()
{
    aContDeEstud = 0;
}

void Grupo::setNombre(QString pNombre)
{
    aNombre = pNombre;
}

void Grupo::setAnio(int pAnio)
{
    aAnio = pAnio;
}

void Grupo::setCantdeEstudiantes(int pCantdeEstudiantes)
{
    aCantdeEstudiantes = pCantdeEstudiantes;

}

void Grupo::insertar(Estudiante pEst)
{
    estud[aContDeEstud++]= pEst;

}

void Grupo::setContDeEstud(int pContDeEstud)
{
    aContDeEstud =pContDeEstud;
}

void Grupo::OrdenarNota_Estud()
{
    Estudiante aux[1];
        for (int i = 0; i < getContDeEstud()-1; i++)
        {
            for (int j = i+1; j < getContDeEstud(); j++)
            {
                float estA=estud[i].promedio();
                float estB=estud[j].promedio();
                if(estA < estB)
                {
                    aux[0]= estud[i];
                    estud[i] = estud[j];
                    estud[j]= aux[0];
                }

            }
        }

}

void Grupo::OrdenarMenor_estud()
{
    Estudiante aux[1];
        for (int i = 0; i < getContDeEstud()-1; i++)
        {
            for (int j = i+1; j < getContDeEstud(); j++)
            {
                float estA=estud[i].promedio();
                float estB=estud[j].promedio();
                if(estA > estB)
                {
                    aux[0]= estud[i];
                    estud[i] = estud[j];
                    estud[j]= aux[0];
                }

            }
        }

}

QString Grupo::getNombre()
{
    return aNombre;
}

int Grupo::getAnio()
{
    return aAnio;
}

int Grupo::getCantdeEstudiantes()
{
    return aCantdeEstudiantes;

}

int Grupo::getContDeEstud()
{
    return aContDeEstud;
}

Estudiante *Grupo::getEst(int pos)
{
    return &estud[pos];
}
