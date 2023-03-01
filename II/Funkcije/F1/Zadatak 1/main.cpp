#include <iostream>
#include <cmath>
using namespace std;

double p (double a, double b){
	return (a*b)/2;
}

double hip (double a, double b){
	double c = sqrt(pow(a, 2) + pow(b, 2));
	return c;	
}

int main(int argc, char** argv) {
	
	int a, b;
	
	cout << "Unesite stranice pravouglog trougla: ";
	cin >> a >> b;
	
	cout << "Povrsina trougla je: " << p(a, b) << endl;
	cout << "Hipotenuza trougla je: " << hip(a, b);
	
	return 0;
}
