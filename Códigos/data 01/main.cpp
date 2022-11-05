#include <iostream>
#include "Data.h"

using namespace std;

int main() {
	Data dt;
	 
	cin >> dt.dia;
	cin >> dt.mes;
	cin >> dt.ano;
	
	cout << dt.dia << "/" << dt.mes << "/" << dt.ano << endl;
	
	return 0;
}
