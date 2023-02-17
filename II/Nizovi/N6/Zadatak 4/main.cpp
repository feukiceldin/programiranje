#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
	
	int n;
	int uk = 0;
	int j = 0;
	
	cout << "Unesite dimenzije niza: ";
	cin >> n;
	
	int x[n];
	
	for (int i = 0; i < n; i++){
		printf("X[%d]: ", i);
		cin >> x[i];
		if (x[i] < 12){
			uk++;
		}
	}

	int y[uk];
	
	for (int i = 0; i < n; i++){
		if (x[i] < 12){
			y[j] = x[i];
			j++;
		}
	}	
	
	cout << "Novoformirani niz je: ";
	for (int i = 0; i < uk; i++){
		cout << setw(3) << y[i];
	}

	return 0;
}
