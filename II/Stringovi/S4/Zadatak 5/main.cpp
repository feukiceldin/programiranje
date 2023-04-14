#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	string str;
	
	int samo = 0;
	int sug = 0;
	
	cout << "Unesite string: ";
	getline(cin, str);
	
	for (int i = 0; i < str.length(); i++){
		if (tolower(str[i]) == 'a' || tolower(str[i]) == 'e' || tolower(str[i]) == 'i' ||
		tolower(str[i]) == 'o' || tolower(str[i]) == 'u'){
			samo++;
		} else if (tolower(str[i]) > 'a' && tolower(str[i]) < 'z'){
			sug++;
		}
	}
	
	if (samo > sug){
		cout << "Samoglasnika ima vise nego suglasnika";
	} else if (sug > samo){
		cout << "Suglasnika ima vise nego samoglasnika";
	} else {
		cout << "Recenica ima isti broj suglasnika i samoglasnika";
	}
	
	return 0;
}
