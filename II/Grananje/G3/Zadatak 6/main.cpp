#include <iostream>
using namespace std;

int a, b, ugao;

int main(int argc, char** argv) {
	
	P: cout << "Unesite stranicu a: ";
	cin >> a;
	
	cout << "Unesite stranicu b: ";
	cin >> b;
	
	if (a <= 0 || b <= 0){
		cout << "STRANICE NE MOGU BITI NEGATIVNE!!!" << endl;
		goto P;
	}
	
	cout << "Unesite ugao: ";
	cin >> ugao;
	
	if (ugao <= 0){
		cout << "UGAO NE MOZE BITI NEGATIVAN!!!" << endl;
		goto P;
	}
	
	if (a == b){
		if (ugao == 90){
			cout << "Kvadrat!";
		} else {
			cout << "Romb!";
		}
	} else {
		if (ugao == 90){
			cout << "Pravougaonik!";
		} else {
			cout << "Paralelogram!";
		}
	}
	
	return 0;
}
