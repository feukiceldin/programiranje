#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

double u, i, r1, r2, r3;

int main(int argc, char** argv) {
	
	cout << "U (V): ";
	cin >> u;
	
	cout << "R1 (om): ";
	cin >> r1;
	
	cout << "R2 (om): ";
	cin >> r2;
	
	cout << "R3 (om): ";
	cin >> r3;
	
	i = u/(r1+r2+r3);
	
	cout << "Ukupni otpor iznosi " << (r1+r2+r3) << " oma." << endl;
	cout << "Jacina struje iznosi " << i << " A." << endl;
	cout << "Pad napona U1 je " << i*r1 << " V." << endl;
	cout << "Pad napona U2 je " << i*r2 << " V." << endl;
	cout << "Pad napona U3 je " << i*r3 << " V.";
	
	return 0;
}
