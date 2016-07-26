#include "HeaderTriangulo.h"
#include "HeaderPunto.h"
#include <iostream>

Triangulo nuevoTriangulo(){
  Triangulo nuevo;
  std::cout << "\nIngrese 3 puntos para formar un triangulo:\nPunto 1.x : "; std::cin >> nuevo.trngA.x;
  std::cout << "Punto 1.y : "; std::cin >> nuevo.trngA.y;
  std::cout << "\nPunto 2.x : "; std::cin >> nuevo.trngB.x;
  std::cout << "Punto 2.y : "; std::cin >> nuevo.trngB.y;
  std::cout << "\nPunto 3.x : "; std::cin >> nuevo.trngC.x;
  std::cout << "Punto 3.y : "; std::cin >> nuevo.trngC.y;
  return nuevo;
}

//Función que suma las distancias entre los puntos de un triangulo dado.
double perimetroTriangulo(struct Triangulo triangulo){
	return distanciaEntre2Puntos(triangulo.trngA, triangulo.trngB) +
		distanciaEntre2Puntos(triangulo.trngA, triangulo.trngC) +
		distanciaEntre2Puntos(triangulo.trngB, triangulo.trngC);
}
