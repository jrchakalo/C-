#include <iostream>
#include <string>
#include "Pagamento.h"
#include "ControleDePagamentos.h"

using namespace std;

int main(void) {
	int i, x, verif;
	float vp;
	string nomf;
	ControleDePagamentos cdp;
	
	cin >> x;
	Pagamento pag[x];
	
	for(i=0; i<x; i++){
		cin >> vp;
		getchar();
		getline(cin, nomf);
		
		pag[i].setValorPag(vp);
		pag[i].setNomeFunc(nomf);
		
		cdp.setPag(pag[i], i);
	}
	
	getline(cin, nomf);
	
	verif = cdp.getFuncIndex(nomf);
		
	if(verif != -1){
		cout << pag[verif].getNomeFunc() << ": R$ " << pag[verif].getValorPag() << endl;
		cout << "Total: R$ " << cdp.calculaTotalPag();	
	}else{
		cout << nomf << " não encontrado(a)." << endl;
		cout << "Total: R$ " << cdp.calculaTotalPag();
	}
	
	
	return 0;
}
