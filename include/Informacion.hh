#ifndef INFORMACION
#define INFORMACION

#include "./DTFecha.hh"
#include "./Estudiante.hh"

#include <iostream>
#include <set>

class Estudiante;

class Informacion
{
private:
  int identificador;
  DTFecha fecha;
  std::set<Estudiante *> guardadoPor;

public:
  void agregarEstudiante(Estudiante *);

  virtual std::string toString();
  void setIdentificador(int);
  void setFecha(DTFecha);
  int getIdentificador();
  DTFecha getFecha();
  Informacion();
  Informacion(int, DTFecha);
  ~Informacion();
};

#endif