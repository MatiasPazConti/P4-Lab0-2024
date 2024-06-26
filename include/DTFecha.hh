#ifndef DT_FECHA
#define DT_FECHA
#include <iostream>

class DTFecha
{
private:
  int dia;
  int mes;
  int anio;

public:
  int getDia();
  int getMes();
  int getAnio();
  DTFecha();
  DTFecha(int, int, int);
  ~DTFecha();
  std::string toString();
  int compararFecha(DTFecha fecha);
};

#endif