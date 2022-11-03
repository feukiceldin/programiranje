#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

double sila, masa, vrijeme, pocetnaBrzina, konacnaBrzina;

int main(int argc, char** argv) {
	
	cout << "Unesi masu tijela (u kg): ";
	cin >> masa;
	
	cout << "Unesi vrijeme (u s): ";
	cin >> vrijeme;
	
	cout << "Unesi pocetnu brzinu (u m/s): ";
	cin >> pocetnaBrzina;

	cout << "Unesi konacnu brzinu (u m/s): ";
	cin >> konacnaBrzina;
	
	sila = ((konacnaBrzina - pocetnaBrzina)/vrijeme)*masa;
	
	cout << "Na tijelo je djelovala sila od " << sila << "N.";
	
	return 0;
}
