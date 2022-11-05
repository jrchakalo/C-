#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std;

int main() {
	int n, q;
	string d;
	float p;
	
	Invoice fat1, fat2;
	
	cin >> n;
	getchar();
	getline(cin, d);
	cin >> q;
	cin >> p;
	fat1 = Invoice(n, d, q, p);

	cin >> n;
	getchar();
	getline(cin, d);
	cin >> q;
	cin >> p;
	fat2 = Invoice(n, d, q, p);
	
	fat1.print();
	fat2.print();
	
	return 0;
}
