#include <iostream>
using namespace std;

int n;
long long p;

int main(int argc, char** argv) {
	
	p = 1;
	
	cout << "Unesite zavrsnu granicu raspona: ";
	cin >> n;
	
	for (int i = 1; i <=5 n; i++){
		if (i % 2 != 0){
			p *= i;	
		}
	}
	
	cout << "Proizvod neparnih brojeva od 1 do " << n << ": " << p;
	
	
	return 0;
}
