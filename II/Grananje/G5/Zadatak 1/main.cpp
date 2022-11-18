#include <iostream>
using namespace std;

int broj, s, d, j, najveci;

int main(int argc, char** argv) {
	
	cout << "Unesite trocifreni broj: ";
	cin >> broj;
	
	j = broj%10;
	d = (broj/10)%10;
	s = broj/100;
	
	if (j>s){
		swap(j, s);
	}
	if (j>d){
		swap(j,d);
	}
	if (d>s){
		swap(d,s);
	}
	
	najveci = s*100+d*10+j;
	
	cout << "Najveci broj od cifara je: " << najveci;
	
	return 0;
}
