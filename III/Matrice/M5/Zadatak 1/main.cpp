#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {

	int n;
	
	p: cout << "Unesite dimenzije kvadratne matrice n: ";
	cin >> n;
	
	if (n > 20 || n < 1){
		cout << "Neispravne dimenzije!\n";
		goto p;
	}
	
	string str = "\n1. Program ispisuje zvjezdice po sporednoj dijagonali\n2. Program ispisuje zvjezdice po glavnoj i sporednoj dijagonali\n3. Program ispisuje zvjezdice u trokutu iznad glavne dijagonale\n4. Program ispisuje zvjezdice u trokutu ispod glavne dijagonale\n5. Program ispisuje zvjezdice u srednjoj koloni i srednjem redu\n6. Program ispisuje zvjezdice po rubu matrice\n7. Program ispisuje britansku zastavu\n8. Program stampa krug Hint: Ovdje koristite centralni oblik jednacine kruznice, tj. Pustite da i, j idu od -const do const, a onda provjerite poluprecnik na neko fiksno r.\n9. Program ispisuje polumjesec\n10. Program ispisuje tursku zastavu\n11. Exit\n\n";
	cout << str << "Odaberite jednu od opcija: ";
	
	int odabir;
	cin >> odabir;
	
	char arr[n][n];
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			arr[i][j] = '*';
		}
	}
	
	int r = n/2;
	switch (odabir){
		case 1:
			cout << "Sporedna dijagonala:\n";
			for (int i = 0; i < n; i++){
				for (int j = 0; j < n; j++){
					if (i + j == n - 1){
						cout << setw(4) << arr[i][j];
					} else {
						cout << setw(4) << " ";
					}
				} cout << endl;
			} break;
		case 2:
			cout << "Glavna i sporedna dijagonala:\n";
			for (int i = 0; i < n; i++){
				for (int j = 0; j < n; j++){
					if (i + j == n - 1 || i == j){
						cout << setw(4) << arr[i][j];
					} else {
						cout << setw(4) << " ";
					}
				} cout << endl;
			} break;
		case 3:
			cout << "Iznad glavne dijagonale:\n";
			for (int i = 0; i < n; i++){
				for (int j = 0; j < n; j++){
					if (i < j){
						cout << setw(4) << arr[i][j];
					} else {
						cout << setw(4) << " ";
					}
				} cout << endl;
			} break;
		case 4: 
			cout << "Ispod glavne dijagonale:\n";
			for (int i = 0; i < n; i++){
				for (int j = 0; j < n; j++){
					if (i > j){
						cout << setw(4) << arr[i][j];
					} else {
						cout << setw(4) << " ";
					}
				} cout << endl;
			} break;
		case 5: 
			cout << "Srednja kolona i red:\n";
			for (int i = 0; i < n; i++){
				for (int j = 0; j < n; j++){
					
					if (i == n/2 || j == n/2 || (n % 2 == 0 && (i == n/2-1 || j == n/2-1))){
						cout << setw(4) << arr[i][j];
					} else {
						cout << setw(4) << " ";
					}
				} cout << endl;
			} break;
		case 6: 
			cout << "Elementi po rubu:\n";
			for (int i = 0; i < n; i++){
				for (int j = 0; j < n; j++){
					if (i == 0 || i == n-1 || j == 0 || j == n-1){
						cout << setw(4) << arr[i][j];
					} else {
						cout << setw(4) << " ";
					}
				} cout << endl;
			} break;
		case 7: 
			cout << "Britanska zastava:\n";
			for (int i = 0; i < n; i++){
				for (int j = 0; j < n; j++){
					if (i == n/2 || j == n/2 || (n % 2 == 0 && (i == n/2-1 || j == n/2-1)) || (i+j == n-1) || (i == j)){
						cout << setw(4) << arr[i][j];
					} else {
						cout << setw(4) << " ";
					}
				} cout << endl;
			} break;
		case 8: 
			cout << "Krug:\n";
			r = n/2;
			for (int i = 0; i < n; i++){
				for (int j = 0; j < n; j++){
					if ((i-r)*(i-r)+(j-r)*(j-r) <= r*r){
						cout << setw(4) << arr[i][j];
					} else {
						cout << setw(4) << " ";
					}
				} cout << endl;
			} break;
		case 9: 
			cout << "Polukrug:\n";
			r = n/2;
			for (int i = 0; i < n; i++){
				for (int j = 0; j < n; j++){
					if ((i-r)*(i-r)+(j-r)*(j-r) <= r*r && j>=n/2){
						cout << setw(4) << arr[i][j];
					} else {
						cout << setw(4) << " ";
					}
				} cout << endl;
			} break;
		case 10: 
			cout << "Turska:\n";
			r = n/2;
			for (int i = 0; i < n; i++){
				for (int j = 0; j < n; j++){
					if (((i-r)*(i-r)+(j-r)*(j-r) <= r*r && j<n/2) || (n/2 == j-1 && j < n)){
						cout << setw(4) << arr[i][j];
					} else {
						cout << setw(4) << " ";
					}
				} cout << endl;
			} break;
	}
	
	return 0;
}