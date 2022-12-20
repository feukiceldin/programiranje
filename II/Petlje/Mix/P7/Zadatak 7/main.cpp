#include <iostream>
using namespace std;

double broj, sum, uk, poz, neg;

int main(int argc, char** argv) {
	
	cout << "Unesite brojeve: ";
	
	do {
		cin >> broj;
		sum += broj;
		if (broj > 0){
			poz++;
		} else if (broj < 0){
			neg++;
		} else {
			break;
		} uk++;
	} while (broj != 0);
	
	cout << "Ukupno ima " << uk << " brojeva" << endl;
	cout << "Medju ucitanim brojevima je " << poz << " pozitivnih i " << neg << " negativnih." << endl;
	cout << "Aritmeticka sredina je: " << sum/uk;
	
	return 0;
}
