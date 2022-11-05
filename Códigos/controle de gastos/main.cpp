#include <iostream>
#include <string>
#include "Despesa.h"
#include "ControleDeGastos.h"

using namespace std;

int main() {
	int quant, i;
	string n, t, tipo;
	float v;
	ControleDeGastos controle;
	
	cin >> quant;
	getchar();
	
	Despesa d[quant];
	
	for(i=0; i<quant; i++){
		getline(cin , n);
		d[i].setNome(n);
		cin >> v;
		d[i].setValor(v);
		getchar();
		getline(cin , t);
		d[i].setTipo(t);
		
		controle.setDespesa(d[i], i);
	}
	
	cin >> tipo;
	
	if(controle.existeDespesa(tipo) == true){
		for(i=0; i < quant; i++){
			if(tipo == controle.getDespesa(i).getTipo()){
				cout << controle.getDespesa(i).getNome() << ", R$ " << controle.getDespesa(i).getValor() << endl;
			}
		}	
	}else{
			cout << "Nenhuma despesa do tipo especificado" << endl;
	}
	
	cout << "Total: " << controle.calculaTotalDeDespesas(tipo) << "/" << controle.totalDeDespesas() << endl;
	
	return 0;
}
