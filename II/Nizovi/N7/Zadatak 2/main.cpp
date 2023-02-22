#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
	
	int arr[] = {16, 11, 5, 8, 10};
	
	for (int i = 0; i < 5; i++){
		for (int j = i+1; j < 5; j++){
			if (arr[i] > arr[j]){
				swap(arr[i], arr[j]);
			}
		}
	}
	
	cout << "Sortirani niz: " << endl;
	for (int i = 0; i < 5; i++){
		cout << arr[i] << setw(3);
	}
	
	return 0;
}
