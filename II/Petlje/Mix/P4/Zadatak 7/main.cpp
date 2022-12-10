#include <iostream>

using namespace std;

double broj;
double uk = 1;
double sum = 0;
bool nista = false;

int main(int argc, char** argv) {
	
	cout << "Unesite cijene:" << endl;
	cin >> broj;
		
	if (broj == 0){
		cout << "Niste unijeli nijednu cijenu artikla.";
		nista = true;
	} else {
		sum = broj;
	}
	
	while (broj != 0){
		cin >> broj;
		if (broj < 0){
			cout << "Cijene moraju biti pozitivni brojevi." << endl;
			continue;
		}
		if (broj == 0){
			break;
		}
		sum += broj;
		uk++;		
	}

	if (!nista){
		cout << "Prosjecna cijena artikala je " << sum/uk;
	} 
	
	return 0;
}
