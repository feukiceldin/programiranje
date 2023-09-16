#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) 
{
	int m, n;
	
	cout << "Unesite dimenzije matrice:\n";
	cin >> m >> n;
	
	int arr[m][n];
	int brr[2][3] = {{1, 2, 3}, {4, 5, 6}};
		
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	
	cout << "\nMatrica koju ste unijeli:\n";
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			cout << setw(6) << left << arr[i][j];
		} cout << endl;
	}
	
	cout << "\nMatrica koju smo mi inicijalizirali:\n";
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 3; j++){
			cout << setw(6) << left << brr[i][j];
		} cout << endl;
	}
	
	int suma = 0;
	for(int i = 0; i < n; i++) {
		suma += arr[0][i];
	}
	cout << "-------------\nSuma prvog reda matrice je: ";
	cout << suma << endl;
	
	int proizvod = 1;
	for(int i = 0; i < m; i++) {
		proizvod *= arr[i][2];
	}
	cout << "-------------\nProizvod trece kolone matrice je: ";
	cout << proizvod << endl;
	
	int min = arr[0][0];
	int red = 0, kolona = 0;
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			if(min > arr[i][j]) {
				min = arr[i][j];
				red = i;
				kolona = j;
			}
		}
	}
	
	cout << "------------\nMinimum u matrici je: " << min;
	cout << "\nTaj broj se nalazi u: "<< red+1 << ". redu i " << kolona+1 << ". koloni";
	
	return 0;
}
