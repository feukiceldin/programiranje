#include <iostream>

using namespace std;

double a, b, c;

int main(int argc, char** argv) {

	P: cout << "Unesite tri realna broja: ";
	cin >> a >> b >> c;

	if (a <= 0 || b <= 0 || c <= 0){
		cout << "Neispravan unos." << endl;
		goto P;
	} 
	
	if (!(a+b>c && a+c>b && c+b>a)){
		cout << "Ne postoji trougao sa datim stranicama.";
	} else {
		
		cout << "Trougao je ";
		
		if (a == b && b == c){
			cout << "jednakostranicni.";
		} else if (a != b && b != c && c != a){
			cout << "raznostranicni.";
		} else {
			cout << "jednakokraki.";
		}
	}
	
	return 0;
}
