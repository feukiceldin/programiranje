#include <iostream>
using namespace std;

int faktorijel(int n){
	if (n == 1){
		return 1;
	} else {
		return n * faktorijel(n-1);
	}
}

int main(int argc, char** argv) {
	int broj;
	
	cout << "Unesite broj: ";
	cin >> broj;
	
	cout << "Faktorijel broja 5 je " << faktorijel(broj);
	
	return 0;
}
