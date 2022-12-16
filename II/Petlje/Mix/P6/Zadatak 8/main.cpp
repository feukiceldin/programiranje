#include <iostream>
using namespace std;

double trenutniBroj, kriticniBroj, opadanje, godina = 0;

int main(int argc, char** argv) {

	p: cout << "Unesite trenutni broj riba u jezeru: ";
	cin >> trenutniBroj;

	if (trenutniBroj <= 0){
		cout << "Neispravan unos." << endl;
		goto p;
	}

	pp: cout << "Unesite kriticni broj riba u jezeru: ";
	cin >> kriticniBroj;
	
	if (trenutniBroj < kriticniBroj){
		cout << "Kriticni broj mora biti manji od trenutnog." << endl;
		goto p;
	}
	
	if (trenutniBroj < 0){
		cout << "Neispravan unos." << endl;
		goto pp;
	}
	
	ppp: cout << "Unesite godisnji procenat opadanja riba u jezeru: ";
	cin >> opadanje;
	
	if (opadanje < 0 || opadanje > 100){
		cout << "Neispravan unos." << endl;
		goto ppp;
	}

	while (trenutniBroj > kriticniBroj){
		trenutniBroj -= trenutniBroj*(opadanje/100); 
		godina++;
	}

	cout << "Nakon " << godina << " broj riba u jezeru ce biti " << trenutniBroj;

	return 0;
}
