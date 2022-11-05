#include <iostream>
#include "Data.h"

using namespace std;

int main() {
	int d, m, a, quant, i;
	 
	cin >> d;
	cin >> m;
	cin >> a;
	
	Data dt(d, m, a);
		
	cin >> quant;
	
	for(i=1; i<=quant; i++){
		dt.avancaDia();
	}
	if (dt.getDia() < 10 && dt.getMes() < 10){
		cout << "0" << dt.getDia() << "/" << "0" << dt.getMes() << "/" << dt.getAno() << endl;
	}else if (dt.getDia() < 10){
		cout << "0" << dt.getDia() << "/" << dt.getMes() << "/" << dt.getAno() << endl;
	}else if (dt.getMes() < 10){
		cout << dt.getDia() << "/" << "0" << dt.getMes() << "/" << dt.getAno() << endl;
	}
	
	return 0;
}
