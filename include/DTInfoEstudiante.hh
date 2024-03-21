#ifndef DT_INFO_ESTUDIANTE
#define DT_INFO_ESTUDIANTE

#include <iostream>

class DTInfoEstudiante
{
private:
  int ci;
  std::string nombreEst;
  int identificadorInfo;

public:
  int getCI();
  int getIdentificadorInfo();
  std::string getNombreEst();
  DTInfoEstudiante();
  DTInfoEstudiante(int, std::string, int);
  ~DTInfoEstudiante();
  void setPrint(std::ostream &out);
};

std::ostream &operator<<(std::ostream &out, DTInfoEstudiante &obj);

#endif