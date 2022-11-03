#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int a,b,pom;

int main(int argc, char** argv) {
	
	cout << "Unesite dvije cjelobrojne promjenjive: ";
	cin >> a >> b;
	
	a = a + b;
	b = a - 2*b;
		
	cout << "Nove vrijednosti su: a=" << a << " b=" << b;
	
	return 0;
}
