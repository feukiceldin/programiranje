#include <iostream>
using namespace std;

int mjesec, dan;

int main(int argc, char** argv) {
	
	cout << "Unesite broj mjeseca: ";
	cin >> mjesec;
	
	cout << "Unesite broj dana: ";
	cin >> dan;
	
	if (mjesec <= 0 || mjesec > 12){
		cout << "Mjeseci su u rasponu od 1 do 12!" << endl;
	}
	
	if (mjesec > 0 && mjesec <= 12){
		cout << "Broj unesenog mjeseca je: " << mjesec << endl;
	}
	
	if (dan <= 0 || dan > 31){
		cout << "Dani su u rasponu od 1 do 31!" << endl;
	}
	
	if (dan > 0 && dan <= 31){
		cout << "Broj unesenog dana je: " << dan << endl;
	}
	
	return 0;
}
