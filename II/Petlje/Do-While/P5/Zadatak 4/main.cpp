#include <iostream>
#include <cmath>
using namespace std;

int n;
double x;
double sum = 0;

int main(int argc, char** argv) {

	p: cout << "Unesite n: ";
	cin >> n;
	
	if (n <= 0){
		cout << "Neispravan unos. " << endl;
		goto p; 
	}
	
	cout << "Unesite x: ";
	cin >> x;
	
	double i = 1;
	
	do {
		
		sum += i*pow(x, i);		 
		i++;
		
	} while (i <= n);
	
	cout << "Suma je: " << sum;

	return 0;
}
