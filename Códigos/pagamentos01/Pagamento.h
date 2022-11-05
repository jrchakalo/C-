#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <string>

class Pagamento
{
	public:
		Pagamento();
		
		void setValorPag(float vp);
		void setNomeFunc(std::string nomf);
		float getValorPag();
		std::string getNomeFunc();
		
	private:
		float valorPag;
		std::string nomeFunc;
};

#endif
