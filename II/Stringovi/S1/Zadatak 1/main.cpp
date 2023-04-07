#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	string ime, prezime, imePrezime;
	
	cout << "Unesite ime: ";
	cin >> ime;
	
	cout << "Unesite prezime: ";
	cin >> prezime;
	
	cin.ignore();
	cout << "Unesite ime i prezime: ";
	getline(cin, imePrezime);
	
	cout << "Ime: " << ime << endl;
	cout << "Prezime: " << prezime << endl;
	cout << "Ime i prezime: " << imePrezime;
	
	return 0;
}
