#include <iostream>
using namespace std;

int m, n, d;

int main(int argc, char** argv) {

	n: cout << "Unesite pocetni broj raspona: ";
	cin >> m;
	
	cout << "Unesite zavrsni broj raspona: ";
	cin >> n;
	
	p: cout << "Unesite broj za provjeru djeljivosti: ";
	cin >> d;
	
	if (d == 0){
		cout << "NEMA DIJELJENJA S NULOM!!!" << endl;
		goto p;
	}
	
	if (m > n){
		cout << "Pocetni raspon mora biti manji od zavrsnog!" << endl;
		goto n;
	}
	
	cout << "Ispis brojeva djeljivih sa " << d << " od " << m << " do " << n << ":" << endl;
	for (int i = m; i <= n; i++){
		if (i % d == 0){
			cout << i << " ";
		}
	}

	return 0;
}
