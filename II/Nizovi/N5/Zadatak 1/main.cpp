#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int arr[5];
	
	for (int i = 0; i < 5; i++){
		cout << "A[" << i << "] = ";
		cin >> arr[i];
	}
	
	for (int i = 4; i > 0; i--){
		if (arr[i] > arr[i-1]){
			cout << "opada ";
		} else if (arr[i] < arr[i-1]){
			cout << "raste ";
		} else {
			cout << "isto ";
		}
	}
	
	return 0;
}
