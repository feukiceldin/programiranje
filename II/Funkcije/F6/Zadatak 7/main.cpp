#include <iostream>
using namespace std;

void unesiNiz(int arr[], int n);
void ispisiNiz(int arr[], int n);
void sortirajNiz(int arr[], int n);

int main(int argc, char** argv) {
	int n;
	
	p: cout << "Unesite n: ";
	cin >> n;
	
	if (n > 20){
		cout << "Maksimalna duzina niza je 20!" << endl;
		goto p; 
	}
	
	int arr[n];
	
	unesiNiz(arr, n);
	
	sortirajNiz(arr, n);
	
	ispisiNiz(arr, n);	
	
	return 0;
}

void unesiNiz(int arr[], int n){
	for (int i = 0; i < n; i++){
		printf("Unesite %d. broj: ", i+1);
		cin >> arr[i];
	}
}

void ispisiNiz(int arr[], int n){
	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
}

void sortirajNiz(int arr[], int n){
	for (int i = 0; i < n; i++){
		for (int j = i+1; j < n; j++){
			if (arr[j] < arr[i]){
				swap(arr[j], arr[i]);
			}
		}
	}
}
