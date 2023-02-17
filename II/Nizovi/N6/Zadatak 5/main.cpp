#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
	
	int n;
	
	cout << "Unesite n: ";
	cin >> n;
	
	int fib[n];
	fib[0] = 1;
	fib[1] = 1;
	
	for (int i = 2; i < n; i++){
		fib[i] = fib[i-1] + fib[i-2];
	}
	
	cout << "Fibonacijev niz od " << n << " elemenata je: " << endl;
	for (int i = 0; i < n; i++){
		cout << fib[i] << setw(3);
	}
	
	return 0;
}
