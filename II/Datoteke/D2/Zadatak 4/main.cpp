#include <iostream>
#include <fstream>

using namespace std;

int izbrojiKaraktere(char str[]){
	char i = 0;
	int count = 0;
	
	ifstream dat;
	dat.open(str);
	
	while (!dat.eof()){
		i = dat.get();
		count++;
	}
	
	return count-1;
}

int izbrojiRedove(char str[]){
	
	ifstream datoteka;
	datoteka.open(str);
	
	char i = 0;
	int count = 1;
	while (!datoteka.eof()){
		i = datoteka.get();
		if (i == '\n'){
			count++;
		}
	}
	
	return count;
}

int izbrojiRijeci(char str[]){
	
	ifstream datoteka;
	datoteka.open(str);
	
	char i = 0;
	int count = 1;
	while (!datoteka.eof()){
		i = datoteka.get();
		if (i == ' ' || i == '\t'){
			count++;
			while (i == ' ' || i == '\t'){
				i = datoteka.get();
			}
		} else if (i == '\n'){
			while (!datoteka.eof()){
				i = datoteka.get();
				if (i != '\n' && i != ' ' && i != '\t'){
					count++;
					break;
				} 
			}
		}
	}
	
	return count;
}

int main(int argc, char** argv) {
	
	ifstream datoteka;
	char str[100];
	
	cout << "Unesite naziv datoteke: ";
	cin.get(str, 100);
	
	datoteka.open(str);	
	
	if (datoteka.is_open()){
		cout << "U datoteci " << str << " ima " << izbrojiKaraktere(str) << " karaktera" << endl;
		cout << "U datoteci " << str << " ima " << izbrojiRedove(str) << " redova" << endl;
		cout << "U datoteci " << str << " ima " << izbrojiRijeci(str) << " rijeci";		
	} else {
		cout << "Nemoguce pronaci datoteku.";
	}
	
	datoteka.close();
	
	return 0;
}
