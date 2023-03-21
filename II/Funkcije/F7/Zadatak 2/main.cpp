#include <iostream>
using namespace std;

void unesiNiz(int niz[], int n){
	for (int i = 0; i < n; i++){
		printf("Unesite %d. element niza: ", i+1);
		cin >> niz[i];
	}
}

void ispisiNiz(int niz[], int n){
	for (int i = 0; i < n; i++){
		cout << niz[i] << " ";
	}
}

void noviNiz(int niz[], int arr[], int n){
	for (int i = 0; i < n; i++){
		arr[i] = niz[i] + 5;
	} 
}

int main(int argc, char** argv) {
	int n;
	
	cout << "Unesite duzinu niza: ";
	cin >> n;
	
	int arr[n];
	int arr1[n];
	
	unesiNiz(arr, n);
	noviNiz(arr, arr1, n);
	ispisiNiz(arr1, n);
	
	return 0;
}
