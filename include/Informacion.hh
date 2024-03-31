#ifndef INFORMACION
#define INFORMACION

#include "./DTFecha.hh"
#include "./Estudiante.hh"

#include <iostream>
#include <string>
#include <set>

class Estudiante;

class Informacion
{
protected:
  int identificador;
  DTFecha fecha;
  std::set<Estudiante *> guardadoPor;

public:
  void agregarEstudiante(Estudiante *);
  void eliminarEstudiante(Estudiante *);
  Estudiante *getEstudiante(int);

  virtual std::string toString() = 0;
  void setIdentificador(int);
  void setFecha(DTFecha);
  int getIdentificador();
  DTFecha getFecha();
  Informacion();
  Informacion(int, DTFecha);
  virtual ~Informacion();
  std::set<Estudiante *> getGuardadoPor();
};

#endif