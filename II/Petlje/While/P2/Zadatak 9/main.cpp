#include <iostream>
#include <cmath>
using namespace std;

int k, n;
int sum = 0;

int main(int argc, char** argv) {
	
	p: cout << "Unesite pocetni broj raspona: ";
	cin >> n;

	cout << "Unesite zavrsni broj raspona: ";
	cin >> k;
	
	if (k < n){
		cout << "Pocetni raspon mora biti manji od krajnjeg!" << endl;
		goto p;
	}
	
	int i = n;
	
	while (i <= k){
		sum+=pow(i,2);
		i++;
	}
	
	cout << "Suma kvadrata od " << n << " do " << k << " je: " << sum;
	
	return 0;
}
