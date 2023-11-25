#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
	
	int n, m;
	
	cout << "Unesite dimenzije matrice: ";
	cin >> n >> m;
	
	int arr[n][m];
	int maxi = -2147483648;
	int indR = 0;
	int mini = 2147483647;
	int indK = 0;
	cout << "Unesite elemente matrice: \n";
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> arr[i][j];
			if (arr[i][j] > maxi){
				maxi = arr[i][j];
				indR = i;
			}
			if (arr[i][j] < mini){
				mini = arr[i][j];
				indK = j;
			}
		}
	}
	
	cout << "Niz A: \n";
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cout << setw(4) << arr[i][j];
		} cout << endl;
	}
	
	for (int i = 0; i < n; i++){
		swap(arr[i][indK], arr[indR][n - 1 - i]);
	}
		
	cout << "Niz A: \n";
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cout << setw(4) << arr[i][j];
		} cout << endl;
	}
	
	return 0;
}