#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int n;
	double sum;
	int i = 0;
	
	cout << "Unesite broj elemenata niza: ";
	cin >> n;
	
	double arr[n];
	
	while (i < n){
		cout << "Unesite A[" << i << "]: ";
		cin >> arr[i];
		i++;
	}
	
	for (int i = 0; i < n; i++){
		if (i % 2 == 0){
			sum+=arr[i];
		}
	}
	
	cout << "Suma clanova niza ciji je index paran: " << sum;
	
	return 0;
}
