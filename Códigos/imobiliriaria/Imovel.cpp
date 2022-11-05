#include "Imovel.h"

Imovel::Imovel(){
}

Imovel::Imovel(int t){	
	tipo = t;
}

void Imovel::exibeAtributos(){
}
void Imovel::lerAtributos(){
}
		
void Imovel::setNom(std::string n){
	nome = n;
}
void Imovel::setPr(float p){
	preco = p;
}
void Imovel::setAl(std::string alovd){
	alugouvend = alovd;
}
		
std::string Imovel::getNom(){
	return nome;
}
float Imovel::getPr(){
	return preco;
}
std::string Imovel::getAl(){
	return alugouvend;
}
