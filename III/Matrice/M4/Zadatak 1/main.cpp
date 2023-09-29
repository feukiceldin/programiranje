#include <iostream>
#include<iomanip>
using namespace std;

int main(int argc, char** argv) {
	
	
	int n;
	
	cout << "Unesite dimenzije matrice: ";
	cin >> n;
	
	
	int mat[n][n];
	cout << "Unesite vrijednosti matrice:\n";
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin >> mat[i][j];
		}
	}
	
	cout << "Elementi matrice su:\n";
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
            cout << setw(4) << left << mat[i][j];		
		}
		cout << endl;
    }
    
    cout << "\nNa kraju: \n";
    for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(i != j) {
				cout << setw(4) << left << mat[i][j];
			}
			else {
				cout << setw(4) << left << "*";
			} 
		}
		cout << endl;
    }
	return 0;
}
