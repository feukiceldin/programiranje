#include <iostream>
using namespace std;

long long broj;
int i = 0;

int main(int argc, char** argv) {
	
	cout << "Unesite prirodni broj: ";
	cin >> broj;
	
	while (broj > 0){
		broj /= 10;
		i++;		
	}
	
	cout << "Broj ima " << i << " cifara.";
	
	return 0;
}
