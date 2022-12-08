#include <iostream>
using namespace std;

int broj;
long long pr;

int main(int argc, char** argv) {
	
	cout << "Unesite brojeve: ";
	cin >> broj;
	
	pr = broj > 0 ? broj : 1;
	
	while (broj != 0){
		cin >> broj;
		if (broj > 0){
			pr*=broj;
		}
	}
	
	cout << "Proizvod pozitivnih unesenih brojeva je " << pr;
	
	return 0;
}
