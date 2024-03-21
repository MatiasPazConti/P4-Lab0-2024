#include "./Informacion.hh"

#include <iostream>

class chatGPT : public Informacion
{
private:
  std::string pregunta;
  std::string respuesta;

public:
  std::string toString();
  void setPregunta(std::string);
  void setRespuesta(std::string);
  std::string getPregunta();
  std::string getRespuesta();
  chatGPT();
  ~chatGPT();
};