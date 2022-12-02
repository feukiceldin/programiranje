#include <iostream>
using namespace std;

int i = 200;
int sum = 0;
int uk = 0;

int main(int argc, char** argv) {
	
	while (i <= 300){
		if(i % 7 == 0){
			sum+=i;
			uk++;
		} i++;
	}	
	
	cout << "Suma brojeva od 200 do 300 je: " << sum << endl;
	cout << "Takvih brojeva ima " << uk;
	
	return 0;
}
