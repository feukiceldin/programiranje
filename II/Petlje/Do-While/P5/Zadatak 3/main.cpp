#include <iostream>
using namespace std;

int broj1, broj2;

int main(int argc, char** argv) {
	
	do {
		cout << "Unesite parove brojeva: ";
		cin >> broj1 >> broj2;
		
		if(broj1 > 0 && broj2 > 0){
			cout << "Proizvod brojeva je " << broj1*broj2 << endl;
		} else {
			continue;
		} 
		
	} while (broj1 != 0 && broj2 != 0);
	
	return 0;
}
