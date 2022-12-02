#include <iostream>
using namespace std;

int n, k, i;
int sum = 0;

int main(int argc, char** argv) {
	
	cout << "Unesite pocetnu vrijednost raspona: ";
	cin >> k;
	
	cout << "Unesite krajnju vrijednost raspona: ";
	cin >> n;
	
	i = k;
	
	while (i <= n){
		if(i % 10 == 8){
			sum+=i;
		} i++;
	}	
	
	cout << "Suma prirodnih brojeva od " << k << " do " << n << " je: " << sum;
	
	return 0;
}
