#include <iostream>
using namespace std;

int broj1, broj2; 

int main(int argc, char** argv) {

	cout << "Unesite dva cijela broja: ";
	cin >> broj1 >> broj2;
	
	if (broj1 < broj2){
		cout << "Manji broj je " << broj1;
	}

	if (broj2 < broj1){
		cout << "Manji broj je " << broj2 << ".";
	}

	return 0;
}
