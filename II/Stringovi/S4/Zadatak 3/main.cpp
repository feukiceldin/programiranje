#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	string str;
	
	cout << "Unesite recenicu: ";
	getline(cin, str);
	
	for (int i = 0; i < str.length(); i++){
		if (str[i] == ' '){
			cout << endl;
		} else {
			cout << str[i];
		}
	}
	
	return 0;
}

