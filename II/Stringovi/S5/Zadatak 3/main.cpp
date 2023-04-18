#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	string str1, str2;
	
	cout << "Unesite prvu rijec: ";
	cin >> str1;
	
	cout << "Unesite drugu rijec: ";
	cin >> str2;

	if (str2.length() > str1.length()){
		cout << "Rijec " << str2 << " nije ni prefix ni sufix rijeci " << str1;
		goto end;
	}
	
	if (str1.substr(0, str2.length()) == str2){
		cout << "Rijec " << str2 << " je prefix rijeci " << str1;
	} else if (str1.substr(str1.length()-str2.length(), str2.length()) == str2){
		cout << "Rijec " << str2 << " je sufix rijeci " << str1;
	} else {
		cout << "Rijec " << str2 << " nije ni prefix ni sufix rijeci " << str1;
	}
	end:
	return 0;
}
