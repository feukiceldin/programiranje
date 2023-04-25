#include <iostream>
#include <string>
using namespace std;

int BSamoglasnika(string str){
	int count = 0;
	for (int i = 0; i < str.length(); i++){
		str[i] = tolower(str[i]);
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
			count++;
		}
	}
	return count;
}

int BSuglasnika(string str){
	int count = 0;
	for (int i = 0; i < str.length(); i++){
		str[i] = tolower(str[i]);
		if (!(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')){
			count++;
		}
	}
	return count;
}

int BBlank(string str){
	int count = 0;
	for (int i = 0; i < str.length(); i++){
		str[i] = tolower(str[i]);
		if (str[i] == ' '){
			count++;
		}
	}
	return count;
}

void Naopako(string str){
	for (int i = str.length()-1; i >= 0; i--){
		cout << str[i];
	}
}

int main(int argc, char** argv) {
	int izbor = 0;
	string str;
	
	cout << "Unesite string: ";
	getline(cin, str);
	
	cout << "Unesite funkciju koju zelite:\n1. Broj samoglasnika\n2. Broj suglasnika\n3. Broj praznih mjesta\n4. Ispis stringa unazad\n";
	cin >> izbor;
	
	switch(izbor){
		case 1:
			cout << "Broj samoglasnika: " << BSamoglasnika(str);
			break;
		case 2:
			cout << "Broj suglasnika: " << BSuglasnika(str);
			break;
		case 3:
			cout << "Broj praznih mjesta: " << BBlank(str);
			break;
		case 4: 
			Naopako(str);
			break;
		default:
			cout << "Neispravan unos.";
	}
	
	return 0;
}
