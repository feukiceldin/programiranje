#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
	
	ifstream dato;
	int counter = 0;
	
	dato.open("ulaz.txt");
	
	while (!dato.eof()){
		char ch = dato.get();
		if (ch == -1){
			break;
		}
		if (ch >= 'a' && ch <= 'z'){
			counter++;
		}	
	}
	
	cout << "Malih slova ima: " << counter;
	
	return 0;
}
