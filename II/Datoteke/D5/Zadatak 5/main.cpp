#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
	
	string raz, odj;
	ifstream ulaz;
	ulaz.open("ucenici.txt");
	
	cout << "Unesite razred: ";
	cin >> raz;
	
	cout << "Unesite odjeljenje: ";
	cin >> odj;
		
	while (!ulaz.eof()){
		string str;
		getline(ulaz, str);
		
		if(str.substr(str.rfind(';')+1, -1) == odj && str.substr(str.rfind(';', str.rfind(';')-1)+1, 1) == raz){
			cout << str << endl;
		}
	}
	
	ulaz.close();
	
	return 0;
}
