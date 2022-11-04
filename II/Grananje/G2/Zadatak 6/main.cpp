#include <iostream>
using namespace std;

int starost, cijena;

int main(int argc, char** argv) {
	
	cout << "Unesite vase godine: ";
	cin >> starost;
	
	cout << "Unesite cijenu proizvoda: ";
	cin >> cijena;
	
	if (starost > 55){
		cijena -= cijena*0.15;
	} else {
		cijena -= cijena*0.1;
	}
	
	cout << "Vi imate " << starost << " godina i placate " << cijena << "KM"; 
	
	return 0;
}
