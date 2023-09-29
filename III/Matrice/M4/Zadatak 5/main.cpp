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
		}
	}
	
	cout << "Elementi matrice su:\n";
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
            cout << setw(4) << left << arr[i][j];		
		}
		cout << endl;
    }
    
    int brr[m][n];
    
    
    for(int i = 0; i < m; i++) {
    	for(int j = 0; j < n; j++) {
    		brr[i][j] = arr[j][i];
		}
	}
	
    cout << "Transponovana matrica:\n";
	
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
            cout << setw(4) << left << brr[i][j];		
		}
		cout << endl;
    }
		
	return 0;
}

