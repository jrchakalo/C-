#include "Triangulo.h"

Triangulo::Triangulo(){
}

Triangulo::Triangulo(int t)
: FiguraGeometrica(t)
{
	nome = "Triângulo";
}

void Triangulo::lerAtributosArea(){
	std::cin >> lado;
	std::cin >> altura;
} 

float Triangulo::calcularArea(){
	return (lado*altura)/2;
}

