#include <iostream>
using namespace std;

int maxi(int arr[], int n);
int mini(int arr[], int n);

int main(int argc, char** argv) {
	int n;
	
	p: cout << "Unesite n: ";
	cin >> n;
	
	if (n > 100){
		cout << "Maksimalna duzina niza je 100!" << endl;
		goto p; 
	}
	
	int arr[n];
	
	for (int i = 0; i < n; i++){
		printf("Unesite %d. broj: ", i+1);
		cin >> arr[i];
	}
	
	cout << "Najveci element u nizu je " << maxi(arr, n) << endl;
	cout << "Najmanji element u nizu je " << mini(arr, n) << endl;

	return 0;
}

int maxi(int arr[], int n){
	int max = arr[0];
	for (int i = 1; i < n; i++){
		if (arr[i] > max){
			max = arr[i];
		} 
	} return max;
}

int mini(int arr[], int n){
	int min = arr[0];
	for (int i = 1; i < n; i++){
		if (arr[i] < min){
			min = arr[i];
		} 
	} return min;
}
