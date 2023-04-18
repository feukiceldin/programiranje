#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	string str;
	
	p: cout << "Unesite recenicu: ";
	getline(cin, str);
		
	if (str.length() > 50){
		cout << "Unesite kracu recenicu." << endl;
		goto p;
	}
	
	string pom;
	
	for (int i = 0; i < str.length(); i++){
		pom += str[i];
		cout << pom << endl;
	}
	
	return 0;
}
