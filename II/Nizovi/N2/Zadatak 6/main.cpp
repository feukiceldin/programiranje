#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
	
	int arr[10];
	
	for (int i = 0; i < 10; i++){
		cout << "Unesite A[" << i << "]: ";
		cin >> arr[i];
	}
	
	cout << "Ispis kvadrata elemenata niza: " << endl;
	
	for (int i = 0; i < 10; i++){
		cout << "A[" << i << "] = " << pow(arr[i], 2) << endl;		
	}
	
	return 0;
}
