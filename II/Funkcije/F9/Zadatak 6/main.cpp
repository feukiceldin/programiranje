#include <iostream>
using namespace std;

void unesiNiz(int arr[], int n){
	cout << "Unesite niz: " << endl;
	for (int i = 0; i < n; i++){
		cout << "Niz[" << i << "]: ";
		cin >> arr[i];
	}
}

void ispisiJednocifreneRastuci(int arr[], int n){
	for (int i = 0; i < n; i++){
		for (int j = i+1; j < n; j++){
			if (arr[j] > arr[i]){
				swap(arr[j], arr[i]);
			}
		}
	}
	
	
	for (int i = 0; i < n; i++){
		if(arr[i] < 10){
			cout << arr[i] << " ";
		}
	}
}

void ispisiDvocifreneRastuci(int arr[], int n){
	for (int i = 0; i < n; i++){
		for (int j = i+1; j < n; j++){
			if (arr[j] > arr[i]){
				swap(arr[j], arr[i]);
			}
		}
	}
	
	
	for (int i = 0; i < n; i++){
		if(arr[i] > 9 && arr[i] < 100){
			cout << arr[i] << " ";
		}
	}
}


void ispisiJednocifreneOpadajuci(int arr[], int n){
	for (int i = 0; i < n; i++){
		for (int j = i+1; j < n; j++){
			if (arr[j] < arr[i]){
				swap(arr[j], arr[i]);
			}
		}
	}
	
	
	for (int i = 0; i < n; i++){
		if(arr[i] < 10){
			cout << arr[i] << " ";
		}
	}
}

void ispisiDvocifreneOpadajuci(int arr[], int n){
	for (int i = 0; i < n; i++){
		for (int j = i+1; j < n; j++){
			if (arr[j] < arr[i]){
				swap(arr[j], arr[i]);
			}
		}
	}
	
	
	for (int i = 0; i < n; i++){
		if(arr[i] > 9 && arr[i] < 100){
			cout << arr[i] << " ";
		}
	}
}

int main(int argc, char** argv) {
	int n;
	
	cout << "Unesite dimenzije niza: ";
	cin >> n;
	
	int arr[n];
	
	unesiNiz(arr, n);
	
	ispisiJednocifreneRastuci(arr, n);
	cout << endl;
	ispisiDvocifreneRastuci(arr, n);
	cout << endl << endl;
	ispisiJednocifreneOpadajuci(arr, n);
	cout << endl;
	ispisiDvocifreneOpadajuci(arr, n);
	
	return 0;
}
