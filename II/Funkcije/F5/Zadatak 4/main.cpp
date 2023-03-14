#include <iostream>
using namespace std;

void djelitelj(int n, int d){
	for (int i = 1; i < n; i++){
		if (i % d == 0){
			cout << i << " ";
		}
	}
}

int main(int argc, char** argv) {
	int n, d;
	
	cout << "Unesite n: ";
	cin >> n;
	
	cout << "Unesite d: ";
	cin >> d;
	
	djelitelj(n, d);
	
	return 0;
}
