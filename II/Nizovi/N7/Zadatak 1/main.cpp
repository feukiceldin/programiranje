#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
		
	int arr[] = {16, 11, 5, 8, 10};
	
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 4; j++){
			if (arr[j] > arr[j+1]){
				swap(arr[j], arr[j+1]);
			}
		}
	}
	
	cout << "Sortirani niz: " << endl;
	for (int i = 0; i < 5; i++){
		cout << arr[i] << setw(3);
	}
	
	return 0;
}
