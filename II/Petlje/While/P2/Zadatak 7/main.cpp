#include <iostream>
#include <cmath>
using namespace std;

int n;
int i = 1;
int pr = 1;

int main(int argc, char** argv) {

	cout << "Unesite koliko brojeva zelite za proizvod: ";
	cin >> n;
	
	n = abs(n);
	
	while (i <= n){
		pr*=i++;
	}
	
	cout << "Proizvod prvih " << n << " brojeva je: " << pr;
	
	return 0;
}
