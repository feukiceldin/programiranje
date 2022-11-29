#include <iostream>
using namespace std;

int sum, uk;

int main(int argc, char** argv) {
	
	sum = 0; 
	uk = 0;
	
	cout << "Racunanje sume brojeva djeljivih sa 7 u rasponu od 200 do 300" << endl;
	
	for (int i = 200; i <= 300; i++){
		if (i % 7 == 0){
			sum += i;
			uk++;	
		}
	}
	
	cout << "Suma brojeva od 200 do 300 djeljivih sa 7: " << sum << endl;
	cout << "Takvih brojeva ima: " << uk;
	
	return 0;
}
