#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include "Pedido.h"


class MesaDeRestaurante
{
	public:
		MesaDeRestaurante();
		
		void adicionarPedido(Pedido p);
		void zeraPedidos();
		float calculaTotal();
		void exibeConta();	
	private:
		Pedido pedidos[100];
};

#endif
