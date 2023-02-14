#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int n;
	int max;
	
	cout << "Unesite dimenzije niza: ";
	cin >> n;
	
	int arr[n];
	
	for (int i = 0; i < n; i++){
		cout << "A[" << i << "] = ";
		cin >> arr[i];
	}
	
	max = arr[0];
	
	for (int i = 1; i < n; i++){
		if (max < arr[i] && i % 2 == 0){
			max = arr[i];
		}
	}
	
	cout << "Maksimum clanova sa parnim indeksom: " << max;
	
	return 0;
}
