#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	string str1, str2;
	
	cout << "Unesite prvi string: ";
	getline(cin, str1);	
	
	cout << "Unesite drugi string: ";
	getline(cin, str2);
	
	if (str1.length() > str2.length()){
		cout << "Duzi string je " << str1;
	} else if (str1.length() < str2.length()){
		cout << "Duzi string je " << str2;
	} else {
		cout << "Stringovi su iste duzine";
	}
	
	return 0;
}
