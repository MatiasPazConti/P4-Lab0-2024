#include "../include/ChatGPT.hh"

std::string ChatGPT::toString() {}
void ChatGPT::setPregunta(std::string p)
{
  pregunta = p;
}
void ChatGPT::setRespuesta(std::string r)
{
  respuesta = r;
}
std::string ChatGPT::getPregunta()
{
  return pregunta;
}
std::string ChatGPT::getRespuesta()
{
  return respuesta;
}
ChatGPT::ChatGPT(std::string p, std::string r)
{
  pregunta = p;
  respuesta = r;
}
ChatGPT::~ChatGPT() {}