#include <iostream>
using namespace std;

int n, broj, cd, cdMax, brojMax;
int i = 1;

int main(int argc, char** argv) {
	
	p: cout << "Unesite n: ";
	cin >> n;
	
	if (n <= 0){
		cout << "Neispravan unos." << endl;
		goto p;
	}
	
	do {
		cin >> broj;
		cd = (broj/10)%10;
		
		if (cd > cdMax){
			if (!(cd == cdMax)){
				cdMax = cd;
				brojMax = broj;
			} 						
		} i++;
	} while (i <= n);
		
	cout << "Broj sa najvecom cifrom desetice je: " << brojMax;
		
	return 0;
}
