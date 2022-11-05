#include "Pagamento.h"

Pagamento::Pagamento(){
	valorPag = 0.0;
}

void Pagamento::setValorPag(float vp){
	valorPag = vp;
}
void Pagamento::setNomeFunc(std::string nomf){
	nomeFunc = nomf;
}
float Pagamento::getValorPag(){
	return valorPag;
}
std::string Pagamento::getNomeFunc(){
	return nomeFunc;
}
