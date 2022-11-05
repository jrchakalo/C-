#include "FuncionarioNaoExisteException.h"

FuncionarioNaoExisteException::FuncionarioNaoExisteException(){
}

FuncionarioNaoExisteException::FuncionarioNaoExisteException(std::string n){
	std::cout << "FuncionarioNaoExisteException " << n << std::endl;
}
