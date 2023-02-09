#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int n;
	int sum;
	int i = 0;
	
	cout << "Unesite broj elemenata niza: ";
	cin >> n;
	
	int arr[n];
	
	while (i < n){
		cout << "Unesite A[" << i << "]: ";
		cin >> arr[i];
		i++;
	}
	
	for (int i = 0; i < n; i++){
		sum+=arr[i];
	}
	
	cout << "Suma clanova niza je: " << sum;
	
	return 0;
}
