#include <iostream>
using namespace std;

int n;
double broj, pBroj;
int promjena = 0;

int main(int argc, char** argv) {
	
	p: cout << "Unesite broj n: ";
	cin >> n;
	
	if (n <= 0){
		cout << "Neispravan unos." << endl;
		goto p;
	}
	
	int i = 1;
	cin >> pBroj;
	while (i < n){
		cin >> broj;
		if (pBroj < 0 && broj < 0){
			i++;
			continue;
		} else if (pBroj > 0 && broj > 0){
			i++;
			continue;
		}
		if (pBroj >= 0 && broj < 0){
			promjena++;
		} else if (pBroj < 0 && broj >= 0){
			promjena++;
		} 
		pBroj = broj;
		i++;
	}
	
	cout << "Broj promjena je " << promjena;
	
	return 0;
}
