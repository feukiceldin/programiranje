#include <iostream>

using namespace std;

// provjeriti da li je unesena matrica idempotentna
// A * A = A

int main(int argc, char** argv) {
	
	int n;
	
	cout << "Unesite dimenziju matrice(n): ";
	cin >> n;
	
	int arr[n][n];

	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cin >> arr[i][j];
		}
	}
	
	int crr[n][n] = {{0}};
		
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			crr[i][j] = 0;
			for (int k = 0; k < n; k++){
				crr[i][j] += arr[i][k] * arr[k][j];
			}
		}
	}
	
	cout << "\nRezultat: \n";
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cout << crr[i][j] << " ";
		} cout << endl;
	}
	
	bool iste = true;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (arr[i][j] != crr[i][j]){
				iste = false;
				break;
			}
		}
	}
	
	if (iste){
		cout << "\nMatrica je idempotentna";
	} else {
		cout << "Matrica nije idempotentna";
	}
	
	return 0;
}