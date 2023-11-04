#include <iostream>

using namespace std;

// program koji izracunava n-ti stepen kvadratne matrice
// A ^ n ?

int main(int argc, char** argv) {
	
	int n;
	
	cout << "Unesite dimenziju matrice(n): ";
	cin >> n;
	
	int arr[n][n];
	int brr[n][n];
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cin >> arr[i][j];
		}
	} cout << endl;
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cin >> brr[i][j];
		}
	}
	
	int crr[n][n];
	int drr[n][n];
		
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			crr[i][j] = 0;
			for (int k = 0; k < n; k++){
				crr[i][j] += arr[i][k] * brr[k][j];
			}
		}
	} 
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			drr[i][j] = 0;
			for (int k = 0; k < n; k++){
				drr[i][j] += brr[i][k] * arr[k][j];
			}
		}
	}
	
	cout << "\nRezultat: \n";
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cout << crr[i][j] << " ";
		} cout << endl;
	} cout << endl;
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cout << drr[i][j] << " ";
		} cout << endl;
	}
	
	bool iste = true;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (crr[i][j] != drr[i][j]){
				iste = false;
				break;
			}
		}
	}
	
	if (iste){
		cout << "\nMatrice su komutativne";
	} else {
		cout << "\nMatrice nisu komutativne";
	}
	
	return 0;
}