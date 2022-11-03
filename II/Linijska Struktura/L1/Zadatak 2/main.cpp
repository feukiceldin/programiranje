#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int x;
int y;

int main(int argc, char** argv) {
	
	cout << "Unesite vrijednost cjelobrojne promjenjive x: ";
	cin >> x;
	
	cout << "Unesite vrijednost cjelobrojne promjenjive y: ";
	cin >> y;
	
	cout << x << "+" << y << "=" << x+y << endl;
	cout << x << "-" << y << "=" << x-y << endl;
	cout << x << "*" << y << "=" << x*y << endl;
	cout << x << "/" << y << "=" << x/y << endl;
	cout << x << "%" << y << "=" << x%y;
	
	return 0;
}
