#ifndef INVOICE_H
#define INVOICE_H
#include <string>

class Invoice
{
	public:
		Invoice();
		Invoice(int n, std::string d, int q, float p);
		
		float faturaTotal();
		int getNum();
		std::string getDesc();
		int getQuant();
		float getPreco();
		
		void setNum(int n);
		void setDesc(std::string d);
		void setQuant(int q);
		void setPreco(float p);
		
		void print();
	private:
		int num;
		std::string desc;
		int quant;
		float preco;	
};

#endif
