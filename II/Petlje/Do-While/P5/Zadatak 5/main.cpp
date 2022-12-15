#include <iostream>
using namespace std;

int i = 100;
int c = 2;
bool prost;

int main(int argc, char** argv) {
	
	do {
		c = 2;	
		prost = true;	
		
		while (c < i){
			if (i % c == 0){
				prost = false;
				break;
			} c++;
		} 
		
		if(prost){
			cout << i << " ";
		}
			
		i++;
		
	} while (i < 1000);
	
	return 0;
}
