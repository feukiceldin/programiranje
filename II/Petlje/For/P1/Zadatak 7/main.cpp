#include <iostream>
using namespace std;

long p = 1;
int n;

int main(int argc, char** argv) {
	
	cout << "Unesite koliko brojeva zelite da se pomnozi u proizvod: ";
	cin >> n;
	
	for (int i = 1; i <= n; i++){
		p *= i;
	}
	
	cout << "Proizvod " << n << " prvih brojeva je: " << p;
	
	return 0;
}
