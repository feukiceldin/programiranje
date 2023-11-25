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
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m / 2; j++){
			swap(arr[i][j], arr[i][m - 1 - j]);
		} 
	}
	
	cout << "Niz B: \n";
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			cout << setw(4) << arr[i][j];
		} cout << endl;
	}
	
	return 0;
}