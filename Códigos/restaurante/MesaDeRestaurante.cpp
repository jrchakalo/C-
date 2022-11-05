#include "MesaDeRestaurante.h"
#include "Pedido.h"
#include <iostream>

MesaDeRestaurante::MesaDeRestaurante(){
}

void MesaDeRestaurante::adicionarPedido(Pedido p){
	int i;
	
	for(i=0; i<100; i++){
		if(pedidos[i].getNum() == p.getNum()){
			pedidos[i].setQuant(pedidos[i].getQuant() + p.getQuant());
			break;
		}else{
			if(pedidos[i].getNum() == 0){
				pedidos[i] = Pedido(p.getNum(), p.getDesc(), p.getQuant(), p.getPreco());
				break;	
			}
		}			
	}		
}

void MesaDeRestaurante::zeraPedidos(){
	int i;
	
	for(i=0; i<100; i++){
		pedidos[i].setQuant(0);
	}
}

float MesaDeRestaurante::calculaTotal(){
	int i;
	float total=0;
	
	for(i=0; i<100; i++){
		total += pedidos[i].getTotal();
	}
	
	return total;
}

void MesaDeRestaurante::exibeConta(){
	int i=0;
	
	for(i=0; i<100; i++){
		if(pedidos[i].getNum() != 0){
			std::cout << pedidos[i].getNum() << " - " << pedidos[i].getDesc() << " - " << pedidos[i].getQuant() << " - " << pedidos[i].getPreco() << " - R$ " << pedidos[i].getTotal() << std::endl;
		}
	}
}
