#include <iostream>
using namespace std;

int n;
int i = 1;
int sum = 0;

int main(int argc, char** argv) {
	
	cout << "Unesite koliko brojeva zelite za sumu: ";
	cin >> n;
	
	while (i <= n){
		if(i % 3 == 0 && i % 7 == 0){
			sum+=i;
		} i++;
	}	
	
	cout << "Suma prirodnih brojeva od 1 do " << n << " je: " << sum;
	
	return 0;
}
