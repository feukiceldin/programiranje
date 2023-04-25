#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	string str, str1;
	
	cout << "Unesite string: ";
	getline(cin, str);
	
	cout << "Duzina stringa je: " << str.length() << endl;
	
	if (str.length() % 4 == 0){
		cout << str;
	} else {
		cout << (str + str1.assign(4-str.length() % 4, '.'));	
	}
	
	return 0;
}
