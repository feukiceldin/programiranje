#include <iostream>
using namespace std;

float a, b;
char odabir;

int main(int argc, char** argv) {
	
	cout << "Unesite prvi broj: ";
	cin >> a;
	
	cout << "Unesite operaciju: ";
	cin >> odabir;
	
	cout << "Unesite drugi broj: ";
	cin >> b;
	
	switch (odabir){
		
		case '-':
			cout << a << " " << odabir << " " << b << " = " << a-b;
			break;
			
		case '+':
			cout << a << " " << odabir << " " << b << " = " << a+b;
			break;
			
		case '*':
			cout << a << " " << odabir << " " << b << " = " << a*b;
			break;
			
		case '/':
			if (b != 0){
				cout << a << " " << odabir << " " << b << " = " << a/b;
			} else {
				cout << "NEMA DIJELJENJA SA NULOM!!!";
			} break;
			
		default:
			cout << "Nepoznat operator.";
	}
	
	
	return 0;
}
