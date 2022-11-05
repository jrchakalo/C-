#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H
#include "Despesa.h"
#include <string>

class ControleDeGastos
{
	public:
		ControleDeGastos();
		void setDespesa(Despesa d, int pos);
		Despesa getDespesa(int pos);
		float totalDeDespesas();
		float calculaTotalDeDespesas(std::string tipo);
		bool existeDespesa(std::string tipo);	
	private:
		Despesa despesas[100];
};

#endif
