#include <iostream>
#include <cmath>
using namespace std;

double pravougli(double a, double b){
	return (sqrt(pow(a, 2) + pow(b, 2)));
}

int main(int argc, char** argv) {
	
	int a, b;
	
	cout << "Unesite duzine kateta: ";
	cin >> a >> b;
	
	cout << "Duzina hipotenuze je: " << pravougli(a, b);
	
	return 0;
}
