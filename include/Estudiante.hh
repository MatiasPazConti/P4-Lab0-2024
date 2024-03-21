#ifndef ESTUDIANTE
#define ESTUDIANTE

#include "./DTFecha.hh"
#include "./Informacion.hh"

#include <iostream>
#include <set>

class Informacion;

class Estudiante
{
private:
    std::string nombre;
    int ci;
    std::string email;
    std::set<Informacion *> infoGuardada;

public:
    void agregarInformacion(Informacion *);
    void eliminarInformacion(Informacion *);
    Informacion *getInformacion(int);

    std::string toString();
    std::set<std::string> listarInfo(DTFecha);
    void setNombre(std::string);
    void setCI(int);
    void setEmail(std::string);
    std::string getNombre();
    int getCI();
    std::string getEmail();
    Estudiante();
    Estudiante(std::string, int, std::string);
    ~Estudiante();
};

#endif