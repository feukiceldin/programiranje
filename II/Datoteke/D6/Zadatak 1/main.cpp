#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
	
	ifstream ulaz;
	double temp;
	double max;
	
	ulaz.open("ulaz.txt");
	
	while (ulaz.good()){
		string str;
		getline(ulaz, str);
		
		temp = atof(str.c_str());
		
		if (temp > max){
			max = temp;
		}	
	}
	
	cout << "Najveci broj je " << max;	
	
	return 0;
}
