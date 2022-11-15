#include <iostream>
using namespace std;

int odabir;

int main(int argc, char** argv) {
	
	p: cout << "Unesi sifru konobara:" << endl;
	cout << "\t1 - Melisa" << endl;	
	cout << "\t2 - Sladjana" << endl;
	cout << "\t3 - Hasan" << endl;
	cout << "\t4 - Azra" << endl;
	cin >> odabir;
	
	switch (odabir){
		case 1:
			cout << "Ime: Melisa" << endl;
			cout << "Prezime: Zahirovic" << endl;
			cout << "Adresa: Lukavac" << endl;
			break;
			
		case 2:
			cout << "Ime: Sladjana" << endl;
			cout << "Prezime: Pejic" << endl;
			cout << "Adresa: Lukavac" << endl;
			break;
			
		case 3:
			cout << "Ime: Hasan" << endl;
			cout << "Prezime: Halilcevic" << endl;
			cout << "Adresa: Dubrave" << endl;
			break;
			
		case 4:
			cout << "Ime: Azra" << endl;
			cout << "Prezime: Becirovic" << endl;
			cout << "Adresa: USA" << endl;
			break;
			
		default:
			cout << "Ne postoji konobar pod tom sifrom." << endl;
			goto p;
	}
	
	return 0;
}
