#include <iostream>
#include <cmath>
using namespace std;

int cj, cd, cs;
int broj = 100;

int main(int argc, char** argv) {
	
	cout << "Trocifreni Armstrongovi brojevi su: ";
	while (broj < 1000){
		cj = broj%10;
		cd = (broj/10)%10;
		cs = broj/100;
		
		if ((pow(cj, 3) + pow(cd, 3) + pow(cs, 3)) == broj){
			cout << broj << " ";
		}
		
		broj++;
	}
	
	return 0;
}
