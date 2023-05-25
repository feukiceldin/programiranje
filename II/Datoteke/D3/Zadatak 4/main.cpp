#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
	
	ifstream ulaz;
	char naziv[100];
	string str, temp;
	
	cout << "Unesite ime datoteke: ";
	cin.get(naziv, 100);
	
	ulaz.open(naziv);	
	
	while (ulaz.good()){
		getline(ulaz, str);
		temp.assign(60-str.length(), '*');
		cout << endl << str << temp;
	}
	
	ulaz.close();
	
	return 0;
}
