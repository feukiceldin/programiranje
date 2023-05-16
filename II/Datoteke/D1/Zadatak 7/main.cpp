#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	
	ifstream datoteka;
	datoteka.open("brojevi.txt");
	
	int sum = 0;
	int count = 0;
	string str;
	
	while (!datoteka.eof()){
		getline(datoteka, str);
		if (str.empty()){
			break;
		}
		sum += stoi(str);
		count++;
	}
	
	datoteka.close();
	cout << "Suma u ovom fajlu je: " << sum << endl;
	cout << "Brojeva ima: " << count;
	
	return 0;
}
