#include <iostream>
using namespace std;

float aritmetickaSredina(int n);

int main(int argc, char** argv) {
	int n;
	
	cout << "Unesite cijeli broj: ";
	cin >> n;	
	
	cout << "Aritmeticka sredina njegovih cifara je: " << aritmetickaSredina(n);
	
	return 0;
}

float aritmetickaSredina(int n){
	n = n > 0 ? n : -n;
	int sum = 0;
	int cifra = 0;
	while (n != 0){
		sum += n%10;
		cifra++;
		n/=10;
	} return (float)sum/(float)cifra;
}
