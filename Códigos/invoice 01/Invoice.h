#ifndef INVOICE_H
#define INVOICE_H
#include <string>

class Invoice
{
	public:
		Invoice();
		int num;
		std::string desc;
		int quant;
		float preco;
		
		float faturaTotal();
};

#endif
