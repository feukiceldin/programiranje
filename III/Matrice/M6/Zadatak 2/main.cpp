#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int n, m, k1, k2;
	
	cout << "Unesite dimenzije matrica(n, k1, k2, m): ";
	cin >> n >> k1 >> k2 >> m;
	
	if (k1 != k2){
		cout << "Neispravne dimenzije";
		return 0;
	} int k = k1;
	
	int arr[n][k];
	int brr[k][m];

	for (int i = 0; i < n; i++){
		for (int j = 0; j < k; j++){
			cin >> arr[i][j];
		}
	}
	
	for (int i = 0; i < k; i++){
		for (int j = 0; j < m; j++){
			cin >> brr[i][j];
		}
	}
	
	int crr[n][m] = {0};
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			for (int l = 0; l < k; l++){
				crr[i][j] += arr[i][l] * brr[l][j];
			}
		}
	}
	
	cout << "\nRezultat: \n";
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cout << crr[i][j] << " ";
		} cout << endl;
	}
	
	return 0;
}