#ifndef LIBRO
#define LIBRO

#include "./Informacion.hh"

#include <iostream>
#include <set>

class Libro : public Informacion
{
private:
    std::string titulo;
    std::set<std::string> autores;
    std::string resumen;

public:
    std::string toString();
    void setTitulo(std::string);
    void setAutores(std::set<std::string>);
    void setResumen(std::string);
    std::string getTitulo();
    std::set<std::string> getAutores();
    std::string getResumen();
    Libro();
    Libro(std::string, std::set<std::string>, std::string);
    ~Libro();
};

#endif