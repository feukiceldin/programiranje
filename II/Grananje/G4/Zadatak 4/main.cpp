#include <iostream>
using namespace std;

char a;

int main(int argc, char** argv) {
	
	p: cout << "Unesite veliko slovo(samoglasnik): ";
	cin >> a;
	
	switch (a){
		
		case 'A':
			cout << "1";
			break;
			
		case 'E':
			cout << "5";
			break;
			
		case 'I':
			cout << "9";
			break;
		
		case 'O':
			cout << "15";
			break;
		
		case 'U':
			cout << "20";
			break;
		
		default:
			cout << "Neispravan unos. Ponovni unos!" << endl;
			goto p;			
	}
	
	return 0;
}
