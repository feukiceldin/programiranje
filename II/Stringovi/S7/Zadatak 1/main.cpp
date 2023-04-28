#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	string str;
	
	cout << "Unesite string: ";
	getline(cin, str);
	
	for (int i = 0; i < str.length()-1; i+=2){
		swap(str[i], str[i+1]);
	}

	cout << str;

	return 0;
}
