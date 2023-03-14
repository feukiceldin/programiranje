#include <iostream>
using namespace std;

int maxi(int a, int b){
	return (a > b ? a : b);
}

int main(int argc, char** argv) {
	int n, a, b;
	
	cout << "Unesite n: ";
	cin >> n;
	
	for (int i = 0; i < n; i++){
		cout << "Unesite par brojeva: ";
		cin >> a >> b;
		cout << "Veci je " << maxi(a, b) << endl;
	}
	
	return 0;
}
