#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

const double bakar = 0.0175;
const double pi = 3.14;
double precnik;
double duzina;

int main(int argc, char** argv) {
	
	cout << "Unesite precnik zice (u mm): ";
	cin >> precnik;
	cout << endl;
	cout << "Unesite duzinu zice (u m): ";
	cin >> duzina;
	cout << endl;
	cout << "Bakarna zica duzine " << duzina << "m i presjeka " << (precnik/2)*pi << " mm2 ima otpor " << bakar*(duzina/((precnik/2)*(precnik/2*pi))) << " oma."; 
	
	return 0;
}
