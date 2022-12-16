#include <iostream>
using namespace std;

double n;
double i = 1;
double sum = 0;
bool prvi = true;

int main(int argc, char** argv) {
	
	p: cout << "Unesite n: ";
	cin >> n;
	
	if (n <= 0){
		cout << "Neispravan unos." << endl;
		goto p;
	}
	
	while (i <= n){
		if (prvi){
			sum += 1.0f/i;
		} else {
			sum -= 1.0f/i;
		} i+=2;
		prvi = !(prvi);
	}
	
	cout << "Suma je " << sum;
	
	return 0;
}
