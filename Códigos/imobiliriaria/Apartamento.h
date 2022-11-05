#ifndef APARTAMENTO_H
#define APARTAMENTO_H
#include "Imovel.h"

class Apartamento : public Imovel
{
	public:
		Apartamento();
		Apartamento(int t);
		
		void setArea(float ar);
		void setNumq(int numq);
		void setAndar(int ard);
		void setCond(float cnd);
		void setNumVag(int nvag);
		
		float getArea();
		int getNumq();
		int getArd();
		float getCond();
		int getNumVag();
		
		void lerAtributos(float p, std::string alovd, float ar, int numq, int ard, float cnd, int nvag);
		void exibeAtributos();
		
	protected:
		float area;
		int numquart;
		int andar;
		float cond;
		int numvag;
};

#endif
