#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {

	int n;
	
	cout << "Unesite dimenzije niza: ";
	cin >> n;
	
	srand(time(0));
	
	int a[n];
	int b[n];
	
	for (int i = 0; i < n; i++){
		a[i] = rand() % 20;
		b[i] = rand() % 20;
	}
	
	int c[n];
	
	for (int i = 0; i < n; i++){
		c[i] = a[i] <= b[i] ? a[i]+b[i] : a[i]-b[i];
	}
	
	cout << "Niz A: ";
	for (int i = 0; i < n; i++){
		cout << setw(5) << a[i];
	} 
	
	cout << endl << "Niz B: ";
	for (int i = 0; i < n; i++){
		cout << setw(5) << b[i];
	} 
	
	cout << endl << "Niz C: ";
	for (int i = 0; i < n; i++){
		cout << setw(5) << c[i];
	}
	
	return 0;
}
