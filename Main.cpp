#include "./include/DTInfoEstudiante.hh"
#include "./include/ChatGPT.hh"
#include "./include/Libro.hh"
#include "./include/PaginaWeb.hh"
#include <string>

// Sub funcion para parte G
void impirmirListaInfo(Estudiante estudiante, DTFecha desde)
{
    std::set<std::string> listaInfo = estudiante.listarInfo(desde);
    for (std::set<std::string>::iterator it = listaInfo.begin(); it != listaInfo.end(); ++it)
    {
        std::cout << *it << "\n";
    }
};
// Fin subfuncion

// Funcion auxiliar parte H
std::set<DTInfoEstudiante> infoPalabra(std::string palabra, std::set<Informacion *> set)
{
    std::set<DTInfoEstudiante> retorno;
    for (std::set<Informacion *>::iterator it = set.begin(); it != set.end(); ++it)
    {
        if (((*it)->toString().find(palabra)) != std::string::npos)
        {
            std::set<Estudiante *> estGuardados = (*it)->getGuardadoPor();
            for (std::set<Estudiante *>::iterator it2 = estGuardados.begin(); it2 != estGuardados.end(); ++it2)
            {
                DTInfoEstudiante info_encontrada = DTInfoEstudiante((*it2)->getCI(), (*it2)->getNombre(), (*it)->getIdentificador());
                std::cout << info_encontrada << "\n";
                retorno.insert(info_encontrada);
            }
        }
    }
    return retorno;
}
// Fin funcion auxiliar parte H

int main()
{

    // CREAR PAGINA WEB
    DTFecha fecha_p1 = DTFecha(7, 3, 2024);
    DTFecha fecha_p2 = DTFecha(5, 3, 2024);
    DTFecha fecha_gpt1 = DTFecha(8, 3, 2024);
    DTFecha fecha_l = DTFecha(15, 3, 2024);
    DTFecha fecha_gpt2 = fecha_p2;
    DTFecha fecha_inf = fecha_gpt1;

    PaginaWeb pagina1 = PaginaWeb(1, fecha_p1, "Programación 4 Guía Semana 1 (4/3)", "https://eva.fing.edu.uy/pluginfile.php/468051/mod_resource/content/4/Guia01_P42024_IntroCBasicos.pdf", "El objetivo de esta semana es contextualizar el paradigma de Orientación a Objetos (OO) en el marco de la Ingeniería de Software, asi como comenzar a ver sus conceptos básicos y cómo éstos se implementan en C++.");

    PaginaWeb pagina2 = PaginaWeb(2, fecha_p2, "Programación orientada a objetos", "https://es.wikipedia.org/wiki/Programaci%C3%B3n_orientada_a_objetos", "La programación orientada a objetos (POO, en español) es un paradigma de programación que parte del concepto de 'objetos' como base, los cuales contienen información en forma de campos (a veces también referidos como atributos o propiedades) y código en forma de métodos. Algunas características clave de la programación orientada a objetos son herencia, cohesión, abstracción, polimorfismo, acoplamiento y encapsulamiento.");
    // FIN CREAR PAGINA WEB

    // CREAR chatGPT
    ChatGPT chat1 = ChatGPT(3, fecha_gpt1, "¿Qué es el polimorfismo en orientación a objetos?", "El polimorfismo en programación orientada a objetos se refiere a la capacidad de un objeto de tomar múltiples formas. Puede ser estático, resuelto en tiempo de compilación, basado en la herencia, o dinámico, resuelto en tiempo de ejecución, asociado a interfaces o métodos abstractos. En esencia, permite que objetos de diferentes clases respondan a la misma interfaz de manera coherente, facilitando la flexibilidad y extensibilidad del código.");

    ChatGPT chat2 = ChatGPT(4, fecha_gpt2, " ¿Qué es el acoplamiento en orientación a objetos?", "El acoplamiento en programación orientada a objetos se refiere al grado de dependencia entre las clases o módulos de un sistema. Un bajo acoplamiento es deseable, ya que implica que las clases son independientes entre sí, lo que facilita la modificación, mantenimiento y reutilización del código. Por otro lado, un alto acoplamiento indica una fuerte interdependencia entre las clases, lo que puede hacer que el sistema sea más difícil de entender, modificar y mantener.");
    // FIN chatGpt

    // Crear Libro

    std::set<std::string> aut;
    aut.insert("Craig Larman");

    Libro libro = Libro(5, fecha_l, "= Applying UML and Patterns: An Introduction to Object-Oriented Analysis and Design and Iterative Development", aut, "= Applying UML and Patterns is the world’s #1 business and college introduction to “thinking in objects”―and using that insight in real-world objectoriented analysis and design. Building on two widely acclaimed previous editions, Craig Larman has updated this book to fully reflect the new UML 2 standard, to help you master the art of object design, and to promote high-impact, iterative, and skillful agile modeling practices.");
    // Fin crear Libro

    // Imprimir objetos
    /*std::cout << pagina1.toString() << "\n";
    std::cout << pagina2.toString() << "\n";
    std::cout << chat1.toString() << "\n";
    std::cout << chat2.toString() << "\n";
    std::cout << libro.toString() << "\n";*/

    // Crear estudiantes
    Estudiante estudiante1 = Estudiante("Alex Garcia", 52365899, "ag5678@gmail.com");
    Estudiante estudiante2 = Estudiante("Betina Gonzalez", 49891239, "beg999@gmail.com");
    // Fin crear estudiantes

    // Parte F
    estudiante1.agregarInformacion(&pagina1);
    estudiante1.agregarInformacion(&pagina2);
    estudiante1.agregarInformacion(&chat1);
    estudiante2.agregarInformacion(&chat1);
    estudiante2.agregarInformacion(&chat2);
    estudiante2.agregarInformacion(&libro);
    pagina1.agregarEstudiante(&estudiante1);
    pagina2.agregarEstudiante(&estudiante1);
    chat1.agregarEstudiante(&estudiante1);
    chat1.agregarEstudiante(&estudiante2);
    chat2.agregarEstudiante(&estudiante2);
    libro.agregarEstudiante(&estudiante2);
    // Fin parte F

    // Set Informacion
    std::set<Informacion *> setInfo;
    setInfo.insert(&pagina1);
    setInfo.insert(&pagina2);
    setInfo.insert(&chat1);
    setInfo.insert(&chat2);
    setInfo.insert(&libro);
    // Fin Set Informacion

    // Set Estudiantes
    std::set<Estudiante *> setEst;
    setEst.insert(&estudiante1);
    setEst.insert(&estudiante2);
    // Fin Set Estudiantes

    // Inicio parte G
    //   impirmirListaInfo(estudiante1, fecha_inf);
    //   impirmirListaInfo(estudiante2, fecha_inf);
    // Fin parte G

    // Parte H
    std::set<DTInfoEstudiante> setInfoEst = infoPalabra("polimorfismo", setInfo);
    // Fin parte H

    // Fin Main
    return 0;
}