#ifndef FUNCIONARIONAOEXISTEEXCEPTION_H
#define FUNCIONARIONAOEXISTEEXCEPTION_H
#include <exception>
#include <iostream>

class FuncionarioNaoExisteException : public std::exception
{
	public:
		FuncionarioNaoExisteException();
		FuncionarioNaoExisteException(std::string n);
		
	protected:
};

#endif
