#include <iostream>
using namespace std;

int broj;
int i = 0;
int sum = 0;

int main(int argc, char** argv) {

	p: cout << "Upisi koliko brojeva zelite da saberete: ";
	cin >> broj;

	if (broj <= 0){
		cout << "Broj nije prirodan." << endl;
		goto p;
	}

	while (i < broj){
		cout << "Upisite broj: ";
		cin >> broj;
		sum+=broj;
		i++;
	}
	
	cout << "Suma unesenih brojeva je: " << sum;

	return 0;
}
