#include <iostream>
using namespace std;

int x, y, rez;

int main(int argc, char** argv) {
	
	cout << "Unesi prvi broj: ";
	cin >> x;
	
	cout << "Unesi drugi broj: ";
	cin >> y;
	
	if ((x > 0 && y > 0) || (x < 0 && y < 0)){
		rez = x * y;
	} else {
		rez = x + y;
	}
	
	cout << "Rezultat je " << rez;
	
	return 0;
}
