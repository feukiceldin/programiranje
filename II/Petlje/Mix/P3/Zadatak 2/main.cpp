#include <iostream>
using namespace std;

int broj;
int i = 2;
bool prost = true;

int main(int argc, char** argv) {
	
	p: cout << "Unesite prirodni broj za provjeru: ";
	cin >> broj;
	
	if (broj <= 0){
		cout << "Nije prirodan broj." << endl;
		goto p;
	}
	
	while (i < broj){
		
		if (broj % i == 0){
			prost = false;
			break;
		}
		
		i++;
	}
	
	if (prost){
		cout << "Broj je prost.";
	} else {
		cout << "Broj nije prost.";
	}
	
	return 0;
}
