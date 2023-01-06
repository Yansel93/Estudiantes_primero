#ifndef UNIVERSIDAD_H
#define UNIVERSIDAD_H
#include <grupo.h>

class Universidad
{
private:
        Grupo grupos[10];
        int aContdeGrupo;
        Asignatura Asig[5];
        int aCantAsig;

public:
    Universidad();

    int Buscagrupo(QString pNombre);
    float Porciento(float pTotal, float pParte); //porciento
    void InsertarG(Grupo pGrup); // insertar grupo
    void insertarE(int pos ,Estudiante estud); //insetar Estud
    void setContdeGrupo(int pContdeGrupo);
    void setCantAsig(int pCantAsig);
    void insertarAs(Asignatura pAsig); //insertar Asig
    bool EstSuspenso(int pGPos,int pEstPos); //estud suspenso
    QString EstudianteMasAusencia();//estud mas ausencia



    int getContdeGrupo();
    Grupo *getGrupos(int pos);
    int getCantAsig();
    Asignatura *getAsig(int pos);





};

#endif // UNIVERSIDAD_H
