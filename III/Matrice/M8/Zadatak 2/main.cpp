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
	
	int r, k, bn, bm;
	p: cout << "Unesite red i kolonu i bn i bm: ";
	cin >> r >> k >> bn >> bm;
	
	if (r > n || r < 0 || k > m || k < 0){
		cout << "Neispravan unos";
		goto p;
	}
	
	int brr[bn][bm];
	int bi = 0;
	int bj = 0;
	for (int i = r-1; i < r-1 + bn; i++){
		for (int j = k-1; j < k-1 + bm; j++){
			brr[bi][bj++] = arr[i][j];
		} bi++; bj = 0;
	}
	
	cout << "Niz B: \n";
	for (int i = 0; i < bn; i++){
		for (int j = 0; j < bm; j++){
			cout << setw(4) << brr[i][j];
		} cout << endl;
	}
	
	return 0;
}