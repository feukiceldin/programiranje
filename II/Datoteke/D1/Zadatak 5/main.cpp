#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
	
	ofstream datoteka;
	datoteka.open("brojevi.txt");
	
	int broj;
	
	cout << "Unesite broj dokle zelite da se upise: ";
	cin >> broj;
	
	for (int i = 1; i <= broj; i++){
		datoteka << i << endl;
	}
	
	datoteka.close();
	
	cout << "Gotovo upisivanje u datoteku";
	
	return 0;
}
