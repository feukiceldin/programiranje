#include <iostream>
#include <cmath>
using namespace std;

void ispisiCifre(int broj);

int main(int argc, char** argv) {
	
	int broj;
	
	cout << "Unesite broj: ";
	cin >> broj;
	
	ispisiCifre(broj);
	
	return 0;
}

void ispisiCifre(int broj){
	int cifre = 0;
	int broj1 = broj;
	int broj2 = broj;
	
	while (broj1 != 0){
		broj1/=10;
		cifre++;
	} int arr[cifre]; 
	
	for (int i = 0; i < cifre; i++){
		arr[i] = broj2%10;
		broj2/=10;
	}
	
	cout << "Broj " << broj << " ima " << cifre << " cifara i to su: ";
	for (int i = cifre-1; i >= 0; i--){
		if (i == 1){
			cout << arr[i] << " i ";
		} else {
			cout << arr[i] << " ";
		}
	}
}
