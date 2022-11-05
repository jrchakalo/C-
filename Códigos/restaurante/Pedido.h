#ifndef PEDIDO_H
#define PEDIDO_H
#include <string>

class Pedido
{
	public:
		Pedido();
		Pedido(int num, std::string desc, int quant, float pr);
		
		int getNum();
		std::string getDesc();
		int getQuant();
		float getPreco();
		
		void setQuant(int quant);
		
		float getTotal();
	private:
		int numero;
		std::string descricao;
		int quantidade;
		float preco;
};

#endif
