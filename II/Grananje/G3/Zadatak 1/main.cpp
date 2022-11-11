#include <iostream>
using namespace std;

int broj;

int main(int argc, char** argv) {
	
	cout << "Unesite cijeli broj: ";
	cin >> broj;
	
	if (broj == 0){
		cout << "Neispravan unos.";
	}
	
	if (broj == 100){
		cout << "Broj je 100";
	}
	else if (broj > 100){
		cout << "Uneseni broj je veci od 100";
	} else {
		cout << "Uneseni broj je manji od 100";
	}
	
	if (broj % 2 == 0){
		cout << " i paran je.";
	} else {
		cout << " i neparan je.";
	}
	
	return 0;
}
