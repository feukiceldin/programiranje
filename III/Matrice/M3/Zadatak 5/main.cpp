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
	int proiz = 1;
	
	cout << "Unesite elemente u matricu:\n";	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
			if (i == j){
				proiz *= arr[i][j];
			}	
		}
	}
	
	cout << "Matrica koju ste unijeli:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << setw(4) << arr[i][j];
		} cout << endl;
	}
	
	cout << "Proizvod elemenata na glavnoj dijagonali: " << proiz;
	
	return 0;
}
