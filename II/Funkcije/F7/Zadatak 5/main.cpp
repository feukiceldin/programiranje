#include <iostream>
using namespace std;

bool sadrzi(int x, int c);

int main(int argc, char** argv) {
	int n, cifra;
	
	cout << "Unesite broj: ";
	cin >> n;
	
	cout << "Unesite cifru: ";
	cin >> cifra;
	
	cout << (sadrzi(n, cifra) ? "Cifra se nalazi u broju" : "Cifra se ne nalazi u broju");
	
	return 0;
}

bool sadrzi(int x, int c){
	x = x > 0 ? x : -x;
	while (x != 0){
		if (x%10 == c){
			return true;
		} 
		x /= 10;
	}
}
