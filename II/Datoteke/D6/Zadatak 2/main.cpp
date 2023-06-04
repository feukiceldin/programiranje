#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
	
	ifstream ulaz;
	
	int a, b, i, nzd, suma, sumb;
	
	ulaz.open("ulaz.txt");
	
	ulaz >> a;
	ulaz >> b;
	
	if (a > b){
		i = b;
	} else {
		i = a;
	}
	
	for (i; i > 0; i--){
		if (a % i == 0 && b % i == 0){
			nzd = i;
			break;
		}
	}
	
	while (a != 0){
		suma += a%10;
		a/=10;		
	}
	
	while (b != 0){
		sumb += b%10;
		b/=10;
	}
	
	if ((suma+sumb) % nzd == 0){
		cout << "DA";
	} else {
		cout << "NE";
	}
	
	return 0;
}
