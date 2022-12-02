#include <iostream>
using namespace std;

int n, m, dj;

int main(int argc, char** argv) {

	cout << "Unesite pocetni broj raspona: ";
	cin >> n;

	cout << "Unesite zavrsni broj raspona: ";
	cin >> m;
	
	cout << "Unesite broj za provjeru djeljivosti: ";
	cin >> dj;
	
	while (n <= m){
		if (n % dj == 0){
			cout << n << " ";
		}
		n++;
	}

	return 0;
}
