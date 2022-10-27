#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

double cijena, kolicina, iznos;

int main(int argc, char** argv) {
	
	cout << "Unesite cijenu artikla: ";
	cin >> cijena;
	
	cout << "Unesite kolicinu artikla: ";
	cin >> kolicina;
	
	cout << "Iznos koji kupac daje je: ";
	cin >> iznos;
	
	cout << "Kusur iznosi: " << iznos-(cijena*kolicina) << "KM";
	
	return 0;
}
