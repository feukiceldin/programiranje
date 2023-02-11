#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	
	int broj;
	int arr[10];
	
	srand(time(0));
	
	cout << "Generisani niz: " << endl;
	
	for (int i = 0; i < 10; i++){
		arr[i] = rand() % 10;
		cout << arr[i] << " ";
	}
	
	cout << endl << "Unesite broj: ";
	cin >> broj;
	
	cout << "Pozicije na kojima se nalazi broj " << broj << " su: ";
	
	for (int i = 0; i < 10; i++){
		if (arr[i] == broj){
			cout << i << " ";
		}
	}
	
	return 0;
}
