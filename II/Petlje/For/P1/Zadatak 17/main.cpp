#include <iostream>
using namespace std;

int cj, cd, cs;

int main(int argc, char** argv) {
	
	cout << "Trocifreni brojevi sa cifrom jedinice 0 i zbirom cifara 5:" << endl;
	
	for (int i = 100; i <= 999; i++){
		cj = i % 10;
		cd = (i/10) % 10;
		cs = i/100;
		
		if (cj == 0 && (cd+cs) == 5){
			cout << i << " ";
		}
	}
	
	return 0;
}
