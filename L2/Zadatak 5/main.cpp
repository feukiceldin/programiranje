#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

double d, s, v, cijena, ukupno;

int main(int argc, char** argv) {

	cout << "Unesite dimenzije sobe: ";
	cin >> d >> s >> v;

	cout << "Unesite cijenu po m2: ";
	cin >> cijena;
	
	ukupno = ((d*s) + 2*(s*v)+ 2*(d*v) )*0.8;
	
	cout << "Moler treba da okreci " << ukupno << " m2." << endl;
	
	cout << "Cijena krecenja je " << ukupno * cijena;

	return 0;
}
