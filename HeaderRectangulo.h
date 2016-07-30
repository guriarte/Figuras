#ifndef _RECTANGULOH_
#define _RECTANGULOH_

#include "HeaderPunto.h"

struct Rectangulo {
    struct Punto verticeIzquierdoSuperior;
    struct Punto verticeDerechoInferior;
};

Rectangulo nuevoRectangulo();
double calcularLadoHorizontalRectangulo(Rectangulo );
double calcularLadoVerticalRectangulo(Rectangulo );
double areaRectangulo(Rectangulo );
double perimetroRectangulo(Rectangulo );
void imprimirAreaRectangulo(double );
void imprimirPerimetroRectangulo(double );

#endif
