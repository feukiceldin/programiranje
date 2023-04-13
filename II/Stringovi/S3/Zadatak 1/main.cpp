#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	string str;
	
	cout << "Unesite string: ";
	getline(cin, str);
	
	for (int i = 0; i < str.length(); i++){
		if (tolower(str[i]) == 'a' || tolower(str[i]) == 'e' || tolower(str[i]) == 'i' || tolower(str[i]) == 'o' || tolower(str[i]) == 'u'){
			str.erase(i, 1);
			i--;
		}
	}
	
	cout << "String bez samoglasnika: " << str;

	return 0;
}
