#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <string>

class FiguraGeometrica
{
	public:
		FiguraGeometrica();
		FiguraGeometrica(int t);
		
		float calculaArea();
		void lerAtributosArea();
		std::string getNome();
		 
	protected:
		int tipo;
		float medida;
};

#endif
