#include <iostream>
#include <cmath>
using namespace std;

double broj;

int main(int argc, char** argv) {
	
	cout << "Unesite cijeli broj: ";
	cin >> broj;
	
	if (broj < 0){
		cout << "Ne moze se izracunati korijen negativnog broja." << endl;
	}
	
	if (broj >= 0){
		cout << "Korijen broja je: " << sqrt(broj) << endl;
	}
	
	if (broj == 0){
		cout << "Ne moze se izracunati reciprocna vrijednost nule." << endl;
	}
	
	if (broj != 0){
		cout << "Reciprocna vrijednost broja je: " << 1/broj;
	}
	
	
	return 0;
}
