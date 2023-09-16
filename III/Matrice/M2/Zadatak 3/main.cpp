#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
	// suma svake kolone matrice
	
	int n, m;
	
	p: cout << "Unesite dimenzije matrice: ";
	cin >> n >> m;
	
	if (n < 1 || n > 10 || m < 1 || m > 10){
		cout << "Neispravan unos.\n";
		goto p;
	}
	
	int arr[n][m];
	
	cout << "\nUnesite elemente matrice:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	
	cout << "\nUnijeli ste matricu:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(4) << left << arr[i][j];
		} cout << endl;
	}
	
	cout << "\nSuma svake kolone je:\n";
	for (int i = 0; i < m; i++) {
		int sum = 0;
		
		for (int j = 0; j < n; j++) {
			sum += arr[j][i];
		} cout << setw(4) << left << sum;
	}
	
	return 0;
}
