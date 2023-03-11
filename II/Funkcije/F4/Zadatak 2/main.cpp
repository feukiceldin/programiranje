#include <iostream>
using namespace std;

void ispisiAritmetickuSredinu(int a, int b){
	double sum = 0;
	double as = 0;
	int uk = 0;
	for (int i = a; i <= b; i++){
		sum += i;
		uk++;
	} 
		
	printf("Aritmeticka sredina brojeva od %d do %d je %f", a, b, sum/uk);
}

int main(int argc, char** argv) {
	
	int a, b;
	
	p: cout << "Unesite dva prirodna broja: ";
	cin >> a >> b;
	
	if (a > b){
		cout << "Gornja granica mora biti veca od donje granice." << endl;
		goto p;
	}
	
	ispisiAritmetickuSredinu(a, b);
	
	return 0;
}
