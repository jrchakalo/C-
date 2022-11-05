#ifndef CIRCULO_H
#define CIRCULO_H

#include "FiguraGeometrica.h"

class Circulo : public FiguraGeometrica
{
	public:
		Circulo();
		
		void leiaAtributos(float m);
		float areaTotal();
		std::string getNome();
		
	protected:
};

#endif
