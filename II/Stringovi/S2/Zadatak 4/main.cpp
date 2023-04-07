#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	string s;
	int rec = 1;
	
	cout << "Unesite recenicu: ";
	getline(cin, s);
	
	for (int i = 0; i < s.length()-1; i++){
		if (s.at(i) == ' ' && s.at(i+1) != ' '){
			rec++;
		}
	}
	
	cout << "Unesena recenica ima " << rec << " rijeci";

	return 0;
}
