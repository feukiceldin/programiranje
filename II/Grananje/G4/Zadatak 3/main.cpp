#include <iostream>
using namespace std;

int dan;

int main(int argc, char** argv) {
	
	p: cout << "Unesite redni broj dana u sedmici: ";
	cin >> dan;
	
	switch (dan){
		case 1:
			cout << "Ponedjeljak";
			break;
		
		case 2:
			cout << "Utorak";
			break;
		
		case 3:
			cout << "Srijeda";
			break;
			
		case 4:
			cout << "Cetvrtak";
			break;
			
		case 5:
			cout << "Petak";
			break;
			
		case 6:
			cout << "Subota";
			break;
			
		case 7:
			cout << "Nedjelja";
			break;
			
		default:
			cout << "Neispravan unos. Ponovni unos!" << endl;
			goto p;
	}
	
	return 0;
}
