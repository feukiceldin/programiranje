#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
	
	int n;
	
	p: cout << "Unesite dimenzije niza: ";
	cin >> n;
	
	if (n > 100 || n < 2){
		goto p;
	}
	
	int a[n];
	int b[n];
	
	cout << "Niz A: " << endl;
	for (int i = 0; i < n; i++){
		printf("A[%d]: ", i);
		cin >> a[i];
	}
	
	cout << "Niz B: " << endl;
	for (int i = 0; i < n; i++){
		printf("A[%d]: ", i);
		cin >> b[i];
	}
	
	int c[n];
	
	cout << "Novodobiveni niz je:";
	for (int i = 0; i < n; i++){
		c[i] = a[i] < b[i] ? a[i] : a[i] > b[i] ? b[i] : 13;
	}
	
	for (int i = 0; i < n; i++){
		cout << setw(3) << c[i];
	}
	
	return 0;
}
