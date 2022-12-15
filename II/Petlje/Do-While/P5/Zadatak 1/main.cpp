#include <iostream>
using namespace std;

double broj, uk;
double sum = 0;

int main(int argc, char** argv) {

	cout << "Nakon posljednjeg broje unesite nulu." << endl;
	
	do {
		cout << "Unesite broj: ";
		cin >> broj;
		
		sum+=broj;
		uk++;
	} while (broj != 0);
	uk=--uk;
	cout << "Uneseno je " << uk << " brojeva. Srednja vrijednost je " << sum/uk;

	return 0;
}
