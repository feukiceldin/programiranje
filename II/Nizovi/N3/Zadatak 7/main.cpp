#include <iostream>
using namespace std;

int main(int argc, char** argv) {

	int i = 0;
	int sum = 0;
	int n;
	
	p: cout << "Unesite broj elemenata niza: ";
	cin >> n;
	
	int arr[n];
	
	while (i < n){
		cout << "Unesite A[" << i << "]: ";
		cin >> arr[i];
		i++;
	}
	
	i = 0;
	
	while (arr[i] % 2 == 0){
		sum+=arr[i];
		i++;
		
		if (i >= n){
			break;
		}
	}
	
	cout << "Suma elemenata niza prije prvog neparnog: " << sum; 

	return 0;
}
