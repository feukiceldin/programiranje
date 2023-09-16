#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
	
	int n, m, r, s;
	
	p: cout << "Unesite dimenzije matrice: ";
	cin >> n >> m;
	
	if (n < 1 || n > 10 || m < 1 || m > 10){
		cout << "Neispravan unos.\n";
		goto p;
	}
	
	int arr[n][m];
	double avg = 0;
	
	cout << "Unesite elemente matrice:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}	
	
	cout << "Matrica koju ste unijeli:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(4) << left << arr[i][j];
		} cout << endl;
	}
	
	
	pp: cout << "Unesite koordinate nekog elementa matrice: ";
	cin >> r >> s;
	
	if (r >= n || r < 0 || s >= m || s < 0){
		cout << "Neispravan unos.\n";
		goto pp;
	}
		
	int count = 0;
	int manji_od_broja = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[r][s] == arr[i][j]) {
				count++;
			}
			if(arr[r][s] > arr[i][j]) {
				manji_od_broja++;
			}
		} 
	}
	
	cout << "Vrijednost elemenata matrice " << arr[r][s] << " se pojavljuje " << count << " puta. \n";
	cout << "Broj elemenata matrice manjih od tog broja su: " << manji_od_broja;
	
	return 0;
}
