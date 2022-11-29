#include <iostream>
using namespace std;

double sum, uk;
int n;

int main(int argc, char** argv) {
	
	sum = 0; 
	uk = 0;
	
	cout << "Unesite od koliko brojeva zelite aritmeticku sredinu: ";
	cin >> n;
	
	for (int i = 1; i <= n; i++){
		if (i % 3 == 0){
			sum += i;
			uk++;
		}
	}
	
	cout << "Aritmeticka sredina brojeva od 1 do " << n << " djeljivih sa 3: " << sum/uk << endl;
	
	return 0;
}
