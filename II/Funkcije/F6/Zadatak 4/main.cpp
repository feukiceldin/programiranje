#include <iostream>
using namespace std;

int sumaParnih(int arr[], int n);
int sumaNeparnih(int arr[], int n);

int main(int argc, char** argv) {
	int n;
	
	p: cout << "Unesite n: ";
	cin >> n;
	
	if (n > 10){
		cout << "Maksimalna duzina niza je 10!" << endl;
		goto p; 
	}
	
	int arr[n];
	
	for (int i = 0; i < n; i++){
		printf("Unesite %d. broj: ", i+1);
		cin >> arr[i];
	}
	
	cout << "Suma parnih elemenata niza: " << sumaParnih(arr, n) << endl;
	cout << "Suma neparnih elemenata niza: " << sumaNeparnih(arr, n) << endl;
	
	return 0;
}

int sumaParnih(int arr[], int n){
	int sum = 0;
	for (int i = 0; i < n; i++){
		if (arr[i] % 2 == 0){
			sum+=arr[i];
		}
	} return sum;
}

int sumaNeparnih(int arr[], int n){
	int sum = 0;
	for (int i = 0; i < n; i++){
		if (arr[i] % 2 != 0){
			sum+=arr[i];
		}
	} return sum;
}
