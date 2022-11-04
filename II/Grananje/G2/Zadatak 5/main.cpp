#include <iostream>
using namespace std;

int broj, j, d, s, h, maxi;

int main(int argc, char** argv) {
	
	cout << "Unesite cetverocifreni broj: ";
	cin >> broj;
	
	if (broj > 9999){
		cout << "Broj mora biti cetverocifreni, pokusaj ponovo" << endl;
		cout << "Unesite cetverocifreni broj: ";
		cin >> broj;
	} 
	
	j = broj%10;
	d = (broj/10)%10;
	s = (broj/100)%10;
	h = broj/1000;
	
	maxi = h;
	
	if (s > maxi){
		maxi = s;
	}
	if (d > maxi){
		maxi = d;
	}
	if (j > maxi){
		maxi = j;		
	} 
	
	cout << "Najveca unesena cifra cetverocifrenog broja je " << maxi;
	
	return 0;
}
