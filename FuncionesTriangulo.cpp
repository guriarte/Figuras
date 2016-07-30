#include "HeaderTriangulo.h"
#include <iostream>
#include <math.h>

Triangulo nuevoTriangulo(){
  Triangulo nuevo;
  std::cout << "\nIngrese 3 puntos para formar un triangulo:\nPunto 1.x : "; std::cin >> nuevo.verticeA.x;
  std::cout << "Punto 1.y : "; std::cin >> nuevo.verticeA.y;
  std::cout << "\nPunto 2.x : "; std::cin >> nuevo.verticeB.x;
  std::cout << "Punto 2.y : "; std::cin >> nuevo.verticeB.y;
  std::cout << "\nPunto 3.x : "; std::cin >> nuevo.verticeC.x;
  std::cout << "Punto 3.y : "; std::cin >> nuevo.verticeC.y;
  return nuevo;
}

//Función que suma las distancias entre los puntos de un triangulo dado.
double perimetroTriangulo(struct Triangulo triangulo){
	return distanciaEntre2Puntos(triangulo.verticeA, triangulo.verticeB) +
		distanciaEntre2Puntos(triangulo.verticeA, triangulo.verticeC) +
		distanciaEntre2Puntos(triangulo.verticeB, triangulo.verticeC);
}

double areaTriangulo(struct Triangulo triangulo) {
    double semiperimetro, ladoAB, ladoBC, ladoAC;

    semiperimetro = perimetroTriangulo(triangulo)/2;
    ladoAB = distanciaEntre2Puntos(triangulo.verticeA, triangulo.verticeB);
    ladoBC = distanciaEntre2Puntos(triangulo.verticeB, triangulo.verticeC);
    ladoAC = distanciaEntre2Puntos(triangulo.verticeA, triangulo.verticeC);

    return sqrt(semiperimetro*(semiperimetro-ladoAB)*(semiperimetro-ladoBC)*(semiperimetro-ladoAC));//Fórmula de Herón
}

void imprimirAreaTriangulo(double area) {
    std::cout << "El area del triangulo es " << area << "." << std::endl;
    return;
}

void imprimirPerimetroTriangulo(double perimetro) {
    std::cout << "El perimetro del triangulo es " << perimetro << "." << std::endl;
    return;
}
