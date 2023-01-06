#include "universidad.h"
#include <global.h>

Universidad::Universidad()
{
    aContdeGrupo = 0;
    aCantAsig = 0;

}

int Universidad::Buscagrupo(QString pNombre)
{
    for (int i = 0;i <aContdeGrupo;i++ )
        {
            if(grupos[i].getNombre() == pNombre)
            {
                return i;
            }
        }
}

float Universidad::Porciento(float pTotal, float pParte)
{
    float porciento = (pParte * 100)/pTotal;

        return porciento;
}

void Universidad::InsertarG(Grupo pGrup)
{
    grupos[aContdeGrupo++] = pGrup;
}

void Universidad::insertarE(int pos, Estudiante estud)
{
    grupos[pos].insertar(estud);
}

void Universidad::setContdeGrupo(int pContdeGrupo)
{
    aContdeGrupo=pContdeGrupo;
}

void Universidad::setCantAsig(int pCantAsig)
{
    aCantAsig = pCantAsig;
}

void Universidad::insertarAs(Asignatura pAsig)
{
    Asig[aCantAsig++] = pAsig;
}



bool Universidad::EstSuspenso(int pGPos, int pEstPos)
{
    for (int i = 0;i  < 5; i++)
        {
         for (int j = 0; j <5; j++)
         {
            int ausencias = getGrupos(pGPos)->getEst(pEstPos)->getAusencias(i);
                    int total = getAsig(i)->getHorasClases(j);
                    if(Porciento(total,ausencias) >= 20)
                    {
                        return true;
                    }
         }
         return false;
        }

}

QString Universidad::EstudianteMasAusencia()
{
    int mayor = 0;
        int gPos = 0;   //pos grupo
        int ePos = 0;   // pos est
        int aPos = 0;   // pos asig
        QString nom;
        for(int i = 0;i<getContdeGrupo();i++)
        {
            for(int j = 0;j <getGrupos(i)->getCantdeEstudiantes();j++)
            {
                for(int k = 0;k<5;k++)
                {
                    if(mayor <= getGrupos(i)->getEst(j)->getAusencias(k))
                    {
                        mayor = getGrupos(i)->getEst(j)->getAusencias(k);
                        gPos = i;
                        ePos = j;
                        aPos = k;
                     }
                }
            }
        }
        nom = getGrupos(gPos)->getEst(ePos)->getNombre();
        return nom;
}

int Universidad::getContdeGrupo()
{
    return aContdeGrupo;
}

Grupo *Universidad::getGrupos(int pos)
{
    return &grupos[pos];
}

Asignatura *Universidad::getAsig(int pos)
{
    return &Asig[pos];
}


