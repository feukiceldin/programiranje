#include <iostream>
#include <iomanip>
using namespace std;

double fond, iznos1, iznos2, iznos3, iznos4;
double fond1, fond2, fond3, fond4;

int main(int argc, char** argv) {

	cout << "Unesite iznos nagradnog fonda [KM]: ";
	cin >> fond;

	cout << "Unesite iznos racuna 1. odabranog korisnika [KM]: ";
	cin >> iznos1;

	cout << "Unesite iznos racuna 2. odabranog korisnika [KM]: ";
	cin >> iznos2;

	cout << "Unesite iznos racuna 3. odabranog korisnika [KM]: ";
	cin >> iznos3;

	cout << "Unesite iznos racuna 4. odabranog korisnika [KM]: ";
	cin >> iznos4;
	
	if (iznos1<iznos2){
		swap(iznos1, iznos2);
	}

	if (iznos1<iznos3){
		swap(iznos1, iznos3);
	}

	if (iznos1<iznos4){
		swap(iznos1, iznos4);
	}

	if (iznos2<iznos3){
		swap(iznos2, iznos3);
	}

	if (iznos2<iznos4){
		swap(iznos2, iznos4);
	}
	
	if (iznos3<iznos4){
		swap(iznos3, iznos4);
	}

	if (iznos1 > (iznos2+iznos3+iznos4)){
		fond1 = fond*0.75;
		fond2 = (fond*0.25)/3;
		fond3 = fond2;
		fond4 = fond2;
	} else {
		fond1 = fond*0.25;
		fond2 = fond1;
		fond3 = fond1;
		fond4 = fond1;
	}
	
	cout << setprecision(3);
	cout << "Racuni sortirani po velicini sa pripadajucim nagradama: " << endl;
	cout << "1. racun od " << iznos1 << " dobiva nagradu od " << fond1 << " [KM]" << endl;
	cout << "2. racun od " << iznos2 << " dobiva nagradu od " << fond2 << " [KM]" << endl;
	cout << "3. racun od " << iznos3 << " dobiva nagradu od " << fond3 << " [KM]" << endl;
	cout << "4. racun od " << iznos4 << " dobiva nagradu od " << fond4 << " [KM]";

	return 0;
}
