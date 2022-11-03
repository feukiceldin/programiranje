#include <iostream>
#include <cmath>

using namespace std;

float djeljenik, djelitelj;

int main(int argc, char** argv) {
	
	cout << "Upisi djeljenik: ";
	cin >> djeljenik;
	
	cout << "Upisi djelitelj: ";
	cin >> djelitelj;
	
	if (djelitelj == 0){
		cout << "Ne moze se dijeliti sa 0.";
	}
	
	if (djelitelj != 0){
		cout << "Cijeli dio djeljenja je: " << djeljenik << " / " << djelitelj << " = " << floor(djeljenik/djelitelj) << endl;
		cout << "Ostatak pri djeljenju je: " << djeljenik << " % " << djelitelj << " = " << fmod(djeljenik, djelitelj) << endl;
		cout << "Provjera: " << floor(djeljenik/djelitelj) << " * " << djelitelj << " + " << fmod(djeljenik, djelitelj) << " = ";
		cout << (floor(djeljenik/djelitelj))*djelitelj + fmod(djeljenik, djelitelj);
	}
	
	return 0;
}
