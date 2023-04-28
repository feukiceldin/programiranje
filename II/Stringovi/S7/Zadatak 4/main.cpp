#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	string str;
	
	cout << "Unesite string: ";
	getline(cin, str);
	
	for (int i = 0; i < str.length(); i++){
		for (int j = 0; j <= str.length()-i; j++){
			if (str.substr(i, j).empty()){
				continue;
			} else {
				cout << str.substr(i, j) << endl;
			}
		}
	}
	
	return 0;
}
