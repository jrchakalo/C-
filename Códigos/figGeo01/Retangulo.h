#ifndef RETANGULO_H
#define RETANGULO_H
#include <string>
#include "FiguraGeometrica.h"

class Retangulo : public FiguraGeometrica
{
	public:
		Retangulo();
		
		void leiaAtributos(float m, float m2);
		float areaTotal();
		std::string getNome();
		
	protected:
		float medida2;
};

#endif
