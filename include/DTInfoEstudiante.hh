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
  DTInfoEstudiante(int, std::string, int);
  ~DTInfoEstudiante();
};