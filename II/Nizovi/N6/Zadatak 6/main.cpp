#include <iostream>
using namespace std;

int main(int argc, char** argv) {

	int n;
	int sum = 0;
	bool nula = false;

	cout << "Unesite dimenzije niza: ";
	cin >> n;
	
	int arr[n];
	
	for (int i = 0; i < n; i++){
		printf("X[%d]: ", i);
		cin >> arr[i];
	}
	
	for (int i = 0; i < n; i++){
		if (arr[i] == 0){
			nula = !(nula);
		}
		if (nula){
			sum+=arr[i];
		}
	}
	
	cout << "Suma elemenata niza izmedju prve dvije nule je: " << sum;

	return 0;
}
