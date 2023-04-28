#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	string str1;
	string str2;
	
	cout << "Unesite prvi string: ";
	getline(cin, str1);
	
	cout << "Unesite drugi string: ";
	getline(cin, str2);

	string str;
	for (int i = 0; i < str1.length()+str2.length(); i++){
		str += str1[i];
		str += str2[i];
		if (i == str1.length()-1){
			str += str2.substr(i+1, -1);	
			break;
		}
		if (i == str2.length()-1){
			str += str1.substr(i+1, -1);
			break;
		}
	}
	
	cout << str;
	
	return 0;
}
