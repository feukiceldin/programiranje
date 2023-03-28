#include <iostream>
using namespace std;

float maxBroj(float arr[], int n){
	float max = arr[0];
	for (int i = 1; i < n; i++){
		if (arr[i] > max){
			max = arr[i];
		}
	} return max;
}

void urediNiz(float arr[], int n){
	for (int i = 0; i < n; i++){
		arr[i] = arr[i]/maxBroj(arr, n);
	}
}

void unesiNiz(float arr[], int n){
	cout << "Unesite niz: " << endl;
	for (int i = 0; i < n; i++){
		cout << "Niz[" << i << "]: ";
		cin >> arr[i];
	}
}

void ispisiNiz(float arr[], int n){
	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
}

int main(int argc, char** argv) {
	int n;
	
	cout << "Unesite dimenzije niza: ";
	cin >> n;
	
	float arr[n];
	
	unesiNiz(arr, n);
	
	cout << "Najveci element niza je: " << maxBroj(arr, n) << endl;
	
	urediNiz(arr, n);
	
	ispisiNiz(arr, n);	
	
	return 0;
}
