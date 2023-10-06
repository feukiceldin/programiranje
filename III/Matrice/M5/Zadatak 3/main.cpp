#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
	
	int n, m;
	
	p: cout << "Unesite dimenzije matrice: ";
	cin >> n >> m;
	
	if (n < 1 || n > 15 || m < 1 || m > 3){
		cout << "Neispravan unos.\n";
		goto p;
	}
	
	cout << "Unesite elemente matrice: \n";
	
	int arr[n][m];
	int ocjene[6];
	for (int i = 0; i < 6; i++){
		ocjene[i] = 0;
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			pp: cin >> arr[i][j];
			
			if (arr[i][j] < 1 || arr[i][j] > 5){
				cout << "Neispravna ocjena!\n";
				goto pp;
			}
			ocjene[arr[i][j]]++;
		}
	}
	
	cout << "Ocjene razreda:\n";
	int ocjen[6][m];
	
	for (int i = 1; i < 6; i++){
		for (int j = 0; j < m; j++){
			ocjen[i][j] = 0;
		}
	}
	
	for (int i = 0; i < m; i++) {
		cout << "3T" << i+1 << ": \n";
		for (int j = 0; j < n; j++){
			ocjen[arr[j][i]][i]++;
		}
		
		for (int j = 1; j < 6; j++){
			cout << "Broj " << j << ": " << ocjen[j][i] << endl;
		}
	}
		
	cout << "Ocjene svih razreda:\n";
	for (int i = 1; i < 6; i++){
		cout << "Broj " << i << ": " << ocjene[i] << endl;
	}
		
	return 0;
}