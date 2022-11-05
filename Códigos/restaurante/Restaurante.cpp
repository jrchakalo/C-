#include "Restaurante.h"
#include "Pedido.h"
#include "MesaDeRestaurante.h"

Restaurante::Restaurante(){
}

void Restaurante::adicionarPedido(Pedido p, int mesa){
	mesas[mesa].adicionarPedido(p);
}

float Restaurante::calculaTotalRestaurante(){
	int i;
	float total;
	
	for(i=0; i<10; i++){
		total += mesas[i].calculaTotal();
	}
	
	return total;	
}

MesaDeRestaurante Restaurante::getMesa(int mesa){
	return mesas[mesa];
}
