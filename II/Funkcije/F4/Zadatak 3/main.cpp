#include <iostream>
using namespace std;

void ispisiNajmanji(int arr[], int n);

int main(int argc, char** argv) {
	
	int n;
	int i = 0;
	
	cout << "Unesite koliko hocete brojeva: ";
	cin >> n;
	
	int arr[n];
	while (i < n){
		cout << "Unesite " << i+1 << ". broj: ";
		
		cin >> arr[i++];
	}
	
	ispisiNajmanji(arr, n);
	
	return 0;
}

void ispisiNajmanji(int arr[], int n){
	int min = arr[0];
	for (int i = 1; i < n; i++){
		if (arr[i] < min){
			min = arr[i];
		}
	}
	
	cout << "Najmanji broj od unesenih je: " << min;
}
