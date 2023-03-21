#include <iostream>
#include <cmath>
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

void obradiNiz(int niz[], int n){
	for (int i = 0; i < n; i++){
		niz[i] = niz[i] > 0 ? pow(niz[i], 2) : -niz[i];
	}
}

int main(int argc, char** argv) {
	int n;
	
	cout << "Unesite n: ";
	cin >> n;
	
	int arr[n];
	
	unesiNiz(arr, n);
	obradiNiz(arr, n);
	ispisiNiz(arr, n);	
	
	return 0;
}
