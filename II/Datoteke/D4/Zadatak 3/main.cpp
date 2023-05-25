#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
	
	ifstream ulaz;
	ofstream izlaz;
	int i = 0;
	
	ulaz.open("ulaz.txt");
	izlaz.open("izlaz.txt");
	
	while (!ulaz.eof()){
		char ch = ulaz.get();
		
		if (i % 3 == 0){
			izlaz << ch;	
		}
		
		i++;
	}
	
	return 0;
}
