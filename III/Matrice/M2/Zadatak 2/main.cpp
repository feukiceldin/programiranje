#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
	// Sabiranje matrica: 
	
	int m, n;
	
	cout << "Unesite dimenzije matrice: ";
	cin >> m >> n;
	
	int arr[n][m], brr[n][m], crr[n][m];
	
	cout << "Unesite vrijednosti matrice A: \n";
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	
	cout << "\nUnesite vrijednosti matrice B: \n";
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> brr[i][j];
		}
	}
	
	cout << "\nUnesene matrice su: \n";
	
	cout << "Matrica A: \n";
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cout << left << setw(4) << arr[i][j];
		}
		cout << endl;
    }
    
    cout << "\nMatrica B: \n";
    
    for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
           cout << left << setw(4) << brr[i][j];
		}
		cout << endl;
    }
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			crr[i][j] = arr[i][j] + brr[i][j];
		}
    }
    
	cout << "\nSuma tih matrica je matrica C koja iznosi: \n";
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
		    cout << setw(4) << left << crr[i][j];
		} 
		cout << endl;
    }
    
	return 0;
}
