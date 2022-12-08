#include <iostream>
#include <cmath>
using namespace std;

int broj, hold;
int sum = 0;
int i = 0;

int main(int argc, char** argv) {
	
	p: cout << "Unesite broj: ";
	cin >> broj;
	
	if (broj <= 0){
		cout << "Nije prirodan broj." << endl;
		goto p;
	}
	int hold = broj;
	while (broj > 0){
		sum += broj%10;
		broj /= 10;
	}
	
	if (hold%sum == 0){
		cout << "Broj je djeljiv sa sumom.";
	} else {
		cout << "Broj nije djeljiv sa sumom.";
	}
	
	return 0;
}
