#include "../include/Informacion.hh"

void Informacion::agregarEstudiante(Estudiante *e)
{
  guardadoPor.insert(e);
}
void Informacion::eliminarEstudiante(Estudiante *e)
{
  guardadoPor.erase(e);
}
Estudiante *Informacion::getEstudiante(int ci)
{
  for (std::set<Estudiante *>::iterator it = guardadoPor.begin(); it != guardadoPor.end(); ++it)
  {
    if ((*it)->getCI() == ci)
    {
      return *it;
    }
  }
  return NULL;
}

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
Informacion::Informacion() {}
Informacion::Informacion(int i, DTFecha f)
{
  identificador = i;
  fecha = f;
}
Informacion::~Informacion()
{
  std::set<Estudiante *>::iterator it = guardadoPor.begin();
  while (!guardadoPor.empty())
  {
    (*it)->eliminarInformacion(this);
    guardadoPor.erase(it);
    it = guardadoPor.begin();
  }
}

std::set<Estudiante *> Informacion::getGuardadoPor()
{
  return guardadoPor;
};
