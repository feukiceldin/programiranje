#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	string str;
	
	cout << "Unesite string: ";
	getline(cin, str);
	
	for (int i = str.length(); i >= 1; i--){
		cout << str.substr(0, i) << endl; 
	}
	
	return 0;
}
