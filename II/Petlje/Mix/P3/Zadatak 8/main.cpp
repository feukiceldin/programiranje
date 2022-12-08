#include <iostream>
using namespace std;

double n;
double m;
double sum = 0;
int i = 0;
int uk = 0;


int main(int argc, char** argv) {
	
	cout << "Unesite broj ucenika: ";
	cin >> n;
	
	while (i < n){
		cout << "Unesite tezinu ucenika: ";
		p: cin >> m;
		
		if (m <= 0){
			cout << "Neispravna kilaza." << endl;
			goto p;
		}
		
		if (m < 65){
			uk++;
		}
		
		sum+=m;
		i++;
	}
	
	cout << "Prosjecna tezina ucenika je: " << sum/n << endl;
	cout << "Tezinu manju od 65 kg ima " << uk << " ucenika";
	
	return 0;
}
