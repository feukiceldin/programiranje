#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {

	int n, m;

	cout << "Unesite dimenzije matrice: ";
	cin >> n >> m;
	
	int arr[n][m];
	
	cout << "Unesite elemente matrice:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
			arr[i][j] *= arr[i][j];
		}
	}
	
	cout << "Rezultujuca matrica koja je kvadrat elemenata:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(4) << arr[i][j];
		} cout << endl;
	}
		
	return 0;
}
