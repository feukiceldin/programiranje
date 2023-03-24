#include <iostream>
using namespace std;

double suma (int n){
	if (n == 1){
		return 0;
	} else {
		return 1.0/(double)n + suma(n-1);
	}
}

int main(int argc, char** argv) {
	int n;
	
	cout << "Unesite broj: ";
	cin >> n;
	
	cout << "Suma je: "	<< suma(n);
	
	return 0;
}
