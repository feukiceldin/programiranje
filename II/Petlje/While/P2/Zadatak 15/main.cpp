#include <iostream>
using namespace std;

int n;
int i = 1;
double sum = 0;
double uk = 0;

int main(int argc, char** argv) {
	
	cout << "Unesite od koliko brojeva zelite aritmeticku sredinu: ";
	cin >> n;
	
	while (i <= n){
		if (i % 3 == 0){
			sum+=i;
			uk++;
		} i++;
	}
	
	cout << "Aritmeticka sredina prvih " << n << " brojeva djeljivih sa 3 je: " << sum/uk;
	
	return 0;
}
