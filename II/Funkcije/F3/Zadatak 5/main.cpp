#include <iostream>
using namespace std;

int faktorijel (int n){
	if (n >= 1){
		return n*faktorijel(n-1);
	} else {
		return 1;
	}
}

int main(int argc, char** argv) {
	
	int n;
	
	cout << "Unesite n: ";
	cin >> n;
	
	printf("Faktorijel broja %d je %d", n, faktorijel(n));	
	
	return 0;
}
