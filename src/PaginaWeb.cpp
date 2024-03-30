#include "../include/PaginaWeb.hh"

std::string PaginaWeb::toString()
{
    std::string retorno;

    retorno = "PaginaWeb: " + std::to_string(identificador) + ", " + fecha.toString() + ", " + titulo + ", " + link + ", " + text;
    return retorno;
}

void PaginaWeb::setTitulo(std::string t)
{
    titulo = t;
}
void PaginaWeb::setLink(std::string l)
{
    link = l;
}
void PaginaWeb::setText(std::string txt)
{
    text = txt;
}
std::string PaginaWeb::getTitulo()
{
    return titulo;
}
std::string PaginaWeb::getLink()
{
    return link;
}
std::string PaginaWeb::getText()
{
    return text;
}
PaginaWeb::PaginaWeb(int id, DTFecha f, std::string t, std::string l, std::string txt)
{
    identificador = id;
    fecha = f;
    titulo = t;
    link = l;
    text = txt;
}
PaginaWeb::~PaginaWeb() {}