#include <iostream>
using namespace std;

long long broj;

int main(int argc, char** argv) {
	
	p: cout << "Unesite broj: ";
	cin >> broj;
	
	if (broj <= 0){
		cout << "Neispravan unos." << endl;
		goto p;
	}
	
	cout << "Vrijednosti cifara unazad su: ";
	
	while (broj != 0){
		cout << broj%10 << "";
		broj /=10;
	}
	
	return 0;
}
