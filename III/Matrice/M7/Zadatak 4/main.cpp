#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int n, m;
	
	cout << "Unesite dimenzije matrice: ";
	cin >> n >> m;
	
	int count = 0;
	int arr[n][m];
	
	cout << "Unesite elemente matrice: \n";
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> arr[i][j];
			if (arr[i][j] == 0){
				count++;
			}
		}
	}

	if (count > n*m/2){
		cout << "\nProrijedjena matrica";
	} else {
		cout << "\nNije prorijedjena matrica";
	}

	return 0;
}
