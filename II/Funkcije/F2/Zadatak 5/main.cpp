#include <iostream>
using namespace std;

bool savrsen (int);

int main(int argc, char** argv) {
	
	for (int i = 1; i < 19999; i++){
		if (savrsen(i)){
			cout << i << " ";
		}
	}
	
	return 0;
}

bool savrsen (int x){
	int y = 0;
	
	for (int i = 1; i < x; i++){
		if (x % i == 0){
			y+=i;
		}
	}
		
	return x==y;
}
