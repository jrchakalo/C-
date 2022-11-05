#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H
#include "Trabalhador.h"

class TrabalhadorAssalariado : public Trabalhador
{
	public:
		TrabalhadorAssalariado();
		TrabalhadorAssalariado(std::string n, float s);
		float calcularPagamentoSemanal();
		
		float getSal();
		
	protected:
		
};

#endif
