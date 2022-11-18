#include <iostream>
using namespace std;

int bod1, bod2, bod3;
int nagrada1, nagrada2, nagrada3;

int main(int argc, char** argv) {
	
	cout << "Unesite bodove 1. takmicara: ";
	cin >> bod1;
	
	cout << "Unesite bodove 2. takmicara: ";
	cin >> bod2;
	
	cout << "Unesite bodove 3. takmicara: ";
	cin >> bod3;
	
	if (bod1 < bod2){
		swap(bod1, bod2);
	}
	if (bod1 < bod3){
		swap(bod1, bod3);
	}
	if (bod2 < bod3){
		swap(bod2, bod3);
	}
	
	if (bod1 == bod2 && bod2 == bod3){
		nagrada1 = 600;
		nagrada2 = 600;
		nagrada3 = 600;
	} else if (bod1 == bod2){
		nagrada1 = 750;
		nagrada2 = 750;
		nagrada3 = 300;
	} else if (bod2 == bod3){
		nagrada1 = 1000;
		nagrada2 = 400;
		nagrada3 = 400;
	} else {
		nagrada1 = 1000;
		nagrada2 = 500;
		nagrada3 = 300;
	}
	
	cout << "\nPlasman takmicara: " << endl;
	cout << "1. mjesto takmicar sa osvojenih " << bod1 << " bodova osvaja nagradu od " << nagrada1 << " [KM]" << endl;
	cout << "2. mjesto takmicar sa osvojenih " << bod2 << " bodova osvaja nagradu od " << nagrada2 << " [KM]" << endl;
	cout << "3. mjesto takmicar sa osvojenih " << bod3 << " bodova osvaja nagradu od " << nagrada3 << " [KM]" << endl;
	
	return 0;
}
