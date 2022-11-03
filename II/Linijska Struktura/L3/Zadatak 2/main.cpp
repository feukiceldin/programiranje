#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

double l, s, h, v;

int main(int argc, char** argv) {
	
	cout << "Unesite duzinu bazena: ";
	cin >> l;
	
	cout << "Unesite sirinu bazena: ";
	cin >> s;
	
	cout << "Unesite visinu bazena: ";
	cin >> h;
	
	v = l*s*h*1000;
	
	cout << "Za punjenje bazena potrebno je: " << v << " litara vode.";
	
	return 0;
}
