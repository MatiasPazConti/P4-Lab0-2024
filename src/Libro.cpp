#include "../include/Libro.hh"

std::string Libro::toString() {}
void Libro::setTitulo(std::string t)
{
  titulo = t;
}
void Libro::setAutores(std::set<std::string> a)
{
  autores = a;
}
void Libro::setResumen(std::string r)
{
  resumen = r;
}
std::string Libro::getTitulo()
{
  return titulo;
}
std::set<std::string> Libro::getAutores()
{
  return autores;
}
std::string Libro::getResumen()
{
  return resumen;
}
Libro::Libro(std::string t, std::set<std::string> a, std::string r)
{
  titulo = t;
  autores = a;
  resumen = r;
}
Libro::~Libro() {}