#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

int randInt(){
	srand(time(0));
	return rand() % 10 + 1;	
}

bool paran (int x){
	return x % 2 == 0;
}

int sumaN (int n){
	int suma = 0;
	for (int i = 0; i <= n; i++){
		suma += i;
	} return suma;
}

int nNaM (int n, int m){
	int broj = 1;
	for (int i = 0; i < m; i++){
		broj *= n;
	} return broj;
}

double obim (double a, double b){
	return (2*a + 2*b);
}

int main(int argc, char** argv) {
	
	int odabir;	
	
	p: cout << "Odaberite funkciju koju zelite:\n1. Slucajan broj\n2. Provjera parnosti\n3. Suma do N\n4. Racunanje stepena\n5. Racunanje obima pravougaonika\n: ";
	cin >> odabir;
	
	switch (odabir){
		case 1: {
			cout << "Slucajan broj generisan funkcijom: " << randInt() << endl;
			break;
		}
		
		case 2: {
			int x;
			cout << "Unesite broj za provjeru parnosti: ";
			cin >> x;
			cout << "Funkcijom je utrvdjeno da je broj: " << (paran(x) ? "paran" : "neparan") << endl;		
			break;
		}
		
		case 3: {
			int n;
			cout << "Unesite broj dokle zelite sumu: ";
			cin >> n;
			cout << "Funkcijom je utrvdjeno da je suma: " << sumaN(n) << endl;		
			break;
		}
		
		case 4: {
			int n, m;
			cout << "Unesite bazu i eksponent: ";
			cin >> n >> m;
			cout << "Funkcijom je utrvdjeno da je rezultat: " << nNaM(n, m) << endl;		
			break;
		}
		
		case 5: {
			int a, b;
			cout << "Unesite stranice pravougaonika: ";
			cin >> a >> b;
			cout << "Funkcijom je utrvdjeno da je obim: " << obim(a, b);
			break;
		}
		default: {
			cout << "Neispravan odabir. Pokusajte ponovo" << endl;
			goto p;
			break;
		}
	}
	
	return 0;
}
