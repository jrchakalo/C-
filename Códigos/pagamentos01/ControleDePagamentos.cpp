#include "ControleDePagamentos.h"
#include "Pagamento.h"
#include <iostream>

ControleDePagamentos::ControleDePagamentos(){
	int i;
	
	for(i=0; i<100; i++){
		pagamentos[i].setValorPag(0);
	}
}

void ControleDePagamentos::setPag(Pagamento p, int i){
	pagamentos[i] = p;
}
Pagamento ControleDePagamentos::getPag(int pos){
	return pagamentos[pos];
}
float ControleDePagamentos::calculaTotalPag(){
	float soma=0;
	int i;
	
	for(i=0; i<100; i++){
		soma += pagamentos[i].getValorPag();
	}
	
	return soma;
}
int ControleDePagamentos::getFuncIndex(std::string nomf){
	int i, obj;
			
	for(i=0; i<100; i++){
		obj = pagamentos[i].getNomeFunc().find(nomf);
		if(obj != -1){
			return i;	
		}		
	}
	
	return -1;
}
