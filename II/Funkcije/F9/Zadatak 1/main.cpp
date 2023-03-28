#include <iostream>
using namespace std;

void presloziNiz(int arr[], int n, int m){
	for (int i = 0; i < n; i++){
		if (arr[i] < m){
			arr[i] = 0;
		}
	}
}

void unesiNiz(int arr[], int n){
	cout << "Unesite niz: " << endl;
	for (int i = 0; i < n; i++){
		cout << "Niz[" << i << "]: ";
		cin >> arr[i];
	}
}

void ispisiNiz(int arr[], int n){
	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
}

int main(int argc, char** argv) {
	int n, m;
	
	cout << "Unesite dimenzije niza: ";
	cin >> n;
	
	cout << "Unesite cijeli broj: ";
	cin >> m;
	
	int arr[n];
	
	unesiNiz(arr, n);
	
	presloziNiz(arr, n, m);
	
	cout << "Preslozen niz: ";	
	ispisiNiz(arr, n);
	
	return 0;
}
