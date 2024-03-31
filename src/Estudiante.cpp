#include "../include/Estudiante.hh"

void Estudiante::agregarInformacion(Informacion *i)
{
  infoGuardada.insert(i);
}
void Estudiante::eliminarInformacion(Informacion *i)
{
  infoGuardada.erase(i);
}
Informacion *Estudiante::getInformacion(int id)
{
  for (std::set<Informacion *>::iterator it = infoGuardada.begin(); it != infoGuardada.end(); ++it)
  {
    if ((*it)->getIdentificador() == id)
    {
      return *it;
    }
  }
  return NULL;
}

// Estudiante toStrign
std::string Estudiante::toString()
{
  std::string retorno;
  retorno = "Estudiante: " + nombre + ", " + std::to_string(ci) + ", " + email;
  return retorno;
}

std::set<std::string> Estudiante::listarInfo(DTFecha desde)
{
  std::set<std::string> retorno;
  for (std::set<Informacion *>::iterator it = infoGuardada.begin(); it != infoGuardada.end(); ++it)
  {
    if ((*it)->getFecha().compararFecha(desde) == 1)
    {
      retorno.insert((*it)->toString());
    }
  }
  return retorno;
}

void Estudiante::setNombre(std::string n)
{
  nombre = n;
}
void Estudiante::setCI(int c)
{
  ci = c;
}
void Estudiante::setEmail(std::string e)
{
  email = e;
}
std::string Estudiante::getNombre()
{
  return nombre;
}
int Estudiante::getCI()
{
  return ci;
}
std::string Estudiante::getEmail()
{
  return email;
}
Estudiante::Estudiante() {}
Estudiante::Estudiante(std::string n, int c, std::string e)
{
  nombre = n;
  ci = c;
  email = e;
}
Estudiante::~Estudiante() {}
