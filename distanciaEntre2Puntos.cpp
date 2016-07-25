//calcula la distancia geometrica de dos puntos en el plano
#include"distanciaEntre2Puntos.h"
#include"estructuras.h"
#include<math.h>

double distanciaEntre2Puntos(struct Punto puntoA, struct Punto puntoB){
  return
	sqrt(
	     pow(puntoA.x - puntoB.x , 2) +
	     pow(puntoA.y - puntoB.y , 2)
	    );
}