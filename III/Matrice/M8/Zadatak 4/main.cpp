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
	
	int brr[m][n];
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			brr[j][n - 1 - i] = arr[i][j];
		} 
	}
	
	cout << "Niz B: \n";
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			cout << setw(4) << brr[i][j];
		} cout << endl;
	}
	
	return 0;
}