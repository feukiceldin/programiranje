#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {

	int n;
	
	cout << "Unesite dimenzije matrice: ";
	cin >> n;
	
	int arr[n][n];
	
	cout << "Unesite elemente matrice:\n";
	for(int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++){
			cin >> arr[i][j];
			arr[i][j] *= 2;
			if (i == j){
				arr[i][j] += 1;
			}
		}
	}
	
	cout << "Rezultujuca matrica od formule A=2X+E:\n";
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cout << setw(4) << arr[i][j];
		} cout << endl;
	}
	
	return 0;
}
