#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
	
	ifstream ulaz;
	int sat, minuta, casovi;
	ofstream izlaz;
	
	izlaz.open("izlaz.txt");
	ulaz.open("ulaz.txt");
	
	ulaz >> sat >> minuta >> casovi;
	
	int sum = sat*60 + minuta + casovi*50-5;
	
	sat = (sum/60)%24;
	minuta = sum % 60;
	
	izlaz << sat << " " << minuta;
		
	return 0;
}
