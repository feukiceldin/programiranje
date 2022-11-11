#include <iostream>

using namespace std;

int broj1, broj2;

int main(int argc, char** argv) {
	
	cout << "Unesite prvi broj: ";
	cin >> broj1;
	
	cout << "Unesite drugi broj: ";
	cin >> broj2;
	
	if (broj1 == broj2){
		cout << "Brojevi su jednaki.";
	} else if (broj1 > broj2){
		cout << "Veci broj je (" << broj1 << ")";
	} else {
		cout << "Veci broj je (" << broj2 << ")";
	}
	
	return 0;
}
