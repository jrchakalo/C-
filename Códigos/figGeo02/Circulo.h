#ifndef CIRCULO_H
#define CIRCULO_H
#include <string>
#include "FiguraGeometrica.h"

class Circulo : public FiguraGeometrica
{
	public:
		Circulo();
		Circulo(int t);
		
		void lerAtributosArea(); 
		float calcularArea();
		
	private:
		float lado;
};

#endif
