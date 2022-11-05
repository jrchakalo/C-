#include <iostream>
#include <string>
#include "Funcionario.h"
#include "Consultor.h"

using namespace std;

int main() {
	int m;
	string n;
	float s;
	Funcionario func;
	Consultor cons;
	
	cin >> m;
	getchar();
	getline(cin, n);
	cin >> s;
	
	func.setMatri(m);
	func.setNom(n);
	func.setSal(s);
	
	cin >> m;
	getchar();
	getline(cin, n);
	cin >> s;
	
	cons.setMatri(m);
	cons.setNom(n);
	cons.setSal(s);
	
	cout << func.getMatri() << " - " << func.getNom() << " - R$ " << func.getSal() << endl;
	cout << cons.getMatri() << " - " << cons.getNom() << " - R$ " << cons.getSal() << endl;
	
	return 0;
}
