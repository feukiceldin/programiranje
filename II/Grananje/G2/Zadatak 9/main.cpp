#include <iostream>
using namespace std;

int broj, ch, cs, cd, cj;
int p = 1;

int main(int argc, char** argv) {
	
	cout << "Unesite cetverocifreni broj: ";
	cin >> broj;
	
	if (broj > 9999 || broj < 1000){
		cout << "Broj mora biti cetverocifren, pokusajte ponovo." << endl;
		cout << "Unesite cetverocifreni broj: ";
		cin >> broj;
	}
	
	
	ch = broj/1000;
	cs = (broj/100)%10;
	cd = (broj/10)%10;
	cj = broj%10;
	
	if (ch % 2 == 0){
		p *= ch;
	}
	
	if (cs % 2 == 0){
		p *= cs;
	}
	
	if (cd % 2 == 0){
		p *= cd;
	}
	
	if (cj % 2 == 0){
		p *= cj;
	}

	if (p == 1){
		cout << "Broj nema parnih cifara.";
	} else {
		cout << "Proizvod parnih cifara je " << p;
	}
	
	return 0;
}
