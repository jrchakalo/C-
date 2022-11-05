#ifndef TRIANGULO_H
#define TRIANGULO_H
#include <string>
#include "FiguraGeometrica.h"

class Triangulo : public FiguraGeometrica
{
	public:
		Triangulo();
		
		void leiaAtributos(float m, float m2);
		float areaTotal();
		std::string getNome();
		
	protected:
		float medida2;
};

#endif
