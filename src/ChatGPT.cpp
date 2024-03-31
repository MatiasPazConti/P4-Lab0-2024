#include "../include/ChatGPT.hh"

std::string ChatGPT::toString()
{
  std::string retorno;
  retorno = "chatGPT: " + std::to_string(identificador) + ", " + fecha.toString() + ", " + pregunta + ", " + respuesta;
  return retorno;
}

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
ChatGPT::ChatGPT() {}
ChatGPT::ChatGPT(int id, DTFecha f, std::string p, std::string r)
{
  identificador = id;
  fecha = f;
  pregunta = p;
  respuesta = r;
}
ChatGPT::~ChatGPT() {}