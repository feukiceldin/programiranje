#include <iostream>
#include <cmath>
using namespace std;

bool prost (int broj){
	if (broj == 1 || broj == 2){
		return true;
	}
	for (int i = 2; i < broj/2; i++){
		if (broj % i == 0){
			return false;
		}
	} return true;
}

bool cifreRastuce (int broj){
	int cifra = broj%10;
	broj /= 10;
	while (broj != 0){
		if (((broj % 10) > cifra) || cifra == broj%10){
			return false;
		} cifra = broj%10;
		broj /= 10;
	} return true;
}

int main(int argc, char** argv) {
	int a, b;
	int prostih = 0;
	
	cout << "Unesite gornju i donju granicu: ";
	cin >> a >> b;
		
	for (int i = a; i < b; i++){
		if (prost(i) && cifreRastuce(i)){
			prostih++;
		}
	}	
	
	printf("Prostih brojeva od %d do %d ima %d", a, b, prostih);
		
	return 0;
}
