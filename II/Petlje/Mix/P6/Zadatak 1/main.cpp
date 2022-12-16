#include <iostream>
using namespace std;

int broj;
int i = 1;

int main(int argc, char** argv) {
	
	p: cout << "Unesite prirodni broj: ";
	cin >> broj;
	
	if (broj <= 0){
		cout << "Neispravan unos." << endl;
		goto p;
	}
	
	cout << "Djelitelji broja " << broj << " su: ";
	while (i <= broj){
		if (broj % i == 0){
			cout << i << " ";
		} i++;
	} 
	
	return 0;
}
