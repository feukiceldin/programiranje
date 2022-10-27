#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

double pocetak, kraj, cijena, zaPlatiti;

int main(int argc, char** argv) {
	
	cout << "Unesite pocetno stanje plinskog brojila: ";
	cin >> pocetak;
	
	cout << "Unesite krajnje stanje plinskog brojila: ";
	cin >> kraj;
	
	cout << "Unesite cijenu kubnog metra plina: ";
	cin >> cijena;
	
	zaPlatiti = (kraj-pocetak)*cijena;
	
	cout << "Mjesecna cijena potrosenog plina iznosi: " << zaPlatiti;
	
	return 0;
}
