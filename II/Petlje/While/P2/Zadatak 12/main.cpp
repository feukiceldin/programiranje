#include <iostream>
using namespace std;

int n;
int i = 1;
long pr = 1;

int main(int argc, char** argv) {
	
	cout << "Unesite koliko brojeva zelite za proizvod: ";
	cin >> n;
	
	while (i <= n){
		if(i % 2 != 0){
			pr*=i;
		} i++;
	}	
	
	cout << "Proizvod neparnih brojeva od 1 do " << n << " je: " << pr;
	
	return 0;
}
