#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	string s, sbs;
	
	cout << "Unesite recenicu: ";
	getline(cin, s);
	
	cout << "Unesite rijec: ";
	getline(cin, sbs);
	
	if (s.find(sbs) != -1){
		cout << "Trazena rijec se nalazi u recenici na " << s.find(sbs)+1 << ". poziciji";
	} else {
		cout << "Trazena rijec se ne nalazi u recenici";
	}

	return 0;
}
