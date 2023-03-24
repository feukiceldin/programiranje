#include <iostream>
using namespace std;

int sum (int n){
	if (n == 1){
		return 1;
	} else {
		return n + sum(n-1);
	}
}

int main(int argc, char** argv) {
	int n;
	
	cout << "Unesite n: ";
	cin >> n;
	
	cout << "Suma je " << sum(n);	
	
	return 0;
}
