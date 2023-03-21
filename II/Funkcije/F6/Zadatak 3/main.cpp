#include <iostream>
using namespace std;

int brojPozitivnih(int arr[], int n);
int brojNegativnih(int arr[], int n);

int main(int argc, char** argv) {
	int n;
	
	p: cout << "Unesite n: ";
	cin >> n;
	
	if (n > 10){
		cout << "Maksimalna duzina niza je 10!" << endl;
		goto p; 
	}
	
	int arr[n];
	
	for (int i = 0; i < n; i++){
		printf("Unesite %d. broj: ", i+1);
		cin >> arr[i];
	}
	
	cout << "U unesenom nizu ima " << brojPozitivnih(arr, n) << " pozitivnih elemenata" << endl;
	cout << "U unesenom nizu ima " << brojNegativnih(arr, n) << " negativnih elemenata";
		
	return 0;
}

int brojPozitivnih(int arr[], int n){
	int uk = 0;
	for (int i = 0; i < n; i++){
		if (arr[i] > 0){
			uk++;
		}
	} return uk;
}

int brojNegativnih(int arr[], int n){
	int uk = 0;
	for (int i = 0; i < n; i++){
		if (arr[i] < 0){
			uk++;
		}
	} return uk;
}
