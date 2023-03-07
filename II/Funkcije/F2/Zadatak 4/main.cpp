#include <iostream>
#include <cmath>
using namespace std;

int stepen(int, int);

int main(int argc, char** argv) {
	
	int x, y;
	
	while (true){
	
		cout << "Unesite par (x, y): ";
		cin >> x >> y;
		
		if (x == 0 && y == 0){
			cout << "Kraj unosa";
			break;
		}
	
		cout << "Rezultat je: " << stepen(x, y) << endl;
	} 
		
	return 0;
}

int stepen(int a, int b){
	return pow(a, b);
}
