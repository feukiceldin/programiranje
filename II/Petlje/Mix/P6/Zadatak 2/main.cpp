#include <iostream>
using namespace std;

int cifra = 1;
int broj = 0;

int main(int argc, char** argv) {
	
	while(cifra >= 0 && cifra < 10){
		cout << "Unesite cifru: ";
		cin >> cifra;
		if(!(cifra >= 0 && cifra < 10)){
			break;
		}
		broj = broj*10 + cifra;
	}
	
	cout << "Broj sastavljen od cifara je: " << broj;
	
	return 0;
}
