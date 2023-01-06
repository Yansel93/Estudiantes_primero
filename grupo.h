#ifndef GRUPO_H
#define GRUPO_H
#include <estudiante.h>

class Grupo
{
private:
    QString aNombre;
    int aAnio;
    Estudiante estud[30];
    int aCantdeEstudiantes;
    int aContDeEstud;

public:
    Grupo();

    void setNombre(QString pNombre);
    void setAnio(int pAnio);
    void setCantdeEstudiantes(int pCantdeEstudiantes);
    void insertar(Estudiante pEst);
    void setContDeEstud(int pContDeEstud);
    void OrdenarNota_Estud();
    void OrdenarMenor_estud();




    QString getNombre();
    int getAnio();
    int getCantdeEstudiantes();
    int getContDeEstud();
    Estudiante *getEst(int pos);



};

#endif // GRUPO_H
