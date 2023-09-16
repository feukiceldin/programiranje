#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
	
	int n, m;
	
	p: cout << "Unesite dimenzije matrice: ";
	cin >> n >> m;
	
	if (n < 1 || n > 10 || m < 1 || m > 10){
		cout << "Neispravan unos.\n";
		goto p;
	}
	
	int arr[n][m];
	
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

	int mini = 2147483647;
	
	for (int i = 0; i < n; i++) {
		int maxi = arr[i][0];
		for (int j = 0; j < m; j++) {
			maxi = max(arr[i][j], maxi);
		}
		
		mini = min(maxi, mini);
	}
	
	cout << "Najmanji maksimum elemenata je: " << mini;

	return 0;
}
