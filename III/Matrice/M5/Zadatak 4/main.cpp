#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
	
	int n;
	
	p: cout << "Unesite broj redova: ";
	cin >> n;
	
	if (n < 1 || n > 100){
		cout << "Neispravan unos.\n";
		goto p;
	}
	
	cout << "Unesite elemente matrice: \n";
	
	int arr[n][2];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> arr[i][j];
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if (arr[i][1] < arr[j][1]){
				swap(arr[i], arr[j]);
			}
		}
	}
		
	cout << "Matrica sortirana po kolicini robe u opadajucem redoslijedu:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2; j++) {
			cout << setw(4) << arr[i][j];
		} cout << endl;
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if (arr[i][0] > arr[j][0]){
				swap(arr[i], arr[j]);
			}
		}
	}
		
	cout << "\nMatrica sortirana po sifri robe u rastucem redoslijedu:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2; j++) {
			cout << setw(4) << arr[i][j];
		} cout << endl;
	}
		
	return 0;
}
