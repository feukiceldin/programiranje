#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	string s;
	
	p: cout << "Unesite recenicu: ";
	getline(cin, s);
	
	if (s.length() > 80){
		cout << "Morate unijeti kracu recenicu!\n";
		goto p;
	}
	
	for (int i = 0; i < s.length(); i++){
		if (s.at(i) == ' '){
			continue;
		} cout << s.at(i);
	}	

	return 0;
}
