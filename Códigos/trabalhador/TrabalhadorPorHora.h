#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H
#include "Trabalhador.h"

class TrabalhadorPorHora : public Trabalhador
{
	public:
		TrabalhadorPorHora();
		TrabalhadorPorHora(std::string n, float s);
		
		float calcularPagamentoSemanal(int horasSemanais);
		
	protected:
		float valorDaHora;
};

#endif
