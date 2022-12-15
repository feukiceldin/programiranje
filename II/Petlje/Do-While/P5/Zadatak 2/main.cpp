#include <iostream>
using namespace std;

double sum = 0;
double broj;
int i = 1;

int main(int argc, char** argv) {
	
	p: cout << "Unesite broj: ";
	cin >> broj;
	
	if (broj <= 0){
		cout << "Neispravan unos." << endl;
		goto p;
	}
		
	do {
		
		if(i % 2 == 0){
			sum-=1.0f/i;
		} else {
			sum+=1.0f/i;
		} i++;
		
	} while (i <= broj);
	
	cout << "Suma je " << sum;
	
	return 0;
}
