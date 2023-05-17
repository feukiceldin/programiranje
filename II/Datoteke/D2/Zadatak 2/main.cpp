#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
	
	ifstream datoteka;
	char str[100];
	
	cout << "Unesite ime datoteke: ";
	cin.get(str, 100);	
	
	datoteka.open(str);
	
	if (datoteka.is_open()){
		char i = 0;
		int count = 1;
		while (!datoteka.eof()){
			i = datoteka.get();
			if (i == '\n'){
				count++;
			}
		}
		
		cout << "U datoteci " << str << " ima " << count << " redova";
		
	} else {
		cout << "Nemoguce pronaci datoteku.";
	}
	
	datoteka.close();
	
	return 0;
}
