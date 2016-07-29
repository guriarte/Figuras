#include "HeaderCirculo.h"
#include <iostream>
#include <math.h>

Circulo nuevoCirculo(){
    struct Circulo nuevo;

    std::cout << "Ingrese el radio del circulo: " << std::endl;
    std::cin >> nuevo.radio;

    return nuevo;
}

double areaCirculo(Circulo circulo) {
    return (M_PI)*pow(circulo.radio, 2);
}

double perimetroCirculo(Circulo circulo) {
    return 2*M_PI*circulo.radio;
}
