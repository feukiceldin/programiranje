#include <iostream>
using namespace std;

int n, broj, cifre, maxB, temp;
int maxC = 0;
int i = 1;

int main(int argc, char** argv) {
	
	p: cout << "Unesite koliko brojeva zelite: ";
	cin >> n;
	
	if (n <= 0){
		cout << "Neispravan unos." << endl;
		goto p;
	}
	
	while (i <= n){
		cin >> broj;
		cifre = 0;
		temp = broj;
		while (temp != 0){
			temp /= 10;
			cifre++;
		} if (cifre > maxC){
			maxC = cifre;
			maxB = broj;
		}
		i++;
	}
	
	cout << "Broj sa najvecim brojem cifara: " << maxB;
	
	return 0;
}
