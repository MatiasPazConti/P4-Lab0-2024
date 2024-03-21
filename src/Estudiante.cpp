#include "../include/Estudiante.hh"

std::string Estudiante::toString() {}
std::set<std::string> Estudiante::listarInfo(DTFecha) {}
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
Estudiante::Estudiante(std::string n, int c, std::string e)
{
  nombre = n;
  ci = c;
  email = e;
}
Estudiante::~Estudiante() {}