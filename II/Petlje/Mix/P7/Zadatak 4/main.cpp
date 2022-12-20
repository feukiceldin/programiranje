#include <iostream>
#include <cmath>
using namespace std;

double m, n;
double sum = 0;

int main(int argc, char** argv) {
	
	p: cout << "Unesite m: ";
	cin >> m;
	
	cout << "Unesite n: ";
	cin >> n;
	
	if (m > n){
		cout << "Neispravan unos. " << endl;
		goto p;
	}
	
	for (m; m <= n; m++){
		if (fmod(m, 2) == 0){
			sum += pow(m, 3);
		} else {
			sum += 1.0f/pow(m, 2);
		}
	}
	
	cout << "Suma brojeva je: " << sum;
	
	return 0;
}
