#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int broj;

int main(int argc, char** argv) {
	
	cout << "Unesite cijeli broj: ";
	cin >> broj;
	
	cout << "Kvadrat broja " << broj << ": " << broj*broj << endl;	
	cout << "Kub broja " << broj << ": " << broj*broj*broj;	
	
	return 0;
}
