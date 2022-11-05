#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <string>
#include <iostream>

class FiguraGeometrica
{
	public:
		FiguraGeometrica();
		FiguraGeometrica(int t);
		
		virtual void lerAtributosArea();
		virtual float calcularArea();
		std::string getNome();
		
	protected:
		std::string nome;
		int tipo;
};

#endif
