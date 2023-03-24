#include <iostream>
using namespace std;

int cifre (int n){
	if (n < 10){
		return n;
	} else {
		return n % 10 + cifre(n/10);
	}
}

int main(int argc, char** argv) {
	int broj;
	
	cout << "Unesite broj: ";
	cin >> broj;
	
	cout << "Suma cifara unesenog broja: " << cifre(broj);
	
	return 0;
}
