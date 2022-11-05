#ifndef TERRENO_H
#define TERRENO_H
#include "Imovel.h"

class Terreno : public Imovel
{
	public:
		Terreno();
		Terreno(int t);
		
		void setArea(float ar);
		float getArea();
		
		void lerAtributos(float p, std::string alovd, float ar);
		void exibeAtributos();
		
	protected:
		float area;
};

#endif
