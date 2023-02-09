#include <iostream>
using namespace std;

int n;

int main(int argc, char** argv) {
	
	p: cout << "Unesite dimenzije niza: ";
	cin >> n;
	
	if (n < 2){
		cout << "Neispravna dimenzija niza!" << endl;
		goto p;
	}
	
	int arr[n];
	
	for (int i = 0; i < n; i++){
		cout << "Unesite A[" << i << "]: ";
		cin >> arr[i];
	}
	
	cout << "Elementi niza koji nisu djeljivi sa 3: " << endl;
	
	for (int i = 0; i < n; i++){
		if (arr[i] % 3 != 0){
			cout << "A[" << i << "] = " << arr[i] << endl;
		}		
	}	
	
	return 0;
}
