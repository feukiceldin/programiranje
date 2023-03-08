#include <iostream>
#include <cmath>
using namespace std;

double d (double a){
	return (sqrt(2) * a);
}

int main(int argc, char** argv) {
	
	int a;

	cout << "Unesite stranicu kvadrata: ";
	cin >> a;

	cout << "Dijagonala kvadrata: " << d(a);

	return 0;
}
