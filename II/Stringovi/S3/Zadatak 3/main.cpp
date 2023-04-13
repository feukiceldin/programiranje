#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	string str;
	
	cout << "Unesite rijec: ";
	getline(cin, str);
	
	string ispis = "Unesena rijec je palindrom";
	
	for (int i = 0; i < str.length(); i++){
		if (str[i] != str[str.length()-1-i]){
			ispis = "Unesena rijec nije palindrom";
			break;
		}	
	}

	cout << ispis;

	return 0;
}
