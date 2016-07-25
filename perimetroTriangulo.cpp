//suma las distancias entre los puntos de un triangulo dado
#include"estructuras.h"
#include"perimetroTriangulo.h"
#include"distanciaEntre2Puntos.h"

double perimetroTriangulo(struct Triangulo triangulo){
	return distanciaEntre2Puntos(triangulo.trngA, triangulo.trngB) +
		distanciaEntre2Puntos(triangulo.trngA, triangulo.trngC) +
		distanciaEntre2Puntos(triangulo.trngB, triangulo.trngC);
}