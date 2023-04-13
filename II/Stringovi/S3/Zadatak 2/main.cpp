#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	string str;

	cout << "Unesite string: ";
	getline(cin, str);
	
	int samoglasnici = 0;
	int suglasnici = 0;
	
	for (int i = 0; i < str.length(); i++){
		if (tolower(str[i]) == 'a' || tolower(str[i]) == 'e' || tolower(str[i]) == 'i' || tolower(str[i]) == 'o' || tolower(str[i]) == 'u'){
			samoglasnici++;
		} else {
			suglasnici++;
		}
	}
	
	printf("Uneseni string ima %d samoglasnika i %d suglasnika", samoglasnici, suglasnici);
	
	return 0;
}
