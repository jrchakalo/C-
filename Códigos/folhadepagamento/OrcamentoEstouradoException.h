#ifndef ORCAMENTOESTOURADOEXCEPTION_H
#define ORCAMENTOESTOURADOEXCEPTION_H
#include <exception>
#include <iostream>

class OrcamentoEstouradoException : public std::exception
{
	public:
		OrcamentoEstouradoException();
		OrcamentoEstouradoException(double tot);
		
	protected:
};

#endif
