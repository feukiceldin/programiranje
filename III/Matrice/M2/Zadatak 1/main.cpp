#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
	// unijeti elemente matrice arr ispisati matricu a unijeti vrijednost skalara i ispisati proizvoda matrice a sa skalarom
	// n <= 10, m <= 10
	
	int n, m;
	
	p: cout << "Unesite dimenzije matrice: ";
	cin >> n >> m;
	
	if (n <= 0 || n > 10 || m <= 0 || m > 10){
		cout << "Neispravan unos.\n";
		goto p;
	}
	
	int arr[n][m];
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> arr[i][j];
		}
	} cout << endl;
	
	cout << "Unijeli ste matricu:\n";
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cout << setw(4) << left << arr[i][j];
		} cout << endl;
	}
	
	int skalar;
	cout << "\nUnesite vrijednost skalara: ";
	cin >> skalar;
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			arr[i][j] *= skalar;
		}
	}	 
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cout << setw(4) << left << arr[i][j];
		} cout << endl;
	}
	
	return 0;
}
