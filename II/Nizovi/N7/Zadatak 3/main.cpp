#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
		
	srand(time(0));
	
	int arr[10];
	
	for (int i = 0; i < 10; i++){
		arr[i] = rand() % 11;
	}
	
	cout << "Generisani niz: " << endl;
	for (int i = 0; i < 10; i++){
		cout << arr[i] << setw(3);
	}
	
	for(int i = 0; i < 10; i++){
		for (int j = 0; j < 9; j++){
			if (arr[j] < arr[j+1]){
				swap(arr[j], arr[j+1]);
			}
		}
	}
	
	cout << endl << "Sortirani niz: " << endl;
	for (int i = 0; i < 10; i++){
		cout << arr[i] << setw(3);
	}
	
	return 0;
}
