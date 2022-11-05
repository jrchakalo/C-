#include "Invoice.h"
#include <iostream>

using namespace std;

Invoice::Invoice(){	
}

Invoice::Invoice(int n, std::string d, int q, float p){
	num = n;
	desc = d;
	setQuant(q);
	setPreco(p);
}

float Invoice::faturaTotal(){
	float total;
	
	total = quant * preco;
	
	return total;
}

int Invoice::getNum(){
	return num;
}
std::string Invoice::getDesc(){
	return desc;
}

int Invoice::getQuant(){
	return quant;
}

float Invoice::getPreco(){
	return preco;
}

void Invoice::setNum(int n){
	num = n;
}

void Invoice::setDesc(std::string d){
	desc = d;
}

void Invoice::setQuant(int q){
	if (q >= 0){
		quant = q;
	}else{
		quant = 0;
	}
}

void Invoice::setPreco(float p){
	if(p >= 0){
		preco = p;
	}else{
		preco = 0;
	}
}

void Invoice::print(){
	cout << num << " - " << desc << " - " << quant << " - " << preco << " - " << faturaTotal() << endl;
}
