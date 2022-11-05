#ifndef RESTAURANTE_H
#define RESTAURANTE_H
#include "Pedido.h"
#include "MesaDeRestaurante.h"

class Restaurante
{
	public:
		Restaurante();
		
		void adicionarPedido(Pedido p, int mesa);
		float calculaTotalRestaurante();
		MesaDeRestaurante getMesa(int mesa);
		
	private:
		MesaDeRestaurante mesas[10];
};

#endif
