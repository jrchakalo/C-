#include "Invoice.h"

Invoice::Invoice(){
	
}

float Invoice::faturaTotal(int quant, float preco){
	float total;
	
	total = quant * preco;
	
	return total;
	
}
