#include <iostream>

using namespace std;

int broj;

int main(int argc, char** argv) {

	cout << "Unesite cijeli broj: ";
	cin >> broj;

	cout << "Uneseni broj je ";
	if (broj > 0){
		cout << "pozitivan.";
	} else if (broj == 0){
		cout << "0.";
	} else {
		cout << "negativan.";
	}

	return 0;
}
