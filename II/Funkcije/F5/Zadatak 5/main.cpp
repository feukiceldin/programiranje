#include <iostream>
using namespace std;

double sredina(int a, int b, int c){
	return (((double) a + (double)b + (double)c)/3);
}

int main(int argc, char** argv) {
	int n, a, b, c;
	
	cout << "Unesite n: ";
	cin >> n;
	
	for (int i = 0; i < n; i++){
		cout << "Unesite tri broja: ";
		cin >> a >> b >> c;
		cout << "Srednja vrijednost je: " << sredina(a, b, c) << endl;
	}
	
	return 0;
}
