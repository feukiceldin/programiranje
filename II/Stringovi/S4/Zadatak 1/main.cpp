#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	string str, ans;
	
	cout << "Unesite recenicu: ";
	getline(cin, str);
	
	int ind;
	int start = str.find(' ');
		
	for (int i = str.length()-1; i >= 0; i--){
		if (str[i] == ' '){
			ind = i+1;
			break;
		}
	}	
	
	ans += str.substr(ind, str.length()-ind);

	for (int i = start; i < ind; i++){
		ans += str[i];
	}
	
	ans += str.substr(0, start);
	
	cout << "String poslije zamjene: " << ans;
	
	return 0;
}
