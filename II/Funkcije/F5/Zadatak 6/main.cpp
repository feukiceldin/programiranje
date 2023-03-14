#include <iostream>
using namespace std;

double aritmetickaSredina(int broj){
	double sum = 0;
	int cifre = 0;
	while (broj != 0){
		sum += broj%10;
		broj /= 10;
		cifre++;
	} return sum/cifre;
}

int main(int argc, char** argv) {
	int broj;
	
	cout << "Unesite broj: ";
	cin >> broj;
	
	cout << "Aritmeticka sredina cifara broja " << broj << " je " << aritmetickaSredina(broj);
	
	return 0;
}
