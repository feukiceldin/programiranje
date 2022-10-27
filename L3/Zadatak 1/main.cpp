#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

double profesori, ucenici, prosjek;

int main(int argc, char** argv) {
	
	cout << "Unesite ukupan broj ucenika: ";
	cin >> ucenici;
	
	cout << "Unesite ukupan broj profesora: ";
	cin >> profesori;
	
	prosjek = ucenici/profesori;
	
	cout << "Prosjecan broj ucenika po profesoru je: " << prosjek;	
	
	return 0;
}
