#include "Quadrado.h"


Quadrado::Quadrado(){
}

Quadrado::Quadrado(int t)
: FiguraGeometrica(t)
{
	nome = "Quadrado";
}

void Quadrado::lerAtributosArea(){
	std::cin >> lado;
} 

float Quadrado::calcularArea(){
	return lado*lado;
}

