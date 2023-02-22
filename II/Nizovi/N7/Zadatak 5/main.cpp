#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
	
	int n;
	int j = 0;
	int uk = 0;
	
	cout << "Unesite dimenzije niza: ";
	cin >> n;
	
	if (n > 20 || n < 10){
		cout << "Neispravan unos!" << endl;
	}
	
	int arr[n];
	
	srand(time(0));
	
	for(int i = 0; i < n; i++){
		arr[i] = rand() % 10;
		if (arr[i] % 3 == 0){
			uk++;
		}
	}
	
	cout << "Generisani niz: " << endl;
	for (int i = 0; i < n; i++){
		cout << arr[i] << setw(3);
	}
	
	cout << endl;

	int arrB[n-uk];

	for (int i = 0; i < n; i++){
		if (arr[i] % 3 != 0){
			arrB[j++] = arr[i];
		}
	}
	
	cout << "Novoformirani niz: " << endl;
	for (int i = 0; i < n-uk; i++){
		cout << arrB[i] << setw(3);
	}
	
	cout << endl << "Novosortirani niz: " << endl;
	for (int i = 0; i < n-uk; i++){
		for (int j = i+1; j < n-uk; j++){
			if (arrB[i] > arrB[j]){
				swap(arrB[i], arrB[j]);
			}
		}
	}
	
	for (int i = 0; i < n-uk; i++){
		cout << arrB[i] << setw(3);
	}
	
	return 0;
}
