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
	double avg = 0;
	
	cout << "Unesite elemente matrice:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
			avg += double(arr[i][j]) / (n*m);
		}
	}	
	
	cout << "Matrica koju ste unijeli:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(4) << left << arr[i][j];
		} cout << endl;
	}
	
	int count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] > avg){
				count++;
			}
		} 
	}
	
	cout << "Brojeva koji su veci od prosjeka ima: " << count;
	
	return 0;
}
