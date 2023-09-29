#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {

	int n, m;
	
	cout << "Unesite dimenzije matrice: ";
	cin >> n >> m;
	
	int arr[n][m], brr[n][m];
	
	cout << "Unesite elemente prve matrice: \n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	
	cout << "Elementi prve matrice su:\n";
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
            cout << setw(4) << left << arr[i][j];		
		}
		cout << endl;
    }
    
    cout << "Unesite elemente druge matrice: \n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> brr[i][j];
		}
	}
	
	cout << "Elementi druge matrice su:\n";
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
            cout << setw(4) << left << arr[i][j];		
		}
		cout << endl;
    }	
    
    int crr[n][m];
    for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			crr[i][j] = arr[i][j] + brr[i][j] * 2;		 
		}
    }
   	
   	cout << "Elementi rezultujuce matrice su:\n"; 
   	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
            cout << setw(4) << left << crr[i][j];		
		}
		cout << endl;
    }   
	 
	return 0;
}

