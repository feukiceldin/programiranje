#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

double masa, brzina, visina, ke, pe;
const double g = 9.81;

int main(int argc, char** argv) {
	
	cout << "Unesi masu tijela (u kg): ";
	cin >> masa;
	
	cout << "Unesi visinu tijela (u m): ";
	cin >> visina;
	
	cout << "Unesi brzinu tijela (u m/s): ";
	cin >> brzina;
	
	ke = (masa*brzina*brzina)/2;
	pe = (masa*g*visina);
	
	cout << "Tijelo ima " << ke << " J kineticke energije i " << pe << " J potencijalne energije, sto daje ukupnu energiju od " << (pe+ke) << " J.";
	
	return 0;
}
