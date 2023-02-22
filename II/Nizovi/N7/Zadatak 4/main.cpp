#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
	
	int n;
	
	cout << "Unesite dimenzije niza: ";
	cin >> n;
	
	if (n > 20 || n < 10){
		cout << "Neispravan unos!" << endl;
	}
	
	int arr[n];
	
	srand(time(0));
	
	for(int i = 0; i < n; i++){
		arr[i] = rand() % 10;
	}
	
	cout << "Generisani niz: " << endl;
	for (int i = 0; i < n; i++){
		cout << arr[i] << setw(3);
	}
	
	cout << endl;
	
	for (int i = n-8; i < n; i++){
		for (int j = i+1; j < n; j++){
			if (arr[j] < arr[i]){
				swap(arr[j], arr[i]);
			}
		}
	}
	
	cout << "Sortirani niz: " << endl;
	for (int i = 0; i < n; i++){
		cout << arr[i] << setw(3);
	}
	
	return 0;
}
