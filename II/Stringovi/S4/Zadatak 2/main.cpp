#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	string str;
	char ch;
	
	cout << "Unesite string: ";
	getline(cin, str);
	
	cout << "Unesite karakter: ";
	cin >> ch;
	
	int i = str.find(ch, i);
	
	while (i < str.length()){
		if (str.find(ch) != -1){
			cout << str.find(ch, i) + 1 << " ";
			i = str.find(ch, i+1);
		} 
	}
	
	return 0;
}
