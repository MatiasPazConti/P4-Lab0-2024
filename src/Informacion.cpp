#include "../include/Informacion.hh"

std::string Informacion::toString() {}
void Informacion::setIdentificador(int i)
{
  identificador = i;
}
void Informacion::setFecha(DTFecha f)
{
  fecha = f;
}
int Informacion::getIdentificador()
{
  return identificador;
}
DTFecha Informacion::getFecha()
{
  return fecha;
}
Informacion::Informacion(int i, DTFecha f)
{
  identificador = i;
  fecha = f;
}
Informacion::~Informacion() {}