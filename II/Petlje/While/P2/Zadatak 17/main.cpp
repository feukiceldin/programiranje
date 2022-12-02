#include <iostream>
using namespace std;

int cj, cd, cs;

int main(int argc, char** argv) {
	
	cout << "Trocifreni brojevi koji imaju cifru jedinice 0 i zbir cifara 5: " << endl;
	
	int i = 100;	
	
	while (i <= 999){
		cj = i%10;
		cd = (i/10)%10;
		cs = i/100;
		
		if (cd + cs == 5 && cj == 0){
			cout << i << " ";
		} i++;
	}
	
	return 0;
}
