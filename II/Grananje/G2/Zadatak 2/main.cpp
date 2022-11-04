#include <iostream>
using namespace std;

int a, b, c, mini;

int main(int argc, char** argv) {
	
	cout << "Unesi cijenu tri artikla: ";
	cin >> a >> b >> c;
	
	if(a < b && a < c){
		mini = a;
	} else if (b < a && b < c){
		mini = b;
	} else {
		mini = c;
	}
	
	cout << "Treba platiti " << (a+b+c)-mini << " KM";
	
	return 0;
}
