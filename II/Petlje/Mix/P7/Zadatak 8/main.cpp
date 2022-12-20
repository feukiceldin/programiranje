#include <iostream>
using namespace std;

int broj;
int i = 1;
double sum = 0;
double uk = 0;
double prosjek;

int main(int argc, char** argv) {
	
	p: cout << "Unesite broj ucenika: ";
	cin >> broj;
	
	if (broj <= 0){
		cout << "Neispravan unos." << endl;
		goto p;
	}
	
	while (i <= broj){
		cin >> prosjek;
		if (prosjek > 4.49f){
			sum += prosjek;
			uk++;
		} i++;
	}
	
	if (sum == 0){
		cout << "Nema odlicnih";
	} else {
		cout << "Prosjek odlicnih ucenika je: " << sum/uk;
	}
	
	return 0;
}
