#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H
#include <vector>
#include "funcionario.h"
#include "FuncionarioNaoExisteException.h"
#include "OrcamentoEstouradoException.h"

class SistemaGerenciaFolha
{
	public:
		SistemaGerenciaFolha();
		SistemaGerenciaFolha(double orcMax);
		
		void setFuncionarios(Funcionario *func);
		double calculaValTotFolha();
		double consultaSalFunc(std::string n);
		
	private:
		std::vector<Funcionario*> funcionarios;
		double orcamentoMax;
};

#endif
