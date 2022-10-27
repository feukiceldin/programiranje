#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int broj;

int main(int argc, char** argv) {
	
	cout << "Unesite trocifren broj: ";
	cin >> broj;
	
	cout << "Jedinica: " << broj % 10 << ", desetica: " << (broj / 10)%10 << ", stotica " <<  (broj / 100)%10;
	
	return 0;
}
