#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	string s1, s2;	
	
	cout << "Unesite string: ";
	getline(cin, s1);
	
	cout << "Unesite string: ";
	getline(cin, s2);
	
	if (s1.length() == s2.length()){
		cout << "Stringovi su jednaki";
	} else {
		cout << "Veci string je " << (s1.length() > s2.length() ? s1 : s2);
	}
	
	return 0;
}
