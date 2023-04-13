#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	string str;
	
	cout << "Unesite datum: ";
	getline(cin, str);
	
	string dan = str.substr(0, str.find('.'));
	string mjesec = str.substr(str.find('.')+1, str.find(' ')-str.find('.'));
	string godina = str.substr(str.find(' ')+1, str.length()-str.find(' '));
	
	cout << "Dan --> " << dan << endl;
	cout << "Mjesec --> " << mjesec << endl;
	cout << "Godina --> " << godina;
	
	return 0;
}
