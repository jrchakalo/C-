#include "Trabalhador.h"
#include "TrabalhadorAssalariado.h"
#include "TrabalhadorPorHora.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
	int i, x, hr, tipo;
	float s;
	string n;
	TrabalhadorAssalariado trabA;
	TrabalhadorPorHora trabB;
	
	cin >> x;
	
	for(i=0; i<x; i++){
		cin >> tipo;
		getchar();
		
		switch(tipo){
			case 1:
				getline(cin, n);
				cin >> s;
				trabA = TrabalhadorAssalariado(n, s);
				cout << trabA.getNom() << " - Semanal: R$ " << trabA.calcularPagamentoSemanal() << " - Mensal: R$ " << trabA.getSal() << endl;
				break;
			case 2:
				getline(cin, n);
				cin >> s;
				cin >> hr;
				trabB = TrabalhadorPorHora(n, s);
				cout << trabB.getNom() << " - Semanal: R$ " << trabB.calcularPagamentoSemanal(hr) << " - Mensal: R$ " << trabB.calcularPagamentoSemanal(hr)*4 << endl;
				break;
		}
	}
	
	
	return 0;
}
