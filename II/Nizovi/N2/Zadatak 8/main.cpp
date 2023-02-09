#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int arr[10];
	
	for (int i = 0; i < 10; i++){
		cout << "Unesite vrijednost A[" << i << "]: ";
		cin >> arr[i];
	}
	
	cout << "Aritmeticka sredina susjednih brojeva: " << endl;
	
	for (int i = 0; i < 9; i++){
		cout << (double) (arr[i]+arr[i+1])/2 << " ";
	}
	
	return 0;
}
