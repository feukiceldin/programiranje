#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	int zagL = 0, zagD = 0;
	
	string str;
	
	cout << "Unesite recenicu: ";
	getline(cin, str);
	
	for (int i = 0; i < str.length(); i++){
		if (str[i] == '('){
			zagL++;
		}
		if (str[i] == ')'){
			zagD++;
		}
	}
	
	if (zagL == zagD){
		cout << "Broj otvorenih i zatvorenih zagrada je jendak";
	} else {
		cout << "Broj otvorenih i zatvorenih zagrada nije jendak";
	}
	
	return 0;
}
