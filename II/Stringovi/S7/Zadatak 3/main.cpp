#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	string str;
	string ans;
	
	cout << "Unesite string: ";
	getline(cin, str);
	
	int i = 0;
	while (str[i] == ' '){
		i++;
	}
	
	bool jedan = true;
	while (i < str.length()){
		if (str[i] == ' '){
			ans += str[i];			
			
			while (str[i] == ' ' && i < str.length()){
				i++;
			}
		} else {
			ans += str[i];
			i++;
		}
	}
	
	cout << ans;

	return 0;
}
