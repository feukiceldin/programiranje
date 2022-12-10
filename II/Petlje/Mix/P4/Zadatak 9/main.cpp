#include <iostream>
#include <cmath>
using namespace std;

int sum = 0;
int broj, cj;

int main(int argc, char** argv) {
	
	p: cout << "Unesite broj: ";
	cin >> broj;
	
	if (broj < 0){
		cout << "Neispravan unos." << endl;
		goto p;
	}
	
	int i = -1;
	
	while (broj != 0){
		cj = broj%10;
		if (cj % 2 == 0){
			cj++;
		}  
		i++;
		sum += cj * pow(10,i);
		broj /= 10;
	}
	
	cout << sum;
	
	return 0;
}
