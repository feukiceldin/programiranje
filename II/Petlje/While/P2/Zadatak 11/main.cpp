#include <iostream>
using namespace std;

int sum = 0;
double pr = 1;
int i = 1;

int main(int argc, char** argv) {
	
	while (i <= 300){
		if(i % 3 == 0){
			sum+=i;
			pr*=i;
		} i++;
	}	
	
	cout << "Suma prirodnih brojeva od 1 do 300 djeljivih sa 3 je: " << sum << endl;
	cout << "Proizvod prirodnih brojeva od 1 do 300 djeljivih sa 3 je: " << pr;
	
	return 0;
}
