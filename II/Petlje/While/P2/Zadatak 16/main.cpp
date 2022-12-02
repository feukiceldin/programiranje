#include <iostream>
using namespace std;

int cj, cd, cs;

int main(int argc, char** argv) {
	
	cout << "Brojevi koji imaju cifru desetice djeljivu sa 2 i cifru jedinice 7: " << endl;
	
	int i = 100;	
	
	while (i <= 999){
		cj = i%10;
		cd = (i/10)%10;
		cs = i/100;
		
		if (cd % 2 == 0 && cj == 7){
			cout << i << " ";
		} i++;
	}
	
	return 0;
}
