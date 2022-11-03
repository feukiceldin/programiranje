#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int broj;

int main(int argc, char** argv) {
	
	cout << "Unesite trocifreni broj: ";
	cin >> broj;
	
	cout << "Broj nakon obrtanja cifara je: " << broj%10 << (broj/10)%10 << broj/100;
	
	return 0;
}
