#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	string str;

	cout << "Unesite recenicu: ";
	getline(cin, str);
	
	char ch = str[4];
	
	cout << "Peti karakter recenice je: " << ch << endl;
	for (int i = 0; i < str.length(); i++){
		if (i % 2 == 0){
			str[i] = ch;
		}
		cout << str[i];
	}
	
	return 0;
}
