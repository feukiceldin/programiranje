#include <iostream>
using namespace std;

int main(int argc, char** argv) {

	int n;
	int pParnih = 1;
	int pTri = 1;
	
	p: cout << "Unesite dimenzije niza: ";
	cin >> n;
	
	if (n >= 10){
		cout << "Unesite manju dimenziju." << endl;
		goto p;
	}	
	
	int arr[n];
	
	for (int i = 0; i < n; i++){
		cout << "A[" << i << "]: ";
		cin >> arr[i];
	}
	
	for (int i = 0; i < n; i++){
		pParnih = (arr[i] % 2 == 0 && arr[i] != 0) ? pParnih*arr[i] : pParnih;
		pTri = (arr[i] % 3 == 0 && arr[i] != 0) ? pTri*arr[i] : pTri;
	}
	
	if (pParnih > pTri){
		cout << "Veci je proizvod parnih elemenata: " << pParnih;
	} else if (pParnih < pTri){
		cout << "Veci je proizvod elemenata djeljivih sa tri: " << pTri;
	} else {
		cout << "Proizvodi su jednaki: " << pParnih << " i " << pTri;
	}

	return 0;
}
