#include <iostream>
using namespace std;

float a, b, c, maxi;

int main(int argc, char** argv) {
	
	cout << "Unesite cijene tri artikla: ";
	cin >> a >> b >> c;
	
	if (a > b && a > c){
		maxi = a;
	} else if (b > a && b > c){
		maxi = b;
	} else {
		maxi = c;
	}
	
	cout << "Treba platiti " << (a+b+c)-(maxi/2) << " KM";
	
	return 0;
}
