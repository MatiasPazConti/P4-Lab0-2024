#include "./DTFecha.hh"

#include <iostream>

class Informacion
{
private:
  int identificador;
  DTFecha fecha;

public:
  virtual std::string toString();
  void setIdentificador(int);
  void setFecha(DTFecha);
  int getIdentificador();
  DTFecha getFecha();
  Informacion();
  Informacion(int, DTFecha);
  ~Informacion();
};