#include <iostream>
using namespace std;

int m, n;

int main(int argc, char** argv) {
	
	p: cout << "Unesite pocetni broj raspona: ";
	cin >> m;
	
	cout << "Unesite zavrsni broj raspona: ";
	cin >> n;
	
	if (n < m){
		cout << "Pocetni broj raspona mora biti manji od zavrsnog!" << endl;
		goto p;
	}
	
	while (m <= n){
		cout << m << " ";
		m++;
	}
	
	return 0;
}
