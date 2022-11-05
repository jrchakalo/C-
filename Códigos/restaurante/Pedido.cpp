#include "Pedido.h"

Pedido::Pedido(){
	quantidade = 0;
	numero = 0;
	preco = 0;
}

Pedido::Pedido(int num, std::string desc, int quant, float pr){
	numero = num;
	descricao = desc;
	quantidade = quant;
	preco = pr;
}

void Pedido::setQuant(int quant){
	quantidade = quant;
}

int Pedido::getNum(){
	return numero;
}
std::string Pedido::getDesc(){
	return descricao;
}
int Pedido::getQuant(){
	return quantidade;
}
float Pedido::getPreco(){
	return preco;
}

float Pedido::getTotal(){
	return preco*quantidade;
}
