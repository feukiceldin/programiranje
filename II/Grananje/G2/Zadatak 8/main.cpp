#include <iostream>
#include <cmath>
using namespace std;

int broj, cs, cd, cj;

int main(int argc, char** argv) {
	
	cout << "Unesite trocifreni broj: ";
	cin >> broj;
	
	cs = broj/100;
	cd = (broj/10)%10;
	cj = broj%10;
	
	if (broj > 999 || broj < 100){
		cout << "Broj mora biti trocifren. Pokusajte ponovo" << endl;
		cout << "Unesite trocifreni broj: ";
		cin >> broj;
	}
	if (broj == pow(cj,3) + pow(cd,3) + pow(cs,3)){
		cout << "Broj je Armstrongov.";
	} else {
		cout << "Broj nije Armstrongov.";
	}
	
	
	return 0;
}
