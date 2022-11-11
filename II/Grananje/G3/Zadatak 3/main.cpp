#include <iostream>
using namespace std;

int broj1, broj2, rez;

int main(int argc, char** argv) {
	
	P: cout << "Unesite dva razlicita cijela broja: ";
	cin >> broj1 >> broj2;

	if (broj1 == broj2){
		cout << "Niste ispostovali uslov. Ponovni unos." << endl;
		goto P;
	}

	if (broj1 % 2 == 0 && broj2 % 2 == 0){
		if (broj1 > broj2){
			rez = broj1/broj2;
		} else {
			rez = broj2/broj1;
		}
	} else if (broj1 % 2 != 0 && broj2 % 2 != 0){
		if (broj1 > broj2){
			rez = broj1 - broj2;
		} else {
			rez = broj2 - broj1;
		}
	} else {
		rez = broj1 + broj2;
	}

	cout << "Rezultat je: " << rez;

	return 0;
}
