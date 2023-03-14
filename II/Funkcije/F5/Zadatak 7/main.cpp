#include <iostream>
using namespace std;

int brojNeparnihCifara(int broj){
	int cifra = 0;
	while (broj != 0){
		if ((broj%10)%2 == 1){
			cifra++;
		} broj /= 10;
	} return cifra;
}

int main(int argc, char** argv) {
	int broj;
	
	while (true){
		cout << "Unesite cijeli broj: ";
		cin >> broj;
		if (broj == 0){
			break;
		}
		cout << "Broj neparnih cifara je: " << brojNeparnihCifara(broj) << endl;
	}	
	
	return 0;
}
