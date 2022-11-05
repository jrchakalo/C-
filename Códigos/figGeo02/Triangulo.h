#ifndef TRIANGULO_H
#define TRIANGULO_H
#include <string>
#include "FiguraGeometrica.h"

class Triangulo : public FiguraGeometrica
{
	public:
		Triangulo();
		Triangulo(int t);
		
		void lerAtributosArea();
		float calcularArea();
		
	private:
		float lado;
		float altura;
};

#endif
