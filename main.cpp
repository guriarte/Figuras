#include <iostream>

int main()
{
    int eleccion;

    std::cout << "Elegir una figura: " << std::endl;
    std::cout << "1 - Rectangulo." << std::endl;
    std::cout << "2 - Triangulo." << std::endl;
    std::cout << "3 - Circulo." << std::endl;

    std::cin >> eleccion;

    switch(eleccion)
    {
        case 1:
            nuevoCirculo();
            break;

        case 2:
            nuevoTriangulo();
            break;

        case 3:
            nuevoRectangulo();
            break;

        default:
            std::cout << "Invalido. Elija nuevamente." << std::endl;
            break;
    }
}
