#include <iostream>
using namespace std;

int i = 1000;
int cj, cd, cs, ch;

int main(int argc, char** argv) {

	cout << "Cetverocifreni brojevi ciji je proizvod cifara 100: " << endl;

	while (i <= 9999){
		cj = i%10;
		cd = (i/10)%10;
		cs = (i/100)%10;
		ch = i/1000;
		
		if ((cj * cd * cs * ch) == 100){
			cout << i << " ";
		} i++;
	}

	return 0;
}
