#include <iostream>
using namespace std;

double broj = 1;
double baza;
int eksponent;
int i = 1;

int main(int argc, char** argv) {
	
	cout << "Unesite realan broj: ";
	cin >> baza;
	
	p: cout << "Unesite stepen broja: ";
	cin >> eksponent;
	
	if (eksponent <= 0){
		cout << "Neispravan unos." << endl;
		goto p;
	}
	
	while (i <= eksponent){
		broj *= baza;
		i++;
	}
	
	cout << "Broj " << baza << " na " << eksponent << " je " << broj;
	
	return 0;
}
