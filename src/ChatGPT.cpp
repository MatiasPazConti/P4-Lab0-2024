#include "../include/ChatGPT.hh"

std::string ChatGPT::toString() {
    std::string retorno;
   
    retorno = "chatGPT: "+=to_string(getIdentificador()) +=", "+= getFecha().toString() +=", "+= getPregunta()+=", "+ getRespuesta(); 
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
ChatGPT::ChatGPT(int id,DTFecha fecha,std::string p, std::string r)
{
  identificador = id;
  fecha = fecha;
  pregunta = p;
  respuesta = r;
}
ChatGPT::~ChatGPT() {}