#include <iostream>
using namespace std;

int i = 0;
double ustedjevina = 5500;

int main(int argc, char** argv) {

	while (ustedjevina < 12000){
		ustedjevina *= 1.065;
		i++;
	}

	cout << "Ustedjevina nakon " << i << " godina je " << ustedjevina << " KM";

	return 0;
}
