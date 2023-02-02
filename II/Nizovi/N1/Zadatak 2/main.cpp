#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int A[6];
	for (int i = 0; i < 6; i++){
		cout << "Unesite A[" << i << "]: ";
		cin >> A[i]; 
	}
	
	cout << endl;
	
	for (int i = 0; i < 6; i++){
		cout << "A[" << i << "] = " << A[i] << " ";
	}
	
	
	return 0;
}
