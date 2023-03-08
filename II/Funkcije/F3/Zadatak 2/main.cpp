#include <iostream>
#include <cmath>
using namespace std;

double obim (double r){
	return (2*r*M_PI);
}

double povrsina (double r){
	return (pow(r, 2)*M_PI);
}

int main(int argc, char** argv) {
	
	double r;
	
	p: cout << "Unesite poluprecnik: ";
	cin >> r;
	
	if (r < 1 || r > 10){
		cout << "Neispravan unos!\n";
		goto p;
	}
	
	cout << "Povrsina je: " << povrsina(r) << endl;
	
	cout << "Obim je: " << obim(r) << endl;
	
	return 0;
}
