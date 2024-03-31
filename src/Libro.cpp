#include "../include/Libro.hh"

std::string Libro::toString()
{
  std::string retorno;

  retorno = "Libro: " + std::to_string(identificador) + ", " + fecha.toString() + ", " + titulo;
  std::set<std::string> aut = getAutores();
  for (std::set<std::string>::iterator it = aut.begin(); it != aut.end(); ++it)
  {
    retorno = retorno + ", " + *it;
  }
  retorno = retorno + ", " + getResumen();
  return retorno;
}

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
Libro::Libro() {}
Libro::Libro(int id, DTFecha f, std::string t, std::set<std::string> a, std::string r)
{
  identificador = id;
  fecha = f;
  titulo = t;
  autores = a;
  resumen = r;
}
Libro::~Libro() {}