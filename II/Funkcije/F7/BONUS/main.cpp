#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	string broj;
	
	p: cout << "Unesite broj: ";
	cin >> broj;
	
	if (broj.length() > 10){
		cout << "Prevazisli ste 10 znakova.";
		goto p;
	}
	
	char arr[broj.length()];
	char noviBroj[broj.length()];
	
	for (int i = 0; i < broj.length(); i++){
		arr[i] = toupper(broj[i]);
	}
	
	for (int i = 0; i < broj.length(); i++){
		if (arr[i] == 'A' || arr[i] == 'B' || arr[i] == 'C'){
			noviBroj[i] = '2';
		} else if (arr[i] == 'D' || arr[i] == 'E' || arr[i] == 'F'){
			noviBroj[i] = '3';
		} else if (arr[i] == 'G' || arr[i] == 'H' || arr[i] == 'I'){
			noviBroj[i] = '4';
		} else if (arr[i] == 'J' || arr[i] == 'K' || arr[i] == 'L'){
			noviBroj[i] = '5';
		} else if (arr[i] == 'M' || arr[i] == 'N' || arr[i] == 'O'){
			noviBroj[i] = '6';
		} else if (arr[i] == 'P' || arr[i] == 'Q' || arr[i] == 'R' || arr[i] == 'S'){
			noviBroj[i] = '7';
		} else if (arr[i] == 'T' || arr[i] == 'U' || arr[i] == 'V'){
			noviBroj[i] = '8';
		} else if (arr[i] == 'W' || arr[i] == 'X' || arr[i] == 'Y' || arr[i] == 'Z'){
			noviBroj[i] = '9';
		} else {
			noviBroj[i] = arr[i];
		}
	}
	
	for (int i = 0; i < broj.length(); i++){
		cout << noviBroj[i];
	}
	
	return 0;
}
