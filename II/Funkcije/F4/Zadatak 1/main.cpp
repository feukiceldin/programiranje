#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void ispisiSlucajanBroj();
void ispisiSumuDoN(int n);
void ispisiParanBroj(int x);
void ispisiNnaM(int n, int m);
void ispisiObim (double a, double b);

int main(int argc, char** argv) {
	
	int odabir;
	
	p: cout << "Unesite koju funkciju zelite:\n1. Slucajan broj\n2. Suma do N\n3. Paran broj\n4. N na M\n5. Obim pravougaonika\n6. Izlaz\n : ";
	cin >> odabir;
	
	switch (odabir){
		case 1: {
			ispisiSlucajanBroj();			
			break;
		}
		
		case 2: {
			int n;
			suma: cout << "Unesite dokle zelite sumu: ";
			cin >> n;
			if (n < 0){
				cout << "Broj mora biti veci od nule." << endl;
				goto suma;
			}
			ispisiSumuDoN(n);
			break;
		}
		
		case 3: {
			int broj;
			cout << "Unesite broj koji zelite provjeriti: ";
			cin >> broj;
			ispisiParanBroj(broj);
			break;
		}
		
		case 4: {
			int a, b;
			cout << "Unesite bazu i eksponent: ";
			cin >> a >> b;
			ispisiNnaM(a, b);
			break;
		}
		
		case 5: {
			int a, b;		
			pravougaonik: cout << "Unesite stranice pravougaonika: ";
			cin >> a >> b;
			if (a <= 0 || b <= 0){
				cout << "Neispravna duzina stranica." << endl;
				goto pravougaonik;
			}
			ispisiObim(a, b);	
			break;
		}
		
		case 6: {
			goto kraj;
			break;
		}
		
		default: {
			cout << "Neispravan unos, ponavljanje" << endl;
			goto p;
			break;
		}
	}
	
	kraj:
	return 0;
}

void ispisiSlucajanBroj(){
	srand(time(0));
	cout << "Slucajan broj: " << rand()%10;
}

void ispisiSumuDoN(int n){
	int sum = 0;
	for (int i = 0; i <= n; i++){
		sum += i;
	} cout << "Suma je: " << sum;
}

void ispisiParanBroj(int x){
	cout << (x % 2 == 0 ? "Broj je paran" : "Broj je neparan");
}

void ispisiNnaM(int n, int m){
	int rez = 1;
	for (int i = 1; i <= m; i++){
		rez*=n;
	} 
	printf("Broj %d na %d je %d", n, m, rez);
}

void ispisiObim (double a, double b){
	cout << "Obim je: " << (2*a + 2*b);
}
