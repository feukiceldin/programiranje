#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
	
	ifstream ulaz;
	ofstream izlaz;
	char ch;
	
	string ime1, ime2;
	
	cout << "Unesite ime prve datoteke: ";
	cin >> ime1;
	
	cout << "Unesite ime druge datoteke: ";
	cin >> ime2;
	
	ulaz.open(ime1.c_str());
	izlaz.open(ime2.c_str());
	
	while (!ulaz.eof()){
		ch = ulaz.get();
		if (ch == 10 || ch == 26){
			continue;
		}
		if (ch >= '0' && ch <= '9'){
			izlaz << 0;
		} else if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' ){
			izlaz << 1;
		} else {
			izlaz << 2;
		}
	}
	
	ulaz.close();
	izlaz.close();
	
	return 0;
}
