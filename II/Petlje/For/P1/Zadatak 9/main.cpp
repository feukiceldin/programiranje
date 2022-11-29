#include <iostream>
#include <cmath>
using namespace std;

int k, n;
long sum;

int main(int argc, char** argv) {
	
	sum = 0;
	
	cout << "Unesite pocetnu vrijednost raspona: ";
	cin >> k;
	
	cout << "Unesite zavrsnu vrijednost raspona: ";
	cin >> n;
	
	for (int i = k; i <= n; i++){
		sum += pow(i, 2); 
	}
	
	cout << "Suma kvadrata brojeva od: " << k << " do " << n << " je: " << sum;
	
	return 0;
}
