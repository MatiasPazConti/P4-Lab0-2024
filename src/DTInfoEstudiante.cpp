#include "../include/DTInfoEstudiante.hh"

int DTInfoEstudiante::getCI()
{
  return ci;
}
int DTInfoEstudiante::getIdentificadorInfo()
{
  return identificadorInfo;
}
std::string DTInfoEstudiante::getNombreEst()
{
  return nombreEst;
}
DTInfoEstudiante::DTInfoEstudiante(int c, std::string n, int id)
{
  ci = c;
  nombreEst = n;
  identificadorInfo = id;
}
DTInfoEstudiante::~DTInfoEstudiante() {}