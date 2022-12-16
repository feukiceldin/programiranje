#include <iostream>
#include <cmath>
using namespace std;

int m, n;
long long eSum, oSum;

int main(int argc, char** argv) {
	
	p: cout << "Unesite m: ";
	cin >> m;
	
	cout << "Unesite n: ";
	cin >> n;
	
	if (m < 0 || n < 0 || m > n){
		cout << "Neispravan unos." << endl;
		goto p;
	}
		
	while (m <= n){
		if (m % 2 == 0){
			eSum+=pow(m,2);
		} else {
			oSum+=pow(m,3);
		} m++;
	}
	
	cout << "Suma kvadrata parnih je " << eSum << ", a suma kubova neparnih je: " << oSum;
	
	return 0;
}
