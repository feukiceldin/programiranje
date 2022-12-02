#include <iostream>
#include <cmath>
using namespace std;

int n;
int i = 1;
int sum = 0;

int main(int argc, char** argv) {
	
	cout << "Unesite koliko brojeva zelite za sumu: ";
	cin >> n;
	
	n = abs(n);
	
	while (i <= n){
		sum+=i++;
	}
	
	cout << "Suma prvih " << n << " brojeva je: " << sum;
	
	return 0;
}
