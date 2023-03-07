#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double kvadrat(double);
double kub(double);

int main(int argc, char** argv) {
	double n;
	
	cout << "Unesite n: ";
	cin >> n;
	
	cout << "Kvadrati brojeva su:\n";
	for (double i = 0.0; i < n-0.01; i+=0.1){
		cout << kvadrat(i) << setw(7);
	}
	
	cout << "\nKubovi brojeva su:\n";
	for (double i = 0; i < n-0.01; i+=0.1){
		cout << kub(i) << setw(7);
	}
	
	return 0;
}

double kvadrat(double x){
	return pow(x, 2);
}

double kub(double y){
	return pow(y, 3);
}
