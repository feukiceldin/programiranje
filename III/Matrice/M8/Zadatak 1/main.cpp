#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
	
	int n, m;
	
	cout << "Unesite dimenzije matrice: ";
	cin >> n >> m;
	
	int arr[n][m];
	cout << "Unesite elemente matrice: \n";
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> arr[i][j];
		}
	}
	
	int r, k;
	p: cout << "Unesite red i kolonu koju zelite izbaciti: ";
	cin >> r >> k;
	
	if (r > n || r < 0 || k > m || k < 0){
		cout << "Neispravan unos";
		goto p;
	}
	
	int brr[n-1][m-1];
	int bi = 0;
	int bj = 0;
	for (int i = 0; i < n; i++){
		if (r == i+1){
			continue;
		} 
		for (int j = 0; j < m; j++){
			if (k != j+1){
				brr[bi][bj] = arr[i][j];
				bj++;
			}
		} bi++; bj = 0;
	}
	
	cout << "Niz B: \n";
	for (int i = 0; i < n-1; i++){
		for (int j = 0; j < m-1; j++){
			cout << setw(4) << brr[i][j];
		} cout << endl;
	}
	
	return 0;
}