#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int a[2][3];
	
	cout << "Unesite koeficijente linearnih jednacina: ";
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 3; j++){
			cin >> a[i][j];
		}
	}
	
	int d = a[0][0]*a[1][1] - a[0][1]*a[1][0];
	
	if (d == 0){
		cout << "Nema rjesenja.";
		return 0;
	}
	
	int dx = a[0][2]*a[1][1] - a[0][1]*a[1][2];
	int dy = a[0][0]*a[1][2] - a[0][2]*a[1][0];
	
	int x = dx / d;
	int y = dy / y;
	
	cout << "Rezultat je x = " << x << " i y = " << y;
	
	return 0;
}