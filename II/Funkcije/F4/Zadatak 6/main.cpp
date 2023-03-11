#include <iostream>
using namespace std;

void provjeriCifru(int x, int c);

int main(int argc, char** argv) {
	
	int broj, c;
	cout << "Unesite broj: ";
	cin >> broj;
	
	cout << "Unesite cifru za provjeru: ";
	cin >> c;
	
	provjeriCifru(broj, c);
	
	return 0;
}

void provjeriCifru(int x, int c){
	bool cifraPostoji = false;
	while (x != 0) {
		if (x % 10 == c){
			cifraPostoji = true;
			break;
		} x /= 10;
	}
	
	cout << (cifraPostoji ? "Cifra postoji u broju" : "Cifra ne postoji u broju");
}
