#include <iostream>
using namespace std;

int sati, plata;

int main(int argc, char** argv) {
	
	cout << "Unesite koliko je radnik radio sati u sedmici: ";
	cin >> sati;
	
	if (sati < 40){
		plata = sati*6;
	} else {
		plata = 240 + 9*(sati-40);
	}
	
	cout << "Plata radnika iznosi: " << plata << "KM";
	
	return 0;
}
