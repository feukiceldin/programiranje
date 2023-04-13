#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	string str;
	string ispis = "Unesena recenica je palindrom";
	
	cout << "Unesite recenicu: ";
	getline(cin, str);

	int l = 0;
	int r = str.length()-1;
	
	while (l < r){
		while (str[l] == ' '){
			l++;
			continue;
		}
		
		while (str[r] == ' '){
			r--;
			continue;
		}
		
		if (str[l] != str[r]){
			ispis = "Unesena recenica nije palindrom";
			break;
		} else {
			l++;
			r--;
		}
	}

	cout << ispis;

	return 0;
}
