#include <iostream>
#include "Data.h"

using namespace std;

int main() {
	Data dt;
	int d, m, a;
	 
	cin >> d;
	cin >> m;
	cin >> a;
	
	dt.setDia(d);
	dt.setMes(m);
	dt.setAno(a);
	
	dt.printData(dt.getDia(), dt.getMes(), dt.getAno());
	
	return 0;
}

