#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
	
	ifstream ulaz;
	ulaz.open("ulaz.txt");
	
	ofstream izlaz;
	izlaz.open("izlaz.txt");
	
	cout << "Unijeli ste: ";
	while (!ulaz.eof()){
		string str;
		getline(ulaz, str);
		cout << str;
		for (int i = str.length()-1; i >= 0; i--){
			izlaz << str[i];
		}
	}
	
	ulaz.close();
	izlaz.close();
	
	cout << "\nKreirana izlazna datoteka!";
	
	return 0;
}
