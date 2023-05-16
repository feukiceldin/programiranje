#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
	
	ofstream izlaz;
	
	izlaz.open("rezultati.txt");

	izlaz << "1. Rezultat\n";
	izlaz << "2. Rezultat\n";
	
	izlaz.close();
	
	cout << "Gotovo kreiranje datoteteke";
		
	return 0;
}
