#ifndef CASA_H
#define CASA_H
#include "Imovel.h"

class Casa : public Imovel
{
	public:
		Casa();
		Casa(int t);
		
		void setPav(int pav);
		void setNumq(int numq);
		void setArea(float ar);
		void setAreaq(float arc);
		
		int getPav();
		int getNumq();
		float getArea();
		float getAreaq();
		
		void lerAtributos(float p, std::string alovd, int pav, int numq, float ar, float arc);
		void exibeAtributos();
		
	protected:
		int pavimento;
		int numquart;
		float area;
		float areac;
};

#endif
