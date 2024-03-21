#include "../include/DTFecha.hh"

int DTFecha::getDia()
{
  return dia;
}
int DTFecha::getMes()
{
  return mes;
}
int DTFecha::getAnio()
{
  return anio;
}
DTFecha::DTFecha(int d, int m, int a)
{
  dia = d;
  mes = m;
  anio = a;
}
DTFecha::~DTFecha() {}