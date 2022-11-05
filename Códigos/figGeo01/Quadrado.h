#ifndef QUADRADO_H
#define QUADRADO_H
#include <string>
#include "FiguraGeometrica.h"

class Quadrado : public FiguraGeometrica
{
	public:
		Quadrado();
		
		void leiaAtributos(float m);
		float areaTotal();
		std::string getNome();
		
	protected:
};

#endif
