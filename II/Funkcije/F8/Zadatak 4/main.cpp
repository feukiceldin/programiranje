#include <iostream>
using namespace std;

int bazaEksp(int a, int b){
	if (b == 0){
		return 1; 
	} else {
		return a * bazaEksp(a, b-1);
	}
}

int main(int argc, char** argv) {
	int a, b;
	
	cout << "Unesite bazu: ";
	cin >> a;
	
	cout << "Unesite eksponent: ";
	cin >> b;
	
	printf("%d na %d je %d", a, b, bazaEksp(a, b));
	
	return 0;
}
