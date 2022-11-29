#include <iostream>
using namespace std;

int n, sum;

int main(int argc, char** argv) {
	
	sum = 0;
	
	cout << "Unesite koliko brojeva zelite da se sabere u sumu: ";
	cin >> n;
	
	for (int i = 1; i <= n; i++){
		sum += i;
	}
	
	cout << "Suma " << n << " prvih brojeva je: " << sum;
	
	return 0;
}
