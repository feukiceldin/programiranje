#include <iostream>
#include <string>
//#include <algorithm>

using namespace std;

int main(int argc, char** argv) {
	string s;
	
	cout << "Unesite recenicu koju zelite da se ispise unazad: ";
	getline(cin, s);
	
	/* 
	reverse(s.begin(), s.end());
	
	cout << s;
	*/
	
	for (int i = s.length()-1; i >= 0; i--){
		cout << s[i];
	}
	
	return 0;
}
