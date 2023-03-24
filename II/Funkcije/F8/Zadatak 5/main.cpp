#include <iostream>
using namespace std;

int proiz(int n){
	if (n == 2){
		return 2;
	} else {
		if (n % 2 == 1){
			return proiz(n-1);
		} else {
			return n * proiz(n-2);
		}
	}
}

int main(int argc, char** argv) {
	int n;
	
	cout << "Unesite n: ";
	cin >> n;
	
	cout << "Proizvod parnih brojeva do " << n << " je " << proiz(n);
		
	return 0;
}
