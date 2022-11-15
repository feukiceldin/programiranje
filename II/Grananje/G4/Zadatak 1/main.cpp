#include <iostream>
using namespace std;

float r1, r2, r; 
int odabir;

int main(int argc, char** argv) {
	
	pp: cout << "Unesite vrijednost otpora R1: ";
	cin >> r1;
	
	cout << "Unesite vrijednost otpora R2: ";
	cin >> r2;
	
	if (r1 < 0 || r2 < 0){
		cout << "Otpor ne moze biti negativan. Ponovni unos!" << endl;
		goto pp;
	}
	
	p: cout << "Odaberite jednu od opcija:" << endl;
	cout << "1. Serijska veza" << endl << "2. Paralelna veza" << endl;
	cin >> odabir;
	
	switch (odabir){
		case 1:
			r = r1 + r2;
			cout << "Ako se otpori " << r1 << " oma i " << r2 << " oma spoje u ";
			cout << "seriju ukupni otpor je " << r << " oma";
			break;
			
		case 2:
			r = (r1 * r2)/(r1 + r2);
			cout << "Ako se otpori " << r1 << " oma i " << r2 << " oma spoje u ";
			cout << "paralelu ukupni otpor je " << r << " oma";
			break;
		
		default:
			cout << "Pogresan unos. Ponovni unos!" << endl;
			goto p;
			break;
	}
	
	return 0;
}
