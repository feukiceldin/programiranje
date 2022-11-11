#include <iostream>

using namespace std;

int broj1, broj2;
char opera;

int main(int argc, char** argv) {
	
	cout << "Unesite prvi broj: ";
	cin >> broj1;
	
	cout << "Unesite drugi broj: ";
	cin >> broj2;
	
	cout << "Unesite operator: ";
	cin >> opera;
	
	if (opera == '+'){
		cout << "Zbir brojeva je " << broj1 + broj2;
	} else if (opera == '-'){
		cout << "Razlika brojeva je " << broj1 - broj2;
	} else if (opera == '*'){
		cout << "Proizvod brojeva je " << broj1 * broj2;
	} else if (opera == '/'){
		if (broj2 == 0){
			cout << "NEMA DIJELJENJA S NULOM!!!";
		} else {
			cout << "Kolicnik brojeva je " << broj1 / broj2;
		}
	} else {
		cout << "Nepoznat operator.";
	}
	
	return 0;
}
