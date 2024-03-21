#include "./Informacion.hh"

#include <iostream>

class PaginaWeb : public Informacion
{
private:
    std::string titulo;
    std::string link;
    std::string text;

public:
    std::string toString();
    void setTitulo(std::string);
    void setLink(std::string);
    void setText(std::string);
    std::string getTitulo();
    std::string getLink();
    std::string getText();
    PaginaWeb(std::string, std::string, std::string);
    ~PaginaWeb();
};
