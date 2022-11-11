#include <iostream>
#include <cmath>

using namespace std;

int broj1, broj2;

int main(int argc, char** argv) {
	
	P: cout << "Unesite prvi broj: ";
	cin >> broj1;
	
	cout << "Unesite drugi broj: ";
	cin >> broj2;
	
	if (broj1 < 0 || broj2 < 0){
		cout << "KORIJEN NEGATIVNOG BROJA NE PRIPADA REALNOM SKUPU BROJEVA!!!" << endl;
		goto P;
	}
	
	if (sqrt(broj2) == broj1){
		cout << broj1 << " je korijen broja " << broj2 << ".";
	} else {
		cout << broj1 << " nije korijen broja " << broj2 << ".";
	}
	
	return 0;
}
