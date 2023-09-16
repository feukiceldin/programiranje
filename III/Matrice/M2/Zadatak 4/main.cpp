#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
	
	int n, m;
	k:
		
	cout << "Unesite dimenzije matrice: ";
	cin >> n >> m;
	
	if(n < 1 || n > 5 || m < 1 || m > 5) {
		cout << "Unos nije ispravan!\n";
		goto k;
	}
	int arr[n][m];
	
	cout << "Unesite vrijednosti matrice: \n";
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	
	cout << "\nMatrica koju ste unijeli: \n";
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cout << setw(4) << left << arr[i][j];
		}
		cout << endl;
	}
	
	int proizvod = 1;
	int red = 0;
	int max = proizvod;
	cout << "\nProizvod svakog reda matrica iznosi:\n";
	
	for(int i = 0; i < n; i++) {
		proizvod = 1;
		for(int j = 0; j < m; j++) {
			proizvod *= arr[i][j];
		}
		if(proizvod > max) {
			max = proizvod;
			red = i;
		}
		cout << setw(4) << left << proizvod;
	}
	
	cout << "\nRed sa najvecim proizvodom je: " << red+1;	
	cout << "\nNajveci proizvod je: " << max;
	return 0;
}
