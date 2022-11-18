#include <iostream>
using namespace std;

double popust, prosjek;
int skolarina, odabir;

int main(int argc, char** argv) {
	
	cout << "Unesite visinu skolarine: ";
	cin >> skolarina;
	
	p: cout << "Unesite prosjek: ";
	cin >> prosjek;
	
	if(prosjek<=5 && prosjek>=4.5){
		popust = 0.4;
	} else if(prosjek<4.5 && prosjek>=3.5){
		popust = 0.2;
	} else if(prosjek<=3.5 && prosjek>=2.5){
		popust = 0.1;
	} else if(prosjek < 2.5 && prosjek > 0){
	} else {
		cout << "Neispravan unos. Ponovni unos!" << endl;
		goto p;
	}
	
	n: cout << "Ako ima nagrada unesite 1, inace unesite 0: ";
	cin >> odabir;
	
	if (odabir != 0 && odabir != 1){
		cout << "Neispravan unos. Ponovni unos!" << endl;
		goto n;
	} else if (odabir == 0){
		
	} else {
		if (!(popust > 0.3)){
			popust = 0.3;
		}
	}
	
	cout << "Ucenik treba platiti: " << skolarina*(1-popust);
	
	return 0;
}
