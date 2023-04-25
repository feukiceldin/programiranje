#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	string str;
	string ans;
	
	cout << "Unesite string: ";
	getline(cin, str);
	
	for (int i = 0; i < str.length(); i++){
		if (str[i] == '!'){
			ans += ", vicemo.";
		} else if (str[i] == '?'){
			ans += ", pitamo se.";
		} else {
			ans += str[i];
		}
	}
	
	cout << ans;
	
	return 0;
}
