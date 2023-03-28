#include <iostream>
using namespace std;

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

double srednja(int arr[], int n){
	double sum = 0;
	for (int i = 0; i < n; i++){
		sum+=arr[i];
	} return sum/n;
}

void veciNiz(int arr[], int n){
	double srednjaVrijednost = srednja(arr, n);
	int uk = 0;
	
	for (int i = 0; i < n; i++){
		if (arr[i] > srednja(arr, n)){
			uk++;
		}
	}
	
	int arrV[uk];
		
	int j = 0;
	for (int i = 0; i < n; i++){
		if (arr[i] > srednjaVrijednost){
			arrV[j] = arr[i];
			j++;
		}
	}
	
	ispisiNiz(arrV, uk);
}

void manjiNiz(int arr[], int n){
	double srednjaVrijednost = srednja(arr, n);
	int uk = 0;
	
	for (int i = 0; i < n; i++){
		if (arr[i] < srednja(arr, n)){
			uk++;
		}
	}
	
	int arrM[uk];
	
	int j = 0;
	for (int i = 0; i < n; i++){
		if (arr[i] < srednjaVrijednost){
			arrM[j] = arr[i];
			j++;
		}
	}
	
	ispisiNiz(arrM, uk);
}

int main(int argc, char** argv) {
	int n;
	
	cout << "Unesite dimenzije niza: ";
	cin >> n;
	
	int arr[n];
	
	unesiNiz(arr, n);
	
	cout << "Srednja vrijednost niza: " << srednja(arr, n) << endl;
	
	cout << "Niz sa elementima vecim od srednje vrijednosti: " << endl;
		
	veciNiz(arr, n);
	
	cout << "\nNiz sa elementima manjim od srednje vrijednosti: " << endl;
		
	manjiNiz(arr, n);
	
	return 0;
}
