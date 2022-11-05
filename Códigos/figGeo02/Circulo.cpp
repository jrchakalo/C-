#include "Circulo.h"

Circulo::Circulo(){
}

Circulo::Circulo(int t)
: FiguraGeometrica(t)
{
	nome = "C�rculo";
}

void Circulo::lerAtributosArea(){
	std::cin >> lado;
} 

float Circulo::calcularArea(){
	return 3.14*(lado*lado);
}
