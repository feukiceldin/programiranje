#include <iostream>
using namespace std;

void unesiNiz(int arr[], int n){
	cout << "Unesite niz: " << endl;
	for (int i = 0; i < n; i++){
		cout << "Niz[" << i << "]: ";
		cin >> arr[i];
	}
}

void ispisiNule(int arr[], int n){
	cout << endl;
	for (int i = 0; i < n; i++){
		if (arr[i] == 0){
			cout << arr[i] << " ";
		}
	}
}

void ispisiPoz(int arr[], int n){
	cout << endl;
	for (int i = 0; i < n; i++){
		if (arr[i] > 0){
			cout << arr[i] << " ";
		}
	}
}

void ispisiNeg(int arr[], int n){
	cout << endl;
	for (int i = 0; i < n; i++){
		if (arr[i] < 0){
			cout << arr[i] << " ";
		}
	}
}

int main(int argc, char** argv) {
	int n;
	
	p: cout << "Unesite dimenzije niza: ";
	cin >> n;
	
	if (n > 20){
		cout << "Prevelike dimenzije niza!" << endl;
		goto p;
	}
	
	int arr[n];
	
	unesiNiz(arr, n);
	
	ispisiNule(arr, n);
	ispisiPoz(arr, n);
	ispisiNeg(arr, n);	
	
	return 0;
}
