#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int i = 0;
	int sum = 0;
	int n;
	
	p: cout << "Unesite broj elemenata niza: ";
	cin >> n;
	
	if (n > 10){
		cout << "Prevelik niz." << endl;
		goto p;
	}
	
	int arr[n];
	
	while (i < n){
		cout << "Unesite A[" << i << "]: ";
		cin >> arr[i];
		i++;
	}
	
	for (int i = 0; i < n; i++){
		sum+=arr[i];
	}
	
	double arit = (double) sum / (double) n;
	
	cout << "Aritmeticka sredina: " << arit << endl;
	cout << "Elementi niza veci od aritmeticke sredine: " << endl;
	
	for (int i = 0; i < n; i++){
		if (arr[i] > (int) arit){
			cout << "A[" << i << "] = " << arr[i] << endl;
		}
	}
	
	return 0;
}
