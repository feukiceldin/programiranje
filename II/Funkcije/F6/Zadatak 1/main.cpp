#include <iostream>
using namespace std;

int zbir(int arr[], int n);

int main(int argc, char** argv) {
	int n;
	
	p: cout << "Unesite n: ";
	cin >> n;
	
	if (n > 20){
		cout << "Maksimalna duzina niza je 20!" << endl;
		goto p;
	}
	
	int arr[n];
	
	for (int i = 0; i < n; i++){
		printf("Unesite %d. broj: ", i+1);
		cin >> arr[i];
	}

	cout << "Suma elemenata niza je " << zbir(arr, n);

	return 0;
}

int zbir(int arr[], int n){
	int sum = 0;
	for (int i = 0; i < n; i++){
		sum+=arr[i];
	} return sum;
}
