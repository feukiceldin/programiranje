#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int n;
	int sum = 0;
	int p = 1;
	
	cout << "Unesite n: ";
	cin >> n;
	
	int arr[n];
	
	for (int i = 0; i < n; i++){
		cout << "A[" << i << "]: ";
		cin >> arr[i];
		sum += arr[i];
	}
	
	double ar = (double)sum/(double)n;
	
	cout << "Aritmeticka sredina niza: " << ar << endl;
	cout << "Clanovi niza veci od aritmeticke sredine su: ";
	
	for (int i = 0; i < n; i++){
		if (arr[i] > ar){
			cout << arr[i] << " ";
			p*=arr[i];
		}
	}
	
	cout << endl << "Proizvod je: " << p;
	
	return 0;
}
