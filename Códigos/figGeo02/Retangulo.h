#ifndef RETANGULO_H
#define RETANGULO_H

#include "FiguraGeometrica.h"

class Retangulo : public FiguraGeometrica
{
	public:
		Retangulo();
		Retangulo(int t);
		
		void lerAtributosArea();
		float calcularArea();
		
	private:
		float lado;
		float altura;
};

#endif
