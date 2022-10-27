#include <iostream>

using namespace std;

int broj;

int main(int argc, char** argv) {
	
	cout << "Unesi trocifreni broj: ";
	cin >> broj;
	
	cout << "Broj bez cifre desetica je: " << broj/100 << broj%10;
	
	return 0;
}
