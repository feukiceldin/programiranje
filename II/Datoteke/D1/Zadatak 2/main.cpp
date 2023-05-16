#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
	
	ofstream ulaz;
	
	ulaz.open("brojevi.txt");
	
	for (int i = 1; i <= 10; i++){
		ulaz << i << endl;
	}
	
	ulaz << "kraj";
	
	ulaz.close();
	
	return 0;
}
