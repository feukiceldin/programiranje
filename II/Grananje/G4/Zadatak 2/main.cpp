#include <iostream>
using namespace std;

float r, i, u;
int odabir;

int main(int argc, char** argv) {
	
	p: cout << "Odaberite jednu od opcija: " << endl << "1. Racunanje jacine struje" << endl << "2. Racunanje napona" << endl << "3. Racunanje otpora" << endl;
	cin >> odabir;
	
	switch (odabir){
		case 1:
			cout << "U (V) = ";
			cin >> u;
			cout << "R (om) = ";
			cin >> r;
			i = u/r;
			if (r == 0){
				cout << "Kratki spoj";
			} else if (u == 0){
				cout << "Prazan hod";
			} else {
				cout << "Ako je napon " << u << " V, a otpor " << r << " oma, jacina struje iznosi " << i << " A.";
			}
			break;
			
		case 2:
			cout << "I (A) = ";
			cin >> i;
			cout << "R (om) = ";
			cin >> r;
			u = i*r;
			if (r == 0){
				cout << "Kratki spoj";
			} else if (i == 0){
				cout << "Prazan hod";
			} else {
				cout << "Ako je jacina struje " << i << " A, a otpor " << r << " oma, napon iznosi " << u << " V.";
			}
			break;
			
		case 3:
			cout << "U (V) = ";
			cin >> u;
			cout << "I (A) = ";
			cin >> i;
			r = u/i;
			if (u == 0 && i == 0){
				cout << "Prazan hod";
			} else if (u == 0){
				cout << "Ne moze ne postojati napon a postojati struja";
			} else if (i == 0){
				cout << "Ne moze postojati napon a ne postojati struja";
			} else {
				cout << "Ako je napon " << u << " V, a jacina struje " << i << " A, otpor iznosi " << r << " oma.";	
			}
			break;
			
		default:
			cout << "Neispravan unos. Ponovni unos!" << endl;
			goto p;
	}
	
	return 0;
}
