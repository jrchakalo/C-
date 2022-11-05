#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H
#include "Pagamento.h"

class ControleDePagamentos
{
	public:
		ControleDePagamentos();
		
		void setPag(Pagamento p, int i);
		Pagamento getPag(int pos);
		float calculaTotalPag();
		int getFuncIndex(std::string nomf);
		
	private:
		Pagamento pagamentos[100];
		
		Pagamento fuck;
};

#endif
