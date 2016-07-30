#include "HeaderRectangulo.h"
#include <iostream>


Rectangulo nuevoRectangulo() {
    Rectangulo nuevo;

    std::cout << "Ingrese el x del vertice izquierdo superior del rectangulo: " << std::endl;
    std::cin >> nuevo.verticeIzquierdoSuperior.x;
    std::cout << "Ingrese el y del vertice izquierdo superior del rectangulo: " << std::endl;
    std::cin >> nuevo.verticeIzquierdoSuperior.y;
    std::cout << "Ingrese el x del vertice derecho inferior del rectangulo: " << std::endl;
    std::cin >> nuevo.verticeDerechoInferior.x;
    std::cout << "Ingrese el y del vertice derecho inferior del rectangulo: " << std::endl;
    std::cin >> nuevo.verticeDerechoInferior.y;

    return nuevo;
}
double calcularLadoHorizontalRectangulo(Rectangulo rectangulo) {
    struct Punto verticeDerechoSuperior;

    verticeDerechoSuperior.x = rectangulo.verticeDerechoInferior.x;
    verticeDerechoSuperior.y = rectangulo.verticeIzquierdoSuperior.y;

    return distanciaEntre2Puntos(rectangulo.verticeIzquierdoSuperior, verticeDerechoSuperior);

}

double calcularLadoVerticalRectangulo(Rectangulo rectangulo) {
    struct Punto verticeDerechoSuperior;

    verticeDerechoSuperior.x = rectangulo.verticeDerechoInferior.x;
    verticeDerechoSuperior.y = rectangulo.verticeIzquierdoSuperior.y;

    return distanciaEntre2Puntos(rectangulo.verticeDerechoInferior, verticeDerechoSuperior);
}

double areaRectangulo(Rectangulo rectangulo) {
    return calcularLadoHorizontalRectangulo(rectangulo) * calcularLadoVerticalRectangulo(rectangulo);
}

double perimetroRectangulo(Rectangulo rectangulo) {
    return 2*calcularLadoHorizontalRectangulo(rectangulo) + 2*calcularLadoVerticalRectangulo(rectangulo);
}

void imprimirAreaRectangulo(double area) {
    std::cout << "El area del rectangulo es " << area << "." << std::endl;
    return;
}

void imprimirPerimetroRectangulo(double perimetro) {
    std::cout << "El perimetro del rectangulo es " << perimetro << "." << std::endl;
    return;
}
