#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {

	ifstream ulaz;
	ulaz.open("ulaz.txt");
	string str, unos;
	int counter = 0;
	
	cout << "Unesite string: ";
	cin >> unos;
	
	while (ulaz.good()){
		getline(ulaz, str);
		
		if (str.substr(str.length()-unos.length(), unos.length()) == unos){
			counter++;
		}
	}
	
	ulaz.close();
	
	cout << counter << " linija zavrsava sa " << unos;
	
	return 0;
}
