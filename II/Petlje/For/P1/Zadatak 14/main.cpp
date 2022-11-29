#include <iostream>
using namespace std;

int sum, k, n;

int main(int argc, char** argv) {

	sum = 0; 
	
	p: cout << "Unesite pocetnu granicu: ";
	cin >> k;
	
	cout << "Unesite zavrsnu granicu: ";
	cin >> n;
	
	if (k > n) {
		cout << "Pocetna granica mora biti manja od zavrsne!" << endl;
		goto p;
	}
	
	for (int i = k; i <= n; i++){
		if (i % 10 == 8){
			sum += i;
		}
	}
	
	cout << "Suma brojeva od " << k << " do " << n << " sa cifrom jedinice 8: " << sum << endl;

	return 0;
}
