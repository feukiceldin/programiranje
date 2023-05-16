#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {

	fstream file;
	file.open("rezultati.txt");
	
	while (!(file.eof())){
		string str;
		getline(file, str);
		cout << str << endl;
	}
	
	file.close();
	cout << "Zavrseno citanje iz filea";

	return 0;
}
