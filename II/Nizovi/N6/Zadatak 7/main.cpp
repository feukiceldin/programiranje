#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
	
	int n;
	int j = 0;
	int k = 0;
	
	cout << "Unesite dimenzije niza: ";
	cin >> n;
	
	int arr[2*n];
	
	for (int i = 0; i < 2*n; i++){
		printf("A[%d]: ", i);
		cin >> arr[i];
	}
	
	int barr[n];
	int carr[n];
	
	for (int i = 0; i < 2*n; i++){
		if (i % 2 != 0){
			barr[j] = arr[i];	
			j++;
		} else {
			carr[k] = arr[i];	
			k++;
		}
	}

	cout << "Niz A: ";
	for (int i = 0; i < 2*n; i++){
		cout << arr[i] << setw(5);
	}

	cout << endl << "Niz B: ";
	for (int i = 0; i < n; i++){
		cout << barr[i] << setw(5);
	}
	
	cout << endl << "Niz C: ";
	for (int i = 0; i < n; i++){
		cout << carr[i] << setw(5);
	}
		
	return 0;
}
