#include "./Informacion.hh"

#include <iostream>

class ChatGPT : public Informacion
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
  ChatGPT();
  ChatGPT(std::string, std::string);
  ~ChatGPT();
};
