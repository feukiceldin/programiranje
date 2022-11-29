#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	cout << "Brojevi djeljivi sa 8 u rasponu od 300 do 400:" << endl;
	
	for (int i = 300; i <= 400; i++){
		if (i % 8 == 0){
			cout << i << " ";
		}
	}
	
	return 0;
}
