#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
	
	fstream datoteka;
	datoteka.open("brojevi.txt");
	
	while (!datoteka.eof()){
		string str;
		getline (datoteka, str);
		cout << str << endl;
	}
	
	datoteka.close();
	
	cout << "Zavrseno citanje iz filea";
	
	return 0;
}
