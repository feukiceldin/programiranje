#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	string str1, str2;
	
	cout << "Unesite prvu rijec: ";
	cin >> str1;
	
	cout << "Unesite drugu rijec: ";
	cin >> str2;
	
	for (int i = 0; i < str1.length(); i++){
		if (str1.substr(i, str2.length()) == str2){
			cout << "Rijec " << str2 << " se nalazi u rijeci " << str1;
			goto end;
		}
	}
	
	cout << "Rijec " << str2 << " se ne nalazi u rijeci " << str1;
	
	end:
	return 0;
}
