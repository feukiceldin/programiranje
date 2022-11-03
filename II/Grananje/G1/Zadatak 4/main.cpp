#include <iostream>
using namespace std;

int a, b, c, s;

int main(int argc, char** argv) {
	
	cout << "Unesite tri cijela broja: ";
	cin >> a >> b >> c;
	
	if (a > 0){
		s+=a;
	}
	
	if (b > 0){
		s+=b;
	}
	
	if (c > 0){
		s+=c;
	}
	
	cout << "Suma pozitivnih je " << s;
	
	return 0;
}
