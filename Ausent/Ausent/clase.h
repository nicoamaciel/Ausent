#ifndef CLASE_H_INCLUDED
#define CLASE_H_INCLUDED

#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;


class AltaEmpleado{
private:
    int FechaAlta;
    int Legajo;
    int Dni;
    char Nombre[50];
    char Apellido[50];
public:
    //Gets
    int getFechaAlta(){return FechaAlta;}
    int getLegajo(){return Legajo;}
    int getDni(){return Dni;}
    const char *getNombre(){return Nombre;}
    const char *getApellido(){return Apellido;}
    //Sets
    void setFechaAlta(int alta){FechaAlta=alta;}
    void setLegajo(int lega){Legajo=lega;}
    void setDni(int dni){Dni=dni;}
    void setNombre(const char *nom){strcpy(Nombre,nom);}
    void setApellido(const char *ape){strcpy(Apellido,ape);}

    void Cargar();
    void Mostrar();
    bool grabarDisco(int);
    bool leerDisco(int);
};

class Ingreso{
private:
    int Fecha;
    int HoraIngreso;
    int Legajo;
    char Nombre[50];
    char Apellido[50];
public:
    //Gets
    int getFecha(){return Fecha;}
    int getIngreso(){return HoraIngreso;}
    int getLegajo(){return Legajo;}
    char *getNombre(){return Nombre;}
    char *getApellido(){return Apellido;}

    //Sets
    void setFecha(int fec){Fecha=fec;}
    void setIngreso(int ing){HoraIngreso=ing;}
    void setLegajo(int leg){Legajo=leg;}
    void setNombre(const char *nom){strcpy(Nombre,nom);}
    void setApellido(const char *ape){strcpy(Apellido,ape);}

    void Cargar();
    void Mostrar();
    bool grabarDisco(int);
    bool leerDisco(int);
};

class Egreso{
private:
    int Fecha;
    int HoraEgreso;
    int Legajo;
    char Nombre[50];
    char Apellido[50];
public:
    //Gets
    int getFecha(){return Fecha;}
    int getEgreso(){return HoraEgreso;}
    int getLegajo(){return Legajo;}
    char *getNombre(){return Nombre;}
    char *getApellido(){return Apellido;}

    //Sets
    void setFecha(int fec){Fecha=fec;}
    void setEgreso(int ing){HoraEgreso=ing;}
    void setLegajo(int leg){Legajo=leg;}
    void setNombre(const char *nom){strcpy(Nombre,nom);}
    void setApellido(const char *ape){strcpy(Apellido,ape);}

    void Cargar();
    void Mostrar();
    bool grabarDisco(int);
    bool leerDisco(int);
};

class Vacaciones{

    private:
    int Categoria;
    int Antiguedad;
    int InicioVac;
    int FinVac;
    public:

    //Gets
    int getCategoria(){return Categoria;}
    int getAntiguedad(){return Antiguedad;}
    int getInicioVac(){return InicioVac;}
    int getFinVac(){return FinVac;}

    //Set
    void setCategoria(int catego){Categoria=catego;}
    void setAntiguedad(int anti){Antiguedad=anti;}
    void setInicioVac(int ini){InicioVac=ini;}
    void setFinVac(int fin){FinVac=fin;}

    void Cargar();
    void Mostrar();
    bool grabarDisco();
    bool leerDisco();

};

class diasTrabajados{
    private:
    int diasLicencia;
    int diasSinActividad;
    public:
    //Gets
    int getDiaslicencia(){return diasLicencia;}
    int getSinActividad(){return diasSinActividad;}
    //Sets
    void setDiaslicencia (int licencia){diasLicencia=licencia;}
    void setSinActividad(int sinActividad){diasSinActividad=sinActividad;}
};





#endif // CLASE_H_INCLUDED
