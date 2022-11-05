#include "Retangulo.h"

Retangulo::Retangulo(){
}

Retangulo::Retangulo(int t)
: FiguraGeometrica(t)
{
	nome = "Retângulo";
}

void Retangulo::lerAtributosArea(){
	std::cin >> lado;
	std::cin >> altura;
} 

float Retangulo::calcularArea(){
	return lado*altura;
}

