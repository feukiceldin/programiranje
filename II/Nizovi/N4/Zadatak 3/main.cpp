#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {

	int n;
	int p = 1;
	
	cout << "Unesite dimenzije niza: ";
	cin >> n;
	
	srand(time(0));
	
	int arr[n];
	
	for (int i = 0; i < n; i++){
		arr[i] = rand() % 20;
	}
	
	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
		p = arr[i] % 3 == 0 ? p*arr[i] : p;
	}
	
	cout << endl << "Proizvod clanova niza je: " << p;

	return 0;
}
