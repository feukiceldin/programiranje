#include <iostream>
#include <cmath>

using namespace std;

int broj;

int main(int argc, char** argv) {
	
	cout << "Unesite cijeli broj: ";
	cin >> broj;
	
	if (broj % 2 == 0){
		cout << "Broj " << broj << " je paran, a njegova treca potencija iznosi " << pow(broj, 3);
	} else {
		cout << "Broj " << broj << " je neparan, a njegova apsolutna vrijednost iznosi " << abs(broj);
	}
	
	return 0;
}
