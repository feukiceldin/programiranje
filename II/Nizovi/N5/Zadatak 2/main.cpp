#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int n;
	int manjiPrvi = 0;
	int veciZadnji = 0;
	
	cout << "Unesite dimenzije niza: ";
	cin >> n;
	
	int arr[n];
	
	for (int i = 0; i < n; i++){
		cout << "A[" << i << "] = ";
		cin >> arr[i];
	}
	
	for (int i = 0; i < n; i++){
		if (arr[i] < arr[0]){
			manjiPrvi++;
		}
		if (arr[i] > arr[n-1]){
			veciZadnji++;
		}
	}
	
	cout << "Clanovi niza koji su manji od prvog elementa niza: " << manjiPrvi << endl;
	cout << "Clanovi niza koji su veci od zadnjeg elementa niza: " << veciZadnji;
	
	return 0;
}
