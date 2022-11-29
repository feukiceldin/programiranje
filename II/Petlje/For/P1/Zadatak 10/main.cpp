#include <iostream>
using namespace std;

int sum, k;

int main(int argc, char** argv) {
	
	sum = 0;
	cout << "Racunanje sume brojeva djeljivih sa 3 i sa 7" << endl;
	cout << "Unesite zavrsnu vrijednost raspona: ";
	cin >> k;
	
	for (int i = 1; i <= k; i++){
		if (i % 7 == 0 && i % 3 == 0){
			sum += i;
		}
	}
	
	cout << "Suma brojeva od 1 do " << k << " djeljivih sa 3 i sa 7: " << sum;
	
	return 0;
}
