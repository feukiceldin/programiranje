#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	string s1, s2;
	
	cout << "Unesite prvu recenicu: ";
	getline(cin, s1);

	cout << "Unesite druge recenicu: ";
	getline(cin, s2);

	s2.insert(s2.length(), (" " + s1));

	cout << "Poslije spajanja: " << s2;

	return 0;
}
