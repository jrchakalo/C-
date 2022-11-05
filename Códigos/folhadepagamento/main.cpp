#include "SistemaGerenciaFolha.h"
#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"
#include "FuncionarioNaoExisteException.h"
#include "OrcamentoEstouradoException.h"
#include <iostream>
#include <string>
 
using namespace std;

int main(void) {
	double orcMax;
	SistemaGerenciaFolha sis;
	Funcionario *func;
	string nome;
	int m;
	double sal, hr, p;
	
	cin >> orcMax;
	getchar();
	
	sis = SistemaGerenciaFolha(orcMax);
		
	for(int i=0; i < 3; i++){
		getline(cin, nome);
		cin >> m;
		cin >> sal;
		getchar();
		
		if (i == 0){
			func = new Assalariado(nome, m, sal);
		}else if (i == 1){
			cin >> hr;
			getchar();
			func = new Horista(nome, m, sal, hr);
		}else if(i == 2){
			cin >> p;
			getchar();
			func = new Comissionado(nome, m, sal, p);
		}
		
		sis.setFuncionarios(func);
	}
	
	for (int i=0; i < 3; i++){
		getline(cin, nome);
		
		try{
			cout << sis.consultaSalFunc(nome) << endl;
		}
		catch (FuncionarioNaoExisteException e){	
		}
	}
	
	try{
		cout << sis.calculaValTotFolha() << endl;
	}
	catch(OrcamentoEstouradoException e){	
	}
	
	
	return 0;
}
