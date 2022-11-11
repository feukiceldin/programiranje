#include <iostream>
#include <cmath>

using namespace std;

int broj;

int main(int argc, char** argv) {
	
	cout << "Unesite broj: ";
	cin >> broj;
	
	cout << "Broj je ";
	if (broj < 10 && broj > -10){
		cout << "jednocifren.";
	} else if (broj < 100 && broj > -100){
		cout << "dvocifren.";
	} else if (broj < 1000 && broj > -1000){
		cout << "trocifren.";
	} else if (broj < 10000 && broj > -1000){
		cout << "cetverocifren.";
	} else if (broj < 100000 && broj > -100000){
		cout << "petocifren.";
	} else {
		cout << "veci od petocifrenog.";
	}
	
	return 0;
}
