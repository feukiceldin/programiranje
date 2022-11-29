#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	cout << "Brojevi sa cifrom desetice 2 i cifrom jedinice 7: " << endl;
	
	for (int i = 100; i <= 999; i++){
		if (i % 10 == 7 && (i/10) % 10 == 2){
			cout << i << " ";
		}
	}
	
	return 0;
}
