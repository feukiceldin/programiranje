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
	
	p: cout << "Unesite karakter: ";
	cin >> ch;
	
	if (ch != 'l' && ch != 'u'){
		cout << "Neispravan unos.\n";
		goto p;
	}
	
	while (ulaz.good()){
		string temp;
		getline(ulaz, temp);
		
		if (ch == 'u'){
			for (int i = 0; i < temp.length(); i++){
				temp[i] = tolower(temp[i]);
			}
			
			izlaz << temp << endl;
		} else {
			for (int i = 0; i < temp.length(); i++){
				temp[i] = toupper(temp[i]);
			}
			
			izlaz << temp << endl;
		}
	}
	
	ulaz.close();
	izlaz.close();
	
	return 0;
}
