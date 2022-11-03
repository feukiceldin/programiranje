#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int x, y, pom;

int main(int argc, char** argv) {
	
	cout << "Unesite dvije cjelobrojne vrijednosti: ";
	cin >> x >> y;
	
	cout << "Prije zamjene: x=" << x << " y=" << y << endl; 
	
	pom = x;
	x = y;
	y = pom;
	
	cout << "Poslije zamjene: x=" << x << " y=" << y << endl;
	
	return 0;
}
