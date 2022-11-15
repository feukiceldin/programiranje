#include <iostream>
#include <cmath>
using namespace std;

float a, b, c, s, o, p;
int odabir;

int main(int argc, char** argv) {
	
	p: cout << "Unesite vrijednost prve stranice a = ";
	cin >> a;
	
	cout << "Unesite vrijednost druge stranice b = ";
	cin >> b;
	
	cout << "Unesite vrijednost trece stranice c = ";
	cin >> c;
	
	if (a <= 0 || b <= 0 || c <= 0){
		cout << "Stranice trougla ne smiju biti manje ili jednake nuli!" << endl;
		goto p;
	}
	
	if (!(a + b > c && a + c > b && c + b > a)){
		cout << "Te stranice ne cine trougao!" << endl;
		goto p;
	}
	
	cout << "Odaberite jednu od opcija: " << endl << "1. Obim trougla" << endl << "2. Povrsina trougla" << endl;
	cin >> odabir;
	
	switch (odabir){
		case 1:
			o = a + b + c;
			cout << "Obim trougla je: " << o;
			break;
		
		case 2: 
			s = (a + b + c)/2;
			p = sqrt(s*(s-a)*(s-b)*(s-c));
			cout << "Povrsina trougla je: " << p;
			break;
			
		default:
			cout << "Neispravan unos. Ponovni unos!" << endl;
			goto p;
			
	}
	
	return 0;
}
