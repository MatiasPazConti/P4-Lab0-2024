#include "../include/PaginaWeb.hh"

std::string PaginaWeb::toString() {}
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
PaginaWeb::PaginaWeb(std::string t, std::string l, std::string txt)
{
    titulo = t;
    link = l;
    text = txt;
}
PaginaWeb::~PaginaWeb() {}