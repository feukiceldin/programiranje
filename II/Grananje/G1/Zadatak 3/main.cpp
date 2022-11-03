#include <iostream>
#include <cmath>

using namespace std;

double broj;

int main(int argc, char** argv) {

	cout << "Unesi broj: ";
	cin >> broj;

	if (broj < 0){
		cout << "Neispravan broj, ponovni upis" << endl;
		cout << "Unesi broj: ";
		cin >> broj;
	}
	
	cout << "Kvadratni korijen od " << broj << " je " << sqrt(broj);

	return 0;
}
