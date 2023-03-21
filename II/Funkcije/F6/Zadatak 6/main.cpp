#include <iostream>
using namespace std;

double prosjek(int arr[], int n);

int main(int argc, char** argv) {
	int n, uk;
	
	p: cout << "Unesite broj ucenika: ";
	cin >> n;
	
	if (n > 30){
		cout << "Maksimalni broj ucenika je 30!" << endl;
		goto p; 
	}
	
	int arr[n];
	
	for (int i = 0; i < n; i++){
		printf("Unesite %d. ocjenu: ", i+1);
		cin >> arr[i];
	}
	
	for (int i = 0; i < n; i++){
		if (arr[i] > prosjek(arr, n)){
			uk++;
		}
	}
	
	cout << "Prosjecna ocjena razreda je: " << prosjek(arr, n) << endl;
	cout << "Iznad prosjeka ima " << uk << " ucenika";
		
	return 0;
}

double prosjek(int arr[], int n){
	double sum = 0;
	for (int i = 0; i < n; i++){
		sum += arr[i];
	} return sum/n;
}
