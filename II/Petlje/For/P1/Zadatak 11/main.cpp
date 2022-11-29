#include <iostream>
using namespace std;

long sum;
long long p;

int main(int argc, char** argv) {
	
	sum = 0; 
	p = 1;
	
	cout << "Racunanje sume brojeva djeljivih sa 3 u rasponu od 300 do 400" << endl;
	
	for (int i = 300; i <= 400; i++){
		if (i % 3 == 0){
			sum += i;
			p *= i;	
		}
	}
	
	cout << "Suma brojeva od 300 do 400 djeljivih sa 3: " << sum << endl;
	cout << "Proizvod brojeva od 300 do 400 djeljivih sa 3: " << p;
	
	return 0;
}
