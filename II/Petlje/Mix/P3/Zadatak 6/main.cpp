#include <iostream>
using namespace std;

double m, n, cijena;
int uk = 0;

int main(int argc, char** argv) {
	
	p:cout << "Unesite novac kojim raspolaze kupac: ";
	cin >> m;
	
	if (m < 0){
		cout << "Ne mozete kupiti nista sa negativnom kolicinom novca :(" << endl;
		goto p;
	}
	
	pp: cout << "Unesite broj artikala: ";
	cin >> n;
	
	if (n <= 0){
		cout << "Neispravan broj artikala." << endl;
		goto pp;
	}
	
	cout << "Unesite cijene artikala: ";
	for (int i = 0; i < n; i++){
		ppp: cin >> cijena;
		if (cijena <= 0){
			cout << "Neispravna cijena." << endl;
			goto ppp;
		}
		if (cijena <= m){
			uk++;
		} 
	}
	
	cout << uk << " artikla imaju manju ili jednaku cijenu od " << m;
	
	return 0;
}
