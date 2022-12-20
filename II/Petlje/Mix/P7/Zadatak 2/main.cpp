#include <iostream>
#include <cmath>
using namespace std;

int n, m, broj;
int maxR = 0;
int i = 1;

int main(int argc, char** argv) {
	
	p: cout << "Unesite broj elemenata: ";
	cin >> n;
	
	if (n <= 0){
		cout << "Neispravan unos. " << endl;
		goto p;
	}
	
	cout << "Unesite vrijednost elemenata: ";
	cin >> m;
	
	while (i < n) {
		cin >> broj;
		
		if (abs(m-broj) > maxR){
			maxR = abs(m-broj);
		} m = broj;
		i++;
	} 
	
	cout << "Najveca razlika je: " << maxR;
	
	return 0;
}
