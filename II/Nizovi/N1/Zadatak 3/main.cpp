#include <iostream>
using namespace std;

int main(int argc, char** argv) {

	int A[10];
	for (int i = 0; i < 10; i++){
		cout << "Unesite A[" << i << "]: ";
		cin >> A[i]; 
	}
	
	cout << endl;
	
	for (int i = 9; i > -1; i--){
		cout << "A[" << i << "] = " << A[i] << endl;
	}

	return 0;
}
