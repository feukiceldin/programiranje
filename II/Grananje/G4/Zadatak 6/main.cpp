#include <iostream>
using namespace std;

int mjesec, godina;

int main(int argc, char** argv) {
	
	p: cout << "Unesite broj mjeseca: ";
	cin >> mjesec;
	
	cout << "Unesite godinu: ";
	cin >> godina;
	
	switch (mjesec){
		
		case 1:
			cout << "Mjesec ima 31 dan.";
			break;
		
		case 2:
			if ((godina%400==0) || ((godina%4==0)&&(godina%100!=0))){
				cout << "Godina je prestupna, mjesec ima 29 dana.";
			} else {
				cout << "Godina nije prestupna, mjesec ima 28 dana.";
			}
			break;
		
		case 3:
			cout << "Mjesec ima 31 dan.";
			break;
			
		case 4:
			cout << "Mjesec ima 30 dan.";
			break;
			
		case 5:
			cout << "Mjesec ima 31 dan.";
			break;
			
		case 6:
			cout << "Mjesec ima 30 dan.";
			break;
			
		case 7:
			cout << "Mjesec ima 31 dan.";
			break;
			
		case 8:
			cout << "Mjesec ima 31 dan.";
			break;
			
		case 9:
			cout << "Mjesec ima 30 dan.";
			break;
			
		case 10:
			cout << "Mjesec ima 31 dan.";
			break;
			
		case 11:
			cout << "Mjesec ima 30 dan.";
			break;
			
		case 12:
			cout << "Mjesec ima 31 dan.";
			break;
			
		default:
			cout << "Neispravan unos. Ponovni unos!" << endl;
			goto p;
	}
	
	return 0;
}
