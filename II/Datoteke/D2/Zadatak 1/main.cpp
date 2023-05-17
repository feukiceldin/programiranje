#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
	
	ifstream datoteka;
	char str[100];
	
	cout << "Unesite naziv datoteke: ";
	cin.get(str, 100);
	
	datoteka.open(str);	
	
	if (datoteka.is_open()){
		char i = 0;
		int count = 0;
		while (!datoteka.eof()){
			i = datoteka.get();
			count++;
		}
		
		cout << "U datoteci " << str << " ima " << count-1 << " karaktera";
		
	} else {
		cout << "Nemoguce pronaci datoteku.";
	}
	
	datoteka.close();
	
	return 0;
}
