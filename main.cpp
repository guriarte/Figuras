#include <iostream>
#include "HeaderCirculo.h"
#include "HeaderRectangulo.h"
#include "HeaderTriangulo.h"

int main()
{
    int eleccion;
    Circulo figuraCirculo;
    Triangulo figuraTriangulo;

    std::cout << "Elegir una figura: " << std::endl;
    std::cout << "1 - Circulo." << std::endl;
    std::cout << "2 - Triangulo." << std::endl;
    std::cout << "3 - Rectangulo." << std::endl;

    std::cin >> eleccion;

    switch(eleccion)
    {
        case 1:
            figuraCirculo = nuevoCirculo();
            break;

        case 2:
            figuraTriangulo = nuevoTriangulo();
            break;

        case 3:
            //nuevoRectangulo();
            break;

        default:
            std::cout << "Invalido. Elija nuevamente." << std::endl;
            break;
    }
}
