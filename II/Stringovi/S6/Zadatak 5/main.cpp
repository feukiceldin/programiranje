#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	string str;
	string ans;
	int broj;
	
	cout << "Unesite string: ";
	getline(cin, str);
	
	p: cout << "Unesite cijeli broj: ";
	cin >> broj;
	
	if (broj < 1){
		cout << "Neispravan unos." << endl;
		goto p;
	}
	
	int j = 1;
	int pos = 0;
	for (int i = 0; i < str.length(); i++){
		if (str[i] == ' '){
			j++;
			pos = i+1;
		}
		if (j == broj){
			break;
		}
	}
	
	while (str[pos] != ' ' && pos < str.length()){
		ans += str[pos];
		pos++;
	}
	
	cout << ans;
	
	return 0;
}
