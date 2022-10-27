#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int polijetanjeSat, polijetanjeMinut, slijetanjeSat, slijetanjeMinut, minuteSlijetanja, minutePolijetanja;

int main(int argc, char** argv) {
	
	cout << "Unesite vrijeme polijetanja - sat i minut: ";
	cin >> polijetanjeSat >> polijetanjeMinut;
	
	cout << "Unesite vrijeme slijetanja - sat i minut: ";
	cin >> slijetanjeSat >> slijetanjeMinut;
	
	minutePolijetanja = polijetanjeSat*60 + polijetanjeMinut;
	minuteSlijetanja = slijetanjeSat*60 + slijetanjeMinut;
	
	cout << "Duzina trajanja leta je: " << (minuteSlijetanja-minutePolijetanja)/60 << " sati i " << (minuteSlijetanja-minutePolijetanja)%60 << " minuta.";
	
	return 0;
}
