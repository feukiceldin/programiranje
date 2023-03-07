#include <iostream>
using namespace std;

double pov (double, double);

int main(int argc, char** argv) {
	double a, b;
	
	cout << "Unesite duzinu stranice a: ";
	cin >> a;
	
	cout << "Unesite duzinu stranice b: ";
	cin >> b;
	
	cout << "Povrsina pravouglog trougla tih stranica je: " << pov(a, b);
	
	return 0;
}

double pov (double a, double b){
	return (a*b)/2;
}
