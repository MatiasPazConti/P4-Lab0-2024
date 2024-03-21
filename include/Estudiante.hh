#include "./DTFecha.hh"

#include <iostream>
#include <set>

class Estudiante
{
private:
    std::string nombre;
    int ci;
    std::string email;

public:
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
