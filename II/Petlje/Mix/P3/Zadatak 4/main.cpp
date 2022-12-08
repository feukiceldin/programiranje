#include <iostream>
using namespace std;

int broj = 1;
int maxi;

int main(int argc, char** argv) {
	
	p: cout << "Unesite prirodan broj: ";
	cin >> maxi;
		
	if (broj < 0){
		cout << "Nije prirodan broj." << endl;
		goto p;
	}
	
	while (broj != 0){
		cout << "Unesite prirodan broj: ";
		cin >> broj;
		
		if (broj < 0){
			cout << "Nije prirodan broj." << endl;
			continue;
		}
		
		if (broj > maxi){
			maxi = broj;
		}
		
	}
	
	cout << "Najveci broj od unesenih je: " << maxi;
	
	return 0;
}
