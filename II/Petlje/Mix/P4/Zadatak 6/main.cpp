#include <iostream>
using namespace std;

int broj;

int main(int argc, char** argv) {
	
	p: cout << "Unesite pozitivan cijeli broj: ";
	cin >> broj;
	
	if (broj <= 0){
		cout << "Neispravan unos." << endl;
		goto p;
	}
	
	while (broj != 0){
		if (broj % 10 == 5){
			cout << "Cifra 5 se nalazi u unesenom broju.";
			goto kraj;
		} broj /= 10;
	}
	
	cout << "Cifra 5 se ne nalazi u unesenom broju.";
	kraj:
	
	return 0;
}
