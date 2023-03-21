#include <iostream>
using namespace std;

double prosjek(int niz[], int n){
	double sum = 0;
	for (int i = 0; i < n; i++){
		sum += niz[i];
	} return (sum/n);
}

int iznadProsjeka(int niz[], int n){
	int uk = 0;
	for (int i = 0; i < n; i++){
		if (niz[i] > prosjek(niz, n)){
			uk++;
		}
	} return uk;
}

int vrlodobroVladanje(int niz[], int n){
	int uk = 0;
	for (int i = 0; i < n; i++){
		if (niz[i] > 8 && niz[i] < 15){
			uk++;
		}
	} return uk;
}

int najmanjiBrojIzostanaka(int niz[], int n){
	int mini = niz[0];
	for (int i = 0; i < n; i++){
		if (niz[i] < mini){
			mini = niz[i];
		}
	} return mini;
}

int indeksNajvecegBrojaIzostanaka(int niz[], int n){
	int maxi = niz[0];
	int index = 0;
	for (int i = 0; i < n; i++){
		if (niz[i] > maxi){
			maxi = niz[i];
			index = i;
		}
	} return index+1;
}

int main(int argc, char** argv) {
	int n;
	
	cout << "Unesite broj ucenika: ";
	cin >> n;
	
	int arr[n];
	
	for (int i = 0; i < n; i++){
		cout << "Unesite broj izostanaka " << i+1 << ". ucenika: ";
		cin >> arr[i];
	}
	
	cout << "Prosjecni broj izostanaka: " << prosjek(arr, n) << endl;
	cout << "Broj ucenika iznad prosjeka: " << iznadProsjeka(arr, n) << endl;
	cout << "Broj ucenika koji imaju vrlodobro vladanje: " << vrlodobroVladanje(arr, n) << endl;
	cout << "Najmanji broj izostanaka: " << najmanjiBrojIzostanaka(arr, n) << endl;
	cout << "Najvise izostanaka ima ucenik pod rednim brojem: " << indeksNajvecegBrojaIzostanaka(arr, n);
	
	return 0;
}
