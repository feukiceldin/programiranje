#include <iostream>
using namespace std;

int broj, cj;

int main(int argc, char** argv) {
	
	p: cout << "Unesite broj: ";
	cin >> broj;
	
	if (broj <= 0){
		cout << "Neispravan unos." << endl;
		goto p;
	}
	
	while (cj == 0){
		cj = broj % 10;
		if (cj == 0){
			broj /= 10;
		} else {
			break;
		}
	}
	
	cout << "Novodobijeni broj je: " << broj;
	
	return 0;
}
