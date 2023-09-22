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
	
	cout << "Unesite elemente u matricu:\n";	
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
	
	int ispodSD[n-1];
	int k = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i + j == n){
			    ispodSD[k] = arr[i][j];
			    k++;
			} 
		} cout << endl;
	}
	
	cout << "Elementi koji se nalaze neposredno ispod sporedne dijagonale:\n";
	for (int i = 0; i < n-1; i++){
		cout << setw(4) << ispodSD[i];
	}
	
	return 0;
}
