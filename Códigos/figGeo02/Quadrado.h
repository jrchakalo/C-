#ifndef QUADRADO_H
#define QUADRADO_H
#include <string>
#include "FiguraGeometrica.h"

class Quadrado : public FiguraGeometrica
{
	public:
		Quadrado();
		Quadrado(int t);
		
		void lerAtributosArea(); 
		float calcularArea();
		
	private:
		float lado;	
};

#endif
