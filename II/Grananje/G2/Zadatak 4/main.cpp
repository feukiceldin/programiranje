#include <iostream>
using namespace std;

int a, b;

int main(int argc, char** argv) {
	
	cout << "Unesi prvi broj: ";
	cin >> a;
	
	cout << "Unesi drugi broj: ";
	cin >> b;
	
	if (a > b){
		cout << "Broj " << a << " je veci";
	} else if (b > a){
		cout << "Broj " << b << " je veci";
	} else {
		cout << "Brojevi su jednaki";
	}
	
	return 0;
}
