#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int arr[10];
	
	for (int i = 0; i < 10; i++){
		cout << "Unesite A[" << i << "]: ";
		cin >> arr[i];
	}
	
	cout << "Ispis parnih elemenata niza: " << endl;
	for (int i = 0; i < 10; i++){
		if (arr[i] % 2 == 0){
			cout << arr[i] << " ";
		}
	}
	
	cout << endl << "Ispis neparnih elemenata niza: " << endl;
	for (int i = 0; i < 10; i++){
		if (arr[i] % 2 == 1){
			cout << arr[i] << " ";
		}	
	}
	
	return 0;
}
