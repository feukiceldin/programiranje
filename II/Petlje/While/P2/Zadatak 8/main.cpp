#include <iostream>
using namespace std;

int i = 300;

int main(int argc, char** argv) {
	
	cout << "Brojevi djeljivi sa sa 8 u intervalu od 300 do 400: " << endl;
	
	while (i <= 400){
		if (i % 8 == 0){
			cout << i << " ";
		}
		i++;
	}
	
	return 0;
}
