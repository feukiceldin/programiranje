#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
	
	ifstream datoteka;
	datoteka.open("brojevi.txt");
	
	while (!datoteka.eof()){
		string str;
		getline(datoteka, str);
		if (str.empty()){
			break;
		}
		int broj = stoi(str);
		if (broj % 2 == 0){
			cout << broj << endl;
		}
	}
	
	datoteka.close();
	
	cout << "Zavrseno citanje iz fajla";
	
	return 0;
}
