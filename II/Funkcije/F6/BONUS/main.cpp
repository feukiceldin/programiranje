#include <iostream>
using namespace std;

bool prestupnaGodina(int godina){
	if (godina % 400 == 0){
		return true;
	} else if (godina % 100 == 0){
		return false;
	} else if (godina % 4 == 0){
		return true;
	} else {
		return false;
	}
}

void ispisiDatum(int dan, int mjesec, int godina, int brojGodina){
	for (int i = 0; i < brojGodina; i++){
		if (prestupnaGodina(godina+1)){
			dan--;
		} godina++;
		dan--;
		if (dan < 24){
			dan = 31-(24-dan);
		}
	} cout << dan << " " << mjesec << " " << godina; 
}

int main(int argc, char** argv) {
	int dan, mjesec, godina, brojGodina;
	cin >> dan >> mjesec >> godina;
	cout << endl;
	cin >> brojGodina;
	
	ispisiDatum(dan, mjesec, godina, brojGodina);
	
	return 0;
}
