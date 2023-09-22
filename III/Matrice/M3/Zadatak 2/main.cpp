#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {

	int n;
	
	p: cout << "Unesite n: ";
	cin >> n;
	
	if (n > 20 || n < 0){
		cout << "Prevelike dimenzije!\n";
		goto p;
	}
	
	int arr[n][n];
	
	cout << "Unesite elemente matrice:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];	
		}
	}
	
	cout << "Matrica koju ste unijeli:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << setw(4) << arr[i][j];
		} cout << endl;
	}
	
	cout << "Elementi iznad glavne dijagonale:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j > i){
			    cout << setw(4) << arr[i][j];
			} else {
			    cout << setw(4) << " ";
			}
		} cout << endl;
	}
	
	cout << "Elementi ispod glavne dijagonale:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i > j){
			    cout << setw(4) << arr[i][j];
			} 
		} cout << endl;
	}
	
	cout << "Elementi iznad sporedne dijagonale:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i + j < n-1){
			    cout << setw(4) << arr[i][j];
			} 
		} cout << endl;
	}
	
	cout << "Elementi ispod sporedne dijagonale:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i + j > n-1){
			    cout << setw(4) << arr[i][j];
			} else {
			    cout << setw(4) << " ";
			}
		} cout << endl;
	}
	
	return 0;
}
