#include <iostream>
using namespace std;

int m, n;

int main(int argc, char** argv) {
	
	cout << "Unesite pocetni broj raspona: ";
	cin >> m;
	
	cout << "Unesite zavrsni broj raspona: ";
	cin >> n;
	
	cout << "Ispis brojeva od " << m << " do " << n << ":" << endl;
	for (int i = m; i <= n; i++){
		cout << i << " ";
	}
	
	return 0;
}
