#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
	
	ifstream dato;
	
	dato.open("ulaz.txt");
	
	string str = "";
	string max;
	
	while (!dato.eof()){
		getline(dato, str);
		if (str.length() > max.length()){
			max = str;
		}
	}
	
	cout << "Najduzi string je: \n" << max << endl;
	cout << "Duzina je: " << str.length();
	
	return 0;
}
