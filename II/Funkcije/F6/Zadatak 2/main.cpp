#include <iostream>
using namespace std;

void unesiNiz(int arr[], int n){	
	for (int i = 0; i < n; i++){
		printf("Unesite %d. broj: ", i+1);
		cin >> arr[i];
	}
}

int maxi(int arr[], int n);

int main(int argc, char** argv) {
	int n;
	
	p: cout << "Unesite n: ";
	cin >> n;
	
	int arr[n];
	
	unesiNiz(arr, n);
	
	cout << "Maksimalni element niza je: " << maxi(arr, n);
	
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
